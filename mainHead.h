#pragma once
#define PI 3.14159265

#define X 47
#define Y 47
#define CONCENTRIC_X 6
#define CONCENTRIC_Y 6
#define CONCENTRIC_X1 42
#define CONCENTRIC_Y1 42


//Macros for colour pixels
#define CpixelB(images,x,y) ( (uchar *) ( ((images).data) + (y)*((images).step) ) ) [(x)*((images).channels())]
#define CpixelG(images,x,y) ( (uchar *) ( ((images).data) + (y)*((images).step) ) ) [(x)*((images).channels())+1]
#define CpixelR(images,x,y) ( (uchar *) ( ((images).data) + (y)*((images).step) ) ) [(x)*((images).channels())+2]