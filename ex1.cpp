#include <iostream>


using namespace std;

int main() {

	system("chcp 1251 > nul");

	int n, a, b,col, max_start,max_end;

	cout << "Enter the quantity in the queue - ";
	cin >> n;
	cout << "How many people are there at least in front of you - ";
	cin >> a;
	cout << "How many people are there at most after you - ";
	cin >> b;

	if (a < 0 || b >= n || n > 100 ) {
		cout << "Incorrect input data!" << endl;

		return main();
	}

	cout << "Possible places in the queue: ";

	max_start = n - a;
	max_end = b + 1;
	
	if (max_start < max_end) {
		col = max_start;
	}
	else {
		col = max_end;
	}

	cout << col;

	return 0;
}


