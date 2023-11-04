#include "ModuleRecord.h"
#include <iostream>

using namespace std;

int main() {

	ModuleRecord COMP1001("Computer Systems", "COMP1001", 1001, 40, 1);
	cout << COMP1001.moduleSummary();
	cout << COMP1001.totalCredits() << endl;

	ModuleRecord COMP1004("Computing Practice", "COMP1004", 1004, 80, 2);
	cout << COMP1004.moduleSummary();
	cout << COMP1004.totalCredits() << endl;


}