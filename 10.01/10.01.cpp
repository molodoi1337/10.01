#include <iostream>
#include "Stekl.h"

using namespace std;

int main() {
	srand(time(NULL));

	Stack a;
	Stack b;
	Stack c;

	for (int i = 0; i < 10; i++) {
		a.push(rand() % 40 + 85);
	}

	a.show();
	b.clon(a);
	b.show();

	cout << endl << endl;

	for (int i = 0; i < 10; i++) {
		c.push((char)rand() % 40 + 85);
	}

	
}

