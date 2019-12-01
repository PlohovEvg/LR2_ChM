#include "Functions.h"


double u1(double x)
{
	double a1 = exp(sqrt(0.3 / 2.09)*0.3);
	double a2 = exp(-sqrt(0.3 / 2.09)*0.3);
	double a3 = 1 / 0.3;
	double a4 = sin(0.3*M_PI) / 0.09;
	double a5 = exp(0.3);
	double a6 = exp(-0.3);
	double a7 = sqrt(2.09*0.3);
	double c4 = ((a2 - a1)*(a7*a1*(a3 - 1) - 0.09*a5*a4 / exp(1)) + a7*(a1*(a4*(1 - (a5 / exp(1))) + a1*(a3 - 1) - a3) + a2*(a4*(1 - (a5 / exp(1))) + a1*(a3 - 1) - a3))) / (0.09*(a2 - a1)*((a5 / exp(2)) + a6) - a7*(a6 - (a5 / exp(2)))*(a1 + a2));
	double c2 = (c4*(a6 - a5 / exp(2)) + a4*(1 - a5 / exp(1)) + a1*(a3 - 1) - a3) / (a2 - a1);
	double c1 = 1 - c2 - a3;
	return c1*exp(sqrt(0.3 / 2.09)*x) + c2*exp(-sqrt(0.3 / 2.09)*x) + a3;
}

double u2(double x)
{
	double a1 = exp(sqrt(0.3 / 2.09)*0.3);
	double a2 = exp(-sqrt(0.3 / 2.09)*0.3);
	double a3 = 1 / 0.3;
	double a4 = sin(0.3*M_PI) / 0.09;
	double a5 = exp(0.3);
	double a6 = exp(-0.3);
	double a7 = sqrt(2.09*0.3);
	double c4 = ((a2 - a1)*(a7*a1*(a3 - 1) - 0.09*a5*a4 / exp(1)) + a7*(a1*(a4*(1 - (a5 / exp(1))) + a1*(a3 - 1) - a3) + a2*(a4*(1 - (a5 / exp(1))) + a1*(a3 - 1) - a3))) / (0.09*(a2 - a1)*((a5 / exp(2)) + a6) - a7*(a6 - (a5 / exp(2)))*(a1 + a2));
	double c3 = -c4 / exp(2) - a4 / exp(1);
	return c3*exp(x) + c4*exp(-x) + a4;
}

double k1(double x)
{
	return x*x + 2;
}

double k2(double x)
{
	return x*x;
}

double q1(double x)
{
	return x;
}

double q2(double x)
{
	return x*x;
}

double f1(double x)
{
	return 1;
}

double f2(double x)
{
	return sin(M_PI*x);
}