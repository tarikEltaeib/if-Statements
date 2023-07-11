#include<iostream>
using namespace std;
// Making a decision-if statement example 
int main() {
	int grade;
	cout << "Enter student grade " << endl;
	cin >> grade;
	if (grade >= 90 && grade <=100)
		cout << "Student grade is A " << endl;
	if (grade >= 80 && grade <=89 )
		cout << "Student grade is B " << endl;
	if (grade >= 70 && grade <= 79)
		cout << "Student grade is C " << endl;
	if (-grade >= 60 && grade <= 69)
		cout << "Student grade is D " << endl;
	if (grade < 60 && grade>=0)
		cout << "Student grade is F " << endl;
	if (grade <0 || grade > 100)
		cout << "The value is invalid !!!!!" << endl;
	
	

	return 0;
}

