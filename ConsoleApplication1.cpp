#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double x = 1.5;
	double y = 5.5;
	double h = 1.0;
	double Y;
	cout << " * ******While * ******* \n" << endl;
	while (x <= 5.5) {
		Y = (x * x * x*x) + 3 * (pow(sin(x), 2)) - 3;
		cout << " x= " << x << ", Y= " << Y << endl;
		x += h;
	}
}
