#include <iostream>
#include "students.h"

using namespace std;

int main() {

	Student s1;
	s1.print();

	Student s2("Test Student", 20);
	s2.print();

	s1.setName("Change Name");
	s1.setAge(30);
	s1.print();
	
	
	return 0;
}