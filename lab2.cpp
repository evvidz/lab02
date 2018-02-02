// lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define FUNC(x) (1/4)*log((x + 1) / (1 - x))+(1/2)*atan(x)
#define Q(x,n) (pow(x,4)*(4*n+1))/(4*n+5)
int main()
{
	double x = 0.5, S = 0, a = x;
	unsigned int n, N = 8;

	for (n = 0; n < N; ++n) {
		S += a;
		a *= Q(x, n);
	}
	double y = FUNC(x), tol = fabs(S - y);
	printf("Sum:\t\t%.7f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
    return 0;
}

