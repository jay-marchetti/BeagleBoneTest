//============================================================================
// Name        : BeagleBoneTest.cpp
// Author      : Jay Marchetti
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i, j, k = 5;
	cout << "Hello on Aug 23 from the SEI BeagleBone Black board!" << endl;
	for (i=0; i<5; i++)
	{
		j = i * k;
		k--;
	}
	cout << "Loop complete. Exiting..." << endl;
	return 0;
}
