/*
 * obstacle.h
 *
 *  Created on: 2013-10-01
 *      Author: Kevin
 */

#ifndef OBSTACLE_H_
#define OBSTACLE_H_

#include "bitmap.h"
//int img[4096] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 10, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 12, 12, 12, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 1, 10, 10, 10, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 10, 0, 0, 0, 0, 0, 0, 0, 10, 9, 9, 9, 9, 1, 10, 10, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 12, 12, 10, 0, 0, 10, 10, 10, 10, 1, 9, 9, 9, 9, 9, 9, 4, 4, 10, 10, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 12, 12, 12, 10, 0, 10, 4, 4, 4, 10, 1, 9, 9, 9, 9, 9, 5, 12, 12, 12, 4, 4, 10, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 10, 10, 4, 4, 4, 10, 9, 9, 9, 9, 9, 9, 5, 12, 12, 12, 12, 5, 9, 1, 10, 10, 10, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 10, 4, 4, 4, 10, 1, 9, 9, 9, 9, 9, 9, 12, 12, 12, 12, 12, 1, 9, 9, 9, 1, 10, 10, 10, 10, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 4, 10, 4, 4, 4, 10, 1, 9, 9, 9, 9, 9, 5, 12, 12, 12, 12, 12, 9, 9, 9, 9, 9, 10, 14, 14, 14, 10, 10, 10, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 14, 12, 14, 14, 12, 14, 14, 12, 12, 12, 4, 10, 4, 4, 4, 10, 9, 9, 9, 9, 9, 9, 4, 12, 12, 12, 12, 5, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 1, 10, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 14, 14, 14, 14, 14, 14, 14, 14, 14, 12, 12, 12, 10, 4, 4, 4, 10, 1, 9, 9, 9, 9, 9, 1, 12, 12, 12, 12, 12, 1, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 1, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 10, 4, 4, 4, 10, 9, 9, 9, 9, 9, 9, 5, 12, 12, 12, 12, 4, 9, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 1, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 10, 4, 4, 4, 10, 9, 9, 9, 9, 9, 9, 4, 12, 12, 12, 12, 5, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 1, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 10, 4, 4, 4, 10, 1, 9, 9, 9, 9, 9, 1, 12, 12, 12, 12, 12, 9, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 14, 14, 14, 14, 14, 14, 14, 14, 14, 10, 4, 4, 4, 10, 9, 9, 9, 9, 9, 9, 5, 12, 12, 12, 12, 4, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 14, 14, 14, 14, 14, 14, 14, 14, 10, 4, 4, 4, 10, 1, 9, 9, 9, 9, 9, 9, 12, 12, 12, 12, 12, 5, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 14, 14, 14, 14, 14, 14, 10, 4, 4, 4, 10, 1, 9, 9, 9, 9, 9, 5, 12, 12, 12, 12, 12, 9, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 14, 12, 12, 14, 14, 10, 4, 4, 4, 10, 9, 9, 9, 9, 9, 9, 4, 12, 12, 12, 12, 5, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 10, 4, 4, 4, 10, 1, 9, 9, 9, 9, 9, 9, 12, 12, 12, 12, 12, 1, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 12, 12, 12, 4, 10, 4, 4, 4, 10, 1, 9, 9, 9, 9, 9, 5, 12, 12, 12, 12, 4, 9, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1, 10, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 12, 12, 12, 4, 10, 4, 4, 4, 10, 9, 9, 9, 9, 9, 9, 4, 12, 12, 12, 12, 5, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 12, 12, 10, 4, 4, 4, 10, 1, 9, 9, 9, 9, 9, 1, 12, 12, 12, 12, 12, 1, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 12, 12, 12, 12, 10, 4, 4, 4, 10, 9, 9, 9, 9, 9, 9, 5, 12, 12, 12, 12, 4, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 10, 12, 12, 12, 12, 10, 10, 10, 10, 4, 4, 10, 1, 9, 9, 9, 9, 9, 9, 12, 12, 12, 12, 12, 5, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 10, 10, 0, 0, 10, 4, 4, 4, 10, 1, 9, 9, 9, 9, 9, 1, 12, 12, 12, 12, 12, 9, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 4, 4, 4, 10, 9, 9, 9, 9, 9, 9, 5, 12, 12, 12, 12, 5, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 4, 10, 1, 9, 9, 9, 9, 9, 9, 12, 12, 12, 12, 12, 1, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 1, 9, 9, 9, 9, 9, 5, 12, 12, 12, 12, 12, 9, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 9, 9, 9, 9, 9, 9, 4, 12, 12, 12, 12, 5, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 9, 9, 9, 9, 9, 1, 12, 12, 12, 12, 12, 1, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 1, 9, 9, 9, 9, 9, 5, 12, 12, 12, 12, 4, 9, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 1, 10, 0, 0, 0, 0, 10, 10, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 9, 9, 9, 9, 9, 9, 4, 12, 12, 12, 12, 5, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 1, 9, 9, 9, 1, 12, 12, 12, 12, 12, 1, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 1, 1, 5, 12, 12, 12, 12, 4, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 1, 10, 0, 0, 0, 0, 0, 0, 0, 0, 10, 1, 9, 9, 9, 9, 9, 9, 1, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 10, 4, 12, 12, 12, 5, 9, 9, 9, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 10, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 10, 10, 4, 4, 9, 9, 9, 9, 9, 10, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 10, 9, 9, 9, 9, 9, 9, 1, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 10, 10, 10, 1, 1, 9, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 0, 0, 0, 0, 0, 10, 1, 9, 9, 9, 9, 9, 1, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 10, 10, 10, 10, 14, 14, 14, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 0, 10, 9, 9, 9, 9, 9, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 10, 10, 14, 14, 10, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1, 10, 9, 9, 9, 9, 9, 9, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 10, 10, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 10, 10, 1, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 5, 5, 5, 5, 5, 5, 5, 10, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 10, 10, 10, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

typedef enum {
	WALL,
	POTION,
	WENCH,
	CHEST,
	COIN,
	POISION
} ObstacleType;

typedef struct{
	Bitmap * bitmap;
	ObstacleType type;
	int coordinates_x;
	int coordinates_y;
	struct Obstacle * next;
} Obstacle;

Obstacle * construct_obstacle(ObstacleType type, int xpos, int ypos) {
	Obstacle * obstacle = malloc(sizeof(Obstacle));
	obstacle->type = type;
	obstacle->coordinates_x = xpos;
	obstacle->coordinates_y = ypos;
	obstacle->next = NULL;

//	obstacle->bitmap = malloc(sizeof(Bitmap));
//	obstacle->bitmap->width = 64;
//	obstacle->bitmap->height = 64;
//
//	int i, j, k=0;
//	for (i=0; i<obstacle->bitmap->width; i++) {
//		for(j=0; j<obstacle->bitmap->height; j++) {
//			obstacle->bitmap->data[i*obstacle->bitmap->height + j] = img[k];
//			k++;
//		}
//	}

	obstacle->bitmap = load_bitmap("potion.bmp");
	return obstacle;
}

#endif /* OBSTACLE_H_ */
