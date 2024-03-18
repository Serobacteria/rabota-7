#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
//a-b пределы, I -решённый интеграл
double a, b;
//n-кол-во отрезков разбиения, k- число символов после запятой
int n, k, I;
double f(double x)
{
	return 1 / (x*log(x));
}

double reshenie(double a, double b, int n)
{
	double I;
	double s = (f(a) + f(b)) / 2;
	double h = (b - a) / n;
	for (int i = 1; i <= n - 1; i++)
	{
		s += f(a + i * h);
	}
	I = h * s;
	return I;
}
