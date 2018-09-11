#include <iostream>
#include <math.h>

using namespace std;

int gcd(int a, int b)
{
	int q, r;
	if (b > a)
	{
		q = floor(b / a);
		r = b - (a * q);
		cout << b << " = " << a << " * " << q << " + " << r << endl;
	}
	else
	{
		q = floor(a / b);
		r = a - (b * q);
		cout << a << " = " << b << " * " << q << " + " << r << endl;
	}

	if (r == 0)
	{
		cout << "gcd: " << a << endl;;
		return a;
	}
	else
	{
		return gcd(r, q);
	}

}

int main()
{
	int a, b;
	cout << "first number: ";
	cin >> a;
	cout << "second number: ";
	cin >> b;
	gcd(a, b);
	return 0;
}