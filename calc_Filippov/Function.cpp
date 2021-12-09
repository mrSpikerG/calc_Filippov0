#include "Function.h"
#include <iostream>
bool func::isBigger(int firstNum, int secondNum) {
	if (firstNum > secondNum) {
		return true;
	}
	else {
		return false;
	}
}

bool func::isSmaller(int firstNum, int secondNum) {
	if (firstNum < secondNum) {
		return true;
	}
	else {
		return false;
	}
}

float func::div(int firstNum, int secondNum) {
	if (secondNum != 0) {
		return firstNum / secondNum;
	}
	else {
		std::cout << "\nEception error";
		return 0;
	}
}