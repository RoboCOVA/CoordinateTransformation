/*
 * transformationMatrix.c
 *
 *  Created on: Jan 24, 2015
 *      Author: tesfu
 */

/*
this algorithm computes the transformation matrix between two point clouds
for example the transformation matrix between model coordinates and robot
base frame. This may help in path and trajectory planning, it can also be used
in registration of point cloud in different frame into the frame especially
we can use it in structure from motion in vast scale.
*/
/*
 /*specifically this function computes the transformation matrix between robot and
  * model coordinates by using pointing laser mounted on the robot */


#include<stdio.h>
#include <stdlib.h>
#include "cloudToCloud.h"


int main(int argc, char**  argv){

/* if you have point cloud in text file  - read the file in and populate the cloud in array  of vector*/

	  int n = 3; // the dimension of point cloud
		int N = 4; // The number of cloud point
	// the model coordinate point cloud
		float modelCloud[] = { square_size, square_size * 6,
				0.01, // sorted in 	X1,X2,X3,X4 column wise
				square_size, square_size, 0.0, square_size * 6, square_size, 0.02,
				square_size * 6, square_size * 6, 0.05 };

		// the robot coordinate point cloud

		float cloudInRobot[] = { 576.4, -73.3, 408, 436.4, -81.3, 407.1, 444.7,
				-221.3, 407.1, 584.9, -213.3, 407.4

		};


		float cloudInModel[] = { 736.9, -71.0, 261.1 +300,
			                         596.9, -79.0, 260.2 +300,
			                                605.2,  -219.0, 260.1+300 ,
			                                 745.3, -210.9,  260.5 +300};

		/* 300 is the range of laser in zeta direction */


trans_cloudTocloud(n,N,cloudInRobot,cloudInModel ,modelCloud);


}
