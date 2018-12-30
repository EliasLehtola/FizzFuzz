#include <iostream>
using namespace std;

int main() {

	int dividedByThree = 1;
	int dividedByFive = 1;

	for (int x = 1; x <= 100; x++) {
		if (((x / 3) == dividedByThree && (x / 5) == dividedByFive)) {
			cout << "FizzFuzz" << endl;
			dividedByFive++;
			dividedByThree++;
		}
		else if((x/5)==dividedByFive){
			cout << "Fuzz" << endl;
			dividedByFive++;
		}
		else if ((x / 3) == dividedByThree) {
			cout << "Fizz" << endl;
			dividedByThree++;
		}
		else {
			cout << x << endl;
		}
	}


	system("pause");
	return 0;
}