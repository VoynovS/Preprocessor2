//������������ ������ ������� �++
#include <iostream> // ������� ����������

using namespace std; //����������� ������������ ����

#define PI 3.14



#if 5 > 10
const int N = 10;
#elif 15 > 10
const int N = 15;
#else
const int N = 5;
#endif

#ifdef PI

#endif

#ifndef PI
#define PI 3.14
#else
#define E 2.72
#endif

#if 1 > 5

int main() {

	setlocale(LC_ALL, "Russian");

	cout << "qwerty";


	return 0;
}
#else
int main() {

	setlocale(LC_ALL, "Russian");

	cout << "QWERTY";
/*
#define N 11
#ifdef M
	cout << "M ����������\n";
#else
#error "M ������ ������������!"
#endif*/


	return 0;
}

#endif