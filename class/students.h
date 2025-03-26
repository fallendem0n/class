#pragma once
#include <iostream>

using namespace std;

class Student {
public:
	Student();
	Student(string name, int age);
	~Student();
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	void print();
private:
	string name;
	int age;
};
