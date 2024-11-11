#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "CHUONG TRINH GIAI PHUONG TRINH BAC 2\N";
	double a, b, c, delta, x1, x2;

	cout << "nhap a:"; cin >> a;
	cout << "nhap b:"; cin >> b;
	cout << "nhap c:"; cin >> c;
	if (b != 0)
	{
		cout << "phuong trinh co nghiem duy nhat x= " << -c / b << endl;
	}
	else {
		if (c != 0)
		{
			cout << "phuong trinh vo nghiem\n";
		}
		else {
			cout << "phuong trinh vo so nghiem\n";
		}
	}
	} else {
		// Giai pt bac 2
		delta = b * b _ 4 * a * c;
		if (delta < 0) {
			cout << "phuong trinh vo so nghiem\n";
		}
		else if (delta == 0) {
			cout << "phuong trinh co nghiem kep x1 = x2 = " << -b / (2 * a) << endl;
		}
		else {
			// detal lon hon 0
			x1 = (-b + sqrt(detal)) / (2 * a);
			x2 = (-b - sqrt(detal)) / (2 * a);
			cout << "phuong trinh co 2 nghiem";
			cout << "x1  = " << x1 << endl;
			cout << "x2  = " << x2 << endl;
		}
		}
		return 0;
}

