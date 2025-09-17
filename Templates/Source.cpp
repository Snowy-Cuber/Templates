// Tamera Fischer
// CIS 1202
// 9/17/2025

#include<iostream>
#include<cmath>
using namespace std;

template<typename T>
T half(T n) {
	return n / 2.0;
}

int half(int);

int main() {


	double a = 11.0;
	float b = 7.0f;
	int c = 5;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c);


	cout << endl << endl;
	system("pause");
	return 0;
}

int half(int n) {
	
	double temp = n / 2.0;
	int tempInt = n / 2;
	double decimal = temp - tempInt;
	if (decimal < 0.5) {
		return tempInt;
	}
	else {
		return tempInt + 1;
	}
}