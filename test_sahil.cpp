#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <iostream>

using namespace cv;
using namespace std;

Mat src;

int main(int argc, char* argv[])
{
  /// Read the image
  src = imread( argv[1], 1 ); 
  imshow( "Source", src );
  cvtColor( src, src, CV_BGR2GRAY );
  GaussianBlur ( src, src, Size(3,3),0,0 );
  Canny( src, src, 220, 240, 3 );
  imshow( "Canny", src );
  waitKey(0);
}
