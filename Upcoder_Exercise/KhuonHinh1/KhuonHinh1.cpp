#include <iostream>

using namespace std;

struct ps {
	int tu, mau;
};

istream& operator >> (istream& is, ps& p1) {
	is >> p1.tu >> p1.mau;
	return is;
}

ostream& operator << (ostream& os, ps p1) {
	os << p1.tu << "/" << p1.mau;
	return os;
}

bool operator < (ps p1, ps p2) {
	return (float)p1.tu / p1.mau < (float)p2.tu / p2.mau;
}



template <typename T>

T max3so(T a, T b, T c) {
	T max1 = a;
	if (max1 < b)
		max1 = b;
	if (max1 < c)
		max1 = c;
	return max1;
}



int main() {
	
	char k;
	cout << "Hay nhap 1 ky tu : ";
	cin >> k;
	cout << "\n\n";

	switch (k) {

		case 'a' : 
			int a, b, c;
			cout << "Nhap 3 so nguyen : ";
			cin >> a >> b >> c;
			cout << "max cua 3 so nguyen la : ";
			cout << max3so<int>(a, b, c);
			cout << "\n\n\n";
			break;

		case 'b' :
			float d, e, g;
			cout << "Nhap 3 so thuc : ";
			cin >> d >> e >> g;
			cout << "max cua 3 so thuc la : ";
			cout << max3so<float>(d, e, g);
			cout << "\n\n\n";
			break;
		
		case 'c' : 
			ps p1, p2, p3;
			cout << "Nhap 3 phan so : ";
			cin >> p1 >> p2 >> p3;
			cout << "max cua 3 phan so la: ";
			cout << max3so<ps>(p1, p2, p3);
			cout << "\n\n\n";
			break;
	}
	
	
	return 0;
}