#include <iostream>
using namespace std;
int main() {
	cout << "nhap thang:";
	int thang;
	cin >> thang;
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
		cout << "thang " << thang << " co 31 ngay";
	}
	if (thang == 2) {
		cout << "thang 2 co 28 ngay";
	}
	if (thang == 6 || thang == 9 || thang == 11 || thang == 4) {
		cout << "thang " << thang << " co 30 ngay";
	}
	return 0;
}
