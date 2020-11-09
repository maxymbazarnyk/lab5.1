// Lab_05_1.cpp 
// < Базарник Максим  > 
// Лабораторна робота № 5.1 
// Функції, що містять арифметичний вираз.
// Варіант 1 
// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double k(const double x, const double y); // прототип
int main()
{
	double p, q;
	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	double r = (k(1 + p * q, q * q) + pow(k(p, p * p), 2)) / (1 + k(p * q + q * q, p));
	cout << "r = " << r << endl;
	return 0;
}
double k(const double x, const double y) // визначення
{
	return x / (1 + sin(y) * sin(y)) + y / (1 + x * x);
}
