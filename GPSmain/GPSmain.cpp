// GPSmain.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"

#include <opencv2/nonfree/nonfree.hpp>
#include <opencv/highgui.h>

void main()
{
	// �摜�ǂݍ���
	const cv::Mat input = cv::imread("C:\\temp\\p.jpg", 1);

	// SIFT�ɂ��������o
	cv::SiftFeatureDetector detector;
	std::vector<cv::KeyPoint> keypoints;
	detector.detect(input, keypoints);

	// �L�[�|�C���g�̏�������
	cv::Mat output;
	cv::drawKeypoints(input, keypoints, output);

	// �L�[�|�C���g���������񂾉摜�̕\��
	cv::imshow("SIFT", output);

	cv::waitKey();
}