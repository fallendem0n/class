#include "students.h"

Student::Student() {
	name = "Draken Kenchin";
	age = 15;
}

Student::Student(string name, int age) {
	this->name = name;
	this->age = age;
}

Student::~Student() {
	cout << "Student " << name << " has been deleted." << endl;
}

void Student::setName(string name) {
	this->name = name;
}

string Student::getName() {
	return name;
}

void Student::setAge(int age) {
	this->age = age;
}

int Student::getAge() {
	return age;
}

void Student::print() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}