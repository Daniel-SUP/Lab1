#include <iostream>

using namespace std;

int main() {

	system("chcp 1251 > nul");


	long long n,m,a,col=0,col2=0;

	cout << "Enter the area length - ";
	cin >> n;
	cout << endl << "Enter the width of the square - ";
	cin >> m;
	cout << endl << "Enter the tile width - " ;
	cin >> a;

	if (a < 1 || a > pow(10,9) || m < 1 || m > pow(10, 9) || n < 1 || n > pow(10, 9)) {
		cout << "Incorrect input data!" << endl;
		
		return main();
	}

	while (n > 0) {
		n = n - a;
		++col;

	} 
	while (m > 0) {
		m = m - a;
		++col2;

	}
	
		col = (col * col2);
	cout << endl <<"Number of tiles - " << col;
	return 0;
}