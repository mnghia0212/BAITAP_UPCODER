#include <iostream>

using namespace std;

struct Mang
{
	int a[100];
	int n;


	int operator [] (int i) {
		return a[i];
	}

	void operator = (Mang m) {
		for (int i = 0; i < n; i++) {
			a[i] = m.a[i];
		}
	}

};

istream& operator >> (istream& is, Mang& m) {
	is >> m.n;
	for (int i = 0; i < m.n; i++) {
		is >> m.a[i];
	}
	return is;
}

ostream& operator  << (ostream& os, Mang m) {
	for (int i = 0; i < m.n; i++) {
		os << m.a[i] << " ";
	}
	os << endl;
	return os;
}

int operator + (Mang m1, Mang m2) {
	int t1 = 0;
	int t2 = 0;
	for (int i = 0; i < m1.n; i++) {
		t1 += m1.a[i];
	}

	for (int i = 0; i < m2.n; i++) {
		t2 += m2.a[i];
	}

	return t1 + t2;
}

bool operator == (Mang m1, Mang m2) {
	if (m1.n != m2.n) {
		return false;
	}
	else {
		for (int i = 0; i < m1.n; i++) {
			if (m1.a[i] == m2.a[i]) {
				return true;
			}
			else {
				return false;
			}
		}
	}
}

bool operator != (Mang m1, Mang m2) {
	return !(m1 == m2);
}

int main() {
	
	Mang m1, m2;
	cin >> m1 >> m2;
	cout << endl<< "Mang la:" << endl<<"\t" << m1<< "\t" << m2 << endl << endl;

	cout << "2 mang co bang nhau khong ? : ";
	if (m1 == m2) {
		cout<<"true";
	}
	else {
		cout<<"false";
	}

	cout << endl << "Ton cua 2 mang la : " << m1 + m2 << endl << endl;

	
	system("pause");
	return 0;
}