#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
	setlocale(0, "rus");
	double a, b, c, d, D, x1, x2,x;
	cout << "Квадратное уравнение: ax^2+b*x+c=d"<<endl;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;
	cout << "Введите d: ";
	cin >> d;
	D = b * b - 4 * a * (c - d);
	if (D > 0)
	{
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);
		cout << "Корни:" << endl;
		cout << "x1="<<setw(10)<<setfill('#')<<setprecision(4) << x1 << endl;
		cout << "x2=" << setw(10) << setfill('#') << setprecision(4) << x2 << endl;

	}
	else
		if (D == 0)
		{
			x = (-b) / (2 * a);
			cout << "x=" << setw(10) << setfill('#') << setprecision(4) << x << endl;
		}
		else cout << "Корней нет";
	return 1;
}