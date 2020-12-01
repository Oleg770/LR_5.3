// =Лабораторна робота № 5.3
// < Калька Олег >
// Варіант 4

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double z(const double x);
double pk, c;
int main()
{
	double pz; pk; c;
	int n;
	cout << "pz = "; cin >> pz;
	cout << "pk = "; cin >> pk;
	cout << "n = "; cin >> n;
	cout << "--------------------------------" << endl;
	cout << "|" << setw(8) << "p" << setw(8) << "|";
	cout << setw(8) << "z" << setw(8) << "|" << endl;
	cout << "--------------------------------" << endl;

	double dp = (pk - pz) / n;
	double p = pz;
	while (p <= pk)
	{
		c = z(p * p + 1) - z(p * p - 1) + 2 * z(p);

		cout << "|" << setw(8) << setprecision(3) << p << setw(8) << "|";
		cout << setw(8) << setprecision(3) << c << setw(8) << "|" << endl;

		p += dp;
	}
	cout << "--------------------------------" << endl;
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) + 1) / (cos(x) * cos(x) + exp(x));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = 2 * x / (k);
			a *= R;
			S += a;
		} while (k < 6);
		return (1 / (exp(x) * exp(x)) * S);
	}
}


