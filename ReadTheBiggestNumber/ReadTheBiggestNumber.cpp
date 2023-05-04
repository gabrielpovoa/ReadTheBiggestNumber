#include <iostream>
#include <algorithm>


using namespace std;

int main() {
	int i;
	float a, b, c;

	cout << "Type a value to 'I' " << endl;
	cin >> i;
	cout << "Type, respectively, a value to 'A', 'B' and 'C' " << endl;
	cin >> a >> b >> c;

    if (i == 1) {
        sort(&a, &a + 3);
    }
    else if (i == 2) {
        sort(&a, &a + 3, greater<double>());
    }
    else if (i == 3) {
        if (a > b && a > c) {
            if (b > c) {
                swap(b, c);
            }
        }
        else if (b > a && b > c) {
            swap(a, b);
            if (b > c) {
                swap(b, c);
            }
        }
        else if (c > a && c > b) {
            swap(a, c);
            if (b > c) {
                swap(b, c);
            }
        }
    }

    cout << "Valores ordenados: " << a << " " << b << " " << c << std::endl;

    return 0;
}