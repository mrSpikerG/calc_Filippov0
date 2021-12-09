#include "Function.h"
#include <iostream>
bool isBigger(int firstNum, int secondNum) {
	if (firstNum > secondNum) {
		return true;
	}
	else {
		return false;
	}
}

bool isSmaller(int firstNum, int secondNum) {
	if (firstNum < secondNum) {
		return true;
	}
	else {
		return false;
	}
}

inline float div(int firstNum, int secondNum) {
	if (secondNum == 0) {
		return firstNum / secondNum;
	}
	else {
		std::cout << "\nEception error";
	}
}