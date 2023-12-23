#include <iostream>
#include "practica1.h"
using namespace std;

void numeros() {
	int num, num1;
	cout << "Digite un numero: "; cin >> num;
	cout << "Digite otro numero: "; cin >> num1;
	if (num > num1) {
		cout << num << " es mayor que " << num1;
	}
	else
	{
		cout << num1 << " es mayor que " << num;
	}
}
