#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, F, a, b, c;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(4) << " |"
		<< setw(7) << "F" << setw(5) << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 1 && c != 0)
			F = a * pow(x, 2) + b / c;
		if (x > 1.5 && c == 0)
			F = (x - a) / (pow((x - c), 2));
		if (!(x < 1 && c != 0) && !(x > 1.5 && c == 0))
			F = (pow(x, 2)) / (pow(c, 2));
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}