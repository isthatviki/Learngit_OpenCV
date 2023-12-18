//
//  test.cpp
//  opencvtest1
//
//  Created by 韦佳祎 on 2023/12/18.
//

#include <iostream>

#include<iostream>
#include<opencv2/opencv.hpp>

int main()
{
    std::string image_path = "/Users/weijiayi/Desktop/omg.jpg";
    cv::Mat gray_img = cv::imread(image_path, 1);
    if (gray_img.empty())
    {
        std::cout << "no file" << std::endl;
        return 0;
    }
    cv::imshow("image", gray_img);

    cv::waitKey(0);
    return 0;
}
