#include <cstdlib>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

bool isInArea(double x, double y);
double f(double x);
void main()
{
	double x;
	double y;

	int a;
	cout<<"Enter task number: ";
	cin >> a;
	switch (a)
	{
	case 1:
		cout<<"Task 1: "<<endl;
		cout<<"x = ";
		cin >> x;
		cout<<"y = ";
		cin >> y;

		cout<<"Result: "<< isInArea(x, y) << endl;;
		break;
	case 2:
		cout<<"Task 2: "<<endl;
		cout<<"x = ";
		cin >> x;
		
		cout<<"Result: f(x) = "<< f(x);
		break;
	default:
		cout<<"Incorrect input"<<endl;
		break;
	};
}