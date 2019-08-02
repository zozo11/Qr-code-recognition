#pragma once
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2\objdetect\objdetect.hpp>
#define QR_SIZE 2101

using namespace std;
using namespace cv;

class DetectedImg
{
private:
	string QRCode = "";
	int err = 0;
	Mat img, image_gray, image2, image_canny;
	int QR[QR_SIZE];
	int x, y, z = 0;
	int R, G, B;
	vector<Vec3f> circles;
	char encodingarray[64] = { ' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','w','z',
	'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','W','Z',
	'0','1','2','3','4','5','6','7','8','9','.' };
public:
	DetectedImg();
	void DetectImg_read(const char * file_p);
	Mat DetectImgRotate(Mat img);
	Mat DetectImgScale(Mat img);
	string DetectQR(Mat img);
	~DetectedImg();

};

