/*
 * cloudToCloud.h
 *
 *  Created on: Jan 24, 2015
 *      Author: tesfu
 */

#ifndef CLOUDTOCLOUD_H_
#define CLOUDTOCLOUD_H_

#define square_size 29
#include<stdio.h>

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/calib3d/calib3d.hpp"
CvMat* transformation_matrix1;
CvMat* modelCoords;
	CvMat* robotCoords;

void trans_cloudTocloud(int n, int N , float MP_modelPointCoords[],float MP_InRobotCoords[] ,float modelC []);


//CvMat* pass_trans_target_robot(CvMat* mat);


#endif /* CLOUDTOCLOUD_H_ */
