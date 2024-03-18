#include "./Functions.h"
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;



int main() {
	setlocale(LC_ALL, "ru");
	cin.exceptions(istream::failbit | istream::failbit);	//обработка исключений и ввод данных 
	cout << "Решение определенного интеграла dx/x*ln(x) методом левых прямоугольников\n" << "\nВведите пределы интегрирования:\n" << "a = ";
	try
	{
		cin >> a;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "b = ";
	try
	{
		cin >> b;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "\nВведите число отрезков разбиения:\n";
	try
	{
		cin >> n;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "\nВведите число сиволов после запятой в ответе:\n";
	try
	{
		cin >> k;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "\nОтвет:\n";
	cout << setprecision(k) << reshenie(a, b, n) << endl; //вывод ответа
	return 0;
}
