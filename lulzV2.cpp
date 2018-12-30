#include <iostream>
#include <string>

using namespace std;

int main() {

	for (int x = 1; x <= 100; x++) {
		
		string printText = "";

		if (x % 3 == 0) { printText = "Fizz"; cout << printText; }
		if (x % 5 == 0) { printText = "Fuzz"; cout << printText; }
		if (printText == "") { cout << x; }
		cout << endl;
	}


	system("pause");
	return 0;
}