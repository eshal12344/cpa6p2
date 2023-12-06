#include<iostream>
using namespace std;
int number;
int in() {
	cout << "Enter the number"<<endl;
	cin >> number;
	cout << "Base " << number << " Raise to the power 2 = ";
	return number;
}
double power(double number, int power = 2) {
	   
	return pow(number,power);
}
int main() {
	in();
	cout << power(number);
}