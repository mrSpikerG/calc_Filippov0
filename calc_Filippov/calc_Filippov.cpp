#include <iostream>
#include "Function.h"

using namespace std;
int main() {

	func* MyFuncs = new func;
	cout << "\n5 + 4 = " << MyFuncs->plus(5, 4);
	cout << "\n5 - 4 = " << MyFuncs->minus(5, 4);
	cout << "\n5 * 4 = " << MyFuncs->mul(5, 4);
	cout << "\n5 / 4 = " << MyFuncs->div(5, 4);

	cout << "\n5 / 0 = " << MyFuncs->div(5, 0);

	cout << "\n5 > 4?  ";
	if (MyFuncs->isBigger(5, 4)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	cout << "\n5 < 4? = ";
	if (MyFuncs->isSmaller(5, 4)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
