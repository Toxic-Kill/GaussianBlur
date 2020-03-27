#include <iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	VideoCapture cap(0);//调用摄像头
	while (1)
	{
		cv::Mat frame;
		cv::Mat detectMat;
		cap >> frame;//捕捉当前帧
		GaussianBlur(frame, detectMat, Size(3, 3), 1, 1);//进行高斯平滑卷积运算
		cv::imshow("frame", frame);//显示当前图像
		cv::imshow("Gau", detectMat);//显示高斯平滑卷积处理后图像
		waitKey(30);
	}
}

