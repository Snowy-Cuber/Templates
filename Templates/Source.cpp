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


	int a = 5;
	int b = 10;
	int c = 23;
	int d = 44;

	cout << half(a) << endl << endl;
	cout << half(b) << endl << endl;
	cout << half(c) << endl << endl;
	cout << half(d) << endl << endl;



	cout << endl << endl;
	system("pause");
	return 0;
}

int half(int n) {
	
	double temp = n / 2.0;
	int tempInt = n / 2;
	cout << temp << endl << tempInt << endl;
	double decimal = temp - tempInt;
	if (decimal < 0.5) {
		return tempInt;
	}
	else {
		return tempInt + 1;
	}
}