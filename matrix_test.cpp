#include "Matrix.h"

#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;


int main(){
	cout << "Matrix mit 2 rows 2 columns wird initialisiert.\n";
	Matrix m1 {2,2};

	cout << "Matrix printen\n";
	m1.print();

	cout << "_____________\n";

	int j{m1.at(2,1)};
	cout << j;
}
