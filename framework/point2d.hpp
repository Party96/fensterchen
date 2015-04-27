#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#ifndef BUW_POINT2D_HPP
#define BUW_POINT2D_HPP

class Point2d 
{
public:
	Point2d();
	Point2d(float x, float y);
	~Point2d();

private:
	float x;
	float y;
};

#endif