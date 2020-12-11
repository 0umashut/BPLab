#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdlib.h>

void lab1();
void lab2();
void lab3();
void lab4();
void lab5();
void lab6();
void lab7();
void lab8();
void lab9();
/*void lab10();*/
void lab11();
/*void lab12();*/

int a = 0;

using namespace std;

int main()
{
	int i = 1;
	do {
		cout << "Vvedite nomer laboratornoy s kotoroi nado bylo sdelat' 5 nomer (vvedite 0 chtoby viiti)\n";
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
		case 5:
			lab5();
			break;
		case 6:
			lab6();
			break;
		case 7:
			lab7();
			break;
		case 8:
			lab8();
			break;
		case 9:
			lab9();
			break;
		/*case 10:
			lab10();
			break;*/
		case 11:
			lab11();
			break;
		/*case 12:
			lab12();
			break;*/
		}
	} while (i != 0);
}

void lab1() {
	cout << "vvedite 4-znachnoye chislo ";
	cin >> a;
	cout << a % 10 + a % 100 + a % 1000 << endl;
}

void lab2() {
	cout << "Vvedite 3-znachnoye chislo ";
	cin >> a;
	int a1, a2, a3 = 0;
	if ((a >= 100) && (a <= 999)) {
		a1 = div(a, 100).quot;
		a2 = div(a, 10).quot % 10;
		a3 = a % 10;
	}
	if ((a1 < a2) && (a1 < a3)) {
		cout << a1;
		if (a2 < a3)
			cout << a2 << a3 << endl;
		else
			cout << a3 << a2 << endl;
	}
	else {
		if ((a2 < a1) && (a2 < a3)) {
			if (a2 == 0)
				if (a3 == 0)
					cout << a1 << a2 << a3 << endl;
				else {
					if (a1 < a3)
						cout << a1 << a2 << a3 << endl;
					else
						cout << a3 << a2 << a1 << endl;
				}
			else {
				cout << a2;
				if (a1 < a3)
					cout << a1 << a3 << endl;
				else
					cout << a3 << a1 << endl;
			}
		}
		else {
			if (a3 == 0)
				if (a2 == 0)
					cout << a1 << a2 << a3 << endl;
				else {
					if (a1 < a2)
						cout << a1 << a3 << a2 << endl;
					else
						cout << a2 << a3 << a1 << endl;
				}
			else {
				cout << a3;
				if (a1 < a2)
					cout << a1 << a2 << endl;
				else
					cout << a2 << a1 << endl;
			}
		}
	}
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
	int min = 99999;
	int max = -99999;
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
	cout << "Min = " << min << ", max = " << max << endl;
}

void lab5() {
	cout << "Vvedite chislo ";
	cin >> a;
	int cif = 0;
	do {
		cif ++;
		a /= 10;
	} while (a != 0);
	cout << "V chisle " << cif << " tsifr\n";
}

void lab6() {
	cout << "Vvedite radius ";
	cin >> a;
	cout << "Perimetr = " << 6.28 * a << " ed^2" << endl << "Ploschad' = " << 3.14 * a * a << " ed^2" << endl;
}

void lab7() {
	int cif, r, n, aa, i = 0;
	for (i = 100; i <= 300; i++) {
		n = i;
		aa = i * i;
		cif, r = 0;
		do {
			cif = n % 10;
			r = (r * 10) + cif;
			n /= 10;
		} while (n != 0);
		if (i == r) {
			n = aa;
			cif, r = 0;
			do {
				cif = n % 10;
				r = (r * 10) + cif;
				n /= 10;
			} while (n != 0);
			if (aa == r) {
				cout << i << endl;
			}
		}
	}
}

void lab8() {
	int n, i, b, s = 0;
	cout << "vvedite n ";
	cin >> n;
	vector<int> v;
	for (i = 0; i < n; i++) {
		cout << "vvedite chislo na " << i << " pozitsii ";
		cin >> b;
		v.push_back(b);
	}
	for (i = 2; i < n; i += 2) {
		int k = v[i] % 2;
		if (k != 0) {
			s += v[i];
		}
	}
	cout << s << endl;
}

void lab9() {
	int k, n, i, b, max = 0;
	vector<int> A;
	cout << "vvedite k ";
	cin >> k;
	cout << "skol'ko elementov v vektore A? ";
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "vvedite chislo na " << i << " pozitsii ";
		cin >> b;
		A.push_back(b);
	}
	i = 0;
	do {
		max = A[i];
		if (max > k)
			cout <<"pervoye chislo bol'she k nahoditsya na pozitsii "<< i << endl;
		i++;
	} while (k > max);
}

/*void lab10() {
	string s, k, i;
	getline(cin, s, '.');
	cout << "vvedite chto udalit' ";
	cin >> k;
	for (i = s.find(k); i != s.length();)
	if (s.length() <= 255) {
		s.erase(i, k.length());
		cout << s << "." << endl;
	}
	else cout << "text slishkom bol'shoy\n";
}*/

void lab11() {
	cout << "vvedite 2 < n < 20, n = ";
	cin >> a;
	int i, j = 0;
	int n = 1;
	if ((a > 2) && (a < 20))
		for (i = 1; i <= a; i++) {
			for (j = 1; j <= a; j++) {
				cout << n << " ";
				n++;
				if (n > a)
					n = 1;
			}
			n++;
			cout << endl;
		}
}