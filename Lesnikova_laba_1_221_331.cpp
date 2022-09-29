#include<iostream>
#include<bitset>
#include<string>
#include<limits.h>

using std::cin;
using std::cout;
using std::endl;
using std::hex;
using std::bitset;

int main()
{
	const char* tab = "\t";
	cout << tab << char(35) << "1\n";
	cout << "Lesnikova Maria ilinichna, 221-331\n";

	cout << tab << char(35) << "2\n";
	cout << "int min: " << int(0b10000000000000000000000000000000) << " , int max: " << unsigned(0b11111111111111111111111111111111) << " , size of int: " << sizeof(int) << endl;

	unsigned int first;

	cout << "min unsigned int: -" << unsigned(0b0000000000000000) << " , max unsigned int: " << unsigned(0b1111111111111111) << " , size of unsigned int: " << sizeof(first) << endl;

	cout << "min short: " << short(0b1000000000000000) << " , max short: " << short(0b0111111111111111) << " , size of short: " << sizeof(short) << endl;

	unsigned short second;
	cout << "min unsigned short: -" << " , max unsigned short: " << USHRT_MAX << " , size of short: " << sizeof(second) << endl;

	cout << "min long: " << LONG_MIN << " , max long: " << LONG_MAX << " , size of long: " << sizeof(long) << endl;

	cout << "min long long: " << LLONG_MIN << " , max long long: " << LLONG_MAX << " , size of long long: " << sizeof(long long) << endl;

	cout << "min double: - 308 (15 знаков) " << " , max double: 1,7E +" << " , size of double: " << sizeof(double) << endl;

	cout << "min char: " << CHAR_MIN << ", max char: " << CHAR_MAX << " , size of char: " << sizeof(char) << endl;

	cout << "min bool: false or 0 " << "max bool: true or 1" << " , size of bool: " << sizeof(bool) << endl;


	cout << tab << char(35) << "3\n";
	cout << "Enter an integer number: ";
	int var;
	cin >> var;
	cout << "in binary form: " << bitset<8 * sizeof(var)>(var) << endl;
	cout << "in hexadecimal : " << hex << var << endl;
	cout << "bool: " << bool(var) << endl;
	cout << "double: " << double(var) << endl;
	cout << "char: " << char(var) << endl;


	cout << tab << char(35) << "4\n";
	cout << "Enter odds a * x = b" << endl;

	cout << "a = ";
		
	int a, b, x;

	cin >> a;

	cout << "b = ";

	cin >> b;
	x = b / a;
	cout << "x = " << b << "/" << a << endl;
	cout << "x = " << x << endl;
	cout << "answer: " << x << endl;

	
	cout << tab << char(35) << "5\n";
	cout << "Enter the coordinates of the line segment: " << endl;
	cout << "first point: ";
	int var1, var2;
	cin >> var1;
	cout << "second point: ";
	cin >> var2;
	cout << "The middle of the segment is at the point with coordinate: " << (var1 + var2) / 2.;
}