// GPSmain.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

#include <opencv2/nonfree/nonfree.hpp>
#include <opencv/highgui.h>

void main()
{
	// 画像読み込み
	const cv::Mat input = cv::imread("C:\\temp\\p.jpg", 1);

	// SIFTによる特徴検出
	cv::SiftFeatureDetector detector;
	std::vector<cv::KeyPoint> keypoints;
	detector.detect(input, keypoints);

	// キーポイントの書き込み
	cv::Mat output;
	cv::drawKeypoints(input, keypoints, output);

	// キーポイントを書き込んだ画像の表示
	cv::imshow("SIFT", output);

	cv::waitKey();
}