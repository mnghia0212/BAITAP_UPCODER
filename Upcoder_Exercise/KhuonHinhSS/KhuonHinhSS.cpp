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

bool operator == (ps p1, ps p2) {
    return (float)p1.tu / p1.mau == (float)p2.tu / p2.mau;
}

template <typename T>

bool sosanh2so(T a, T b) {
    return (a == b);
}

int main() {
    char k;
    cin >> k;

    switch (k) {
    case 'a':
        int a, b;
        cin >> a >> b;
        cout << (sosanh2so<int>(a, b) ? "true" : "false") << endl;
        break;

    case 'b':
        float d, e;
        cin >> d >> e;
        cout << (sosanh2so<float>(d, e) ? "true" : "false") << endl;
        break;

    case 'c':
        ps p1, p2;
        cin >> p1 >> p2;
        cout << (sosanh2so<ps>(p1, p2) ? "true" : "false") << endl;
        break;
    }

    return 0;
}
