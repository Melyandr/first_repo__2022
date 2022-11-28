#pragma laba1
#include <stdio.h>

#include <math.h>
int main() {
	double x = 2.531;
	double y = 0.193;
	long double res;
	res =y*pow(x*y, 1/3)+y*sin(x*y)-exp(-x*y) * cos(x * y) + 7.1 / (x * y);
	printf("result %f", res);
	return 0;
}


