#include <iostream>, #include<cstdlib>

void lab1();
void lab2();
void lab3();
void lab4();

int a = 0;

using namespace std;

int main()
{
	int i = 1;
	cout << "Vvedite nomer laboratornoy s kotoroi nado bylo sdelat' 5 nomer (vvedite 0 chtoby viiti)\n";
	while (i == true) {
		cin >> i;
		switch (i) {
		case 1:
			lab1();
			break;
		case 2:
			lab2();
			break;
		case 3:
			lab3();
			break;
		case 4:
			lab4();
			break;

		}
	}
}

void lab1() {
	cout << "vvedite 4-znachnoye chislo ";
	cin >> a;
	cout << (a % 10 + a % 100 + a % 1000) << endl;
}

void lab2() {
	cout << "Vvedite 3-znachnoye chislo ";
	cin >> a;
	cout << a << endl;
}

void lab3() {
	cout << "Vvedite 1 tsifru ";
	cin >> a;
	switch (a) {
	case 1:
		cout << "Odin\n";
		break;
	case 2:
		cout << "Dva\n";
		break;
	case 3:
		cout << "Tri\n";
		break;
	case 4:
		cout << "Chetire\n";
		break;
	case 5:
		cout << "Pyat'\n";
		break;
	case 6:
		cout << "Shest'\n";
		break;
	case 7:
		cout << "Sem'\n";
		break;
	case 8:
		cout << "Vosem'\n";
		break;
	case 9:
		cout << "Devyat'\n";
		break;
	case 0:
		cout << "Nol'\n";
		break;
	}
}

void lab4() {
	cout << "Vvedite chislo elementov massiva ";
	cin >> a;
	int i = 1;
	int min = 999;
	int max = -999;
	int b[20];
	for (i = 1; i <= a; i++) {
		cout << "Vvedite " << i << " chislo massiva ";
		cin >> b[i];
		if (b[i] < min) {
			min = b[i];
		}
		else {
			if(b[i] > max) {
				max = b[i];
			}
		}
	}
	cout << "Min = " << min << ", max = " << max;
}