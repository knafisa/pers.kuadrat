#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	int a,b,c;
	float D,x1,x2;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " Rumus Persamaan Kuadrat : ax^2 + bx + c " << endl;
	cout << " input nilai a : ";
	cin >> a;
	cout << " input nilai b : ";
	cin >> b;
	cout << " input nilai c : ";
	cin >> c;
	cout << endl;
	
	D = b*b-4*a*c;
	cout << " diskriminan  dari " << a << "x^2 + " << b << "x + " << c << " adalah "<< D << endl;
	
	if(D > 0){
		x1 = (-b+sqrt (D)/2*a);
		x2 = (-b-sqrt (D)/2*a);
		cout << " karena D > 0 maka persamaan kuadrat tersebut mempunyai 2 akar real" << endl;
		cout << " nilai x1 = " << x1 << endl;
		cout << " nilai x2 = " << x2 << endl;
	} else if (D == 0){
		cout << " karena D = 0 maka persamaan kuadrat tersebut mempunyai 1 akar real" << endl;
		x1 = x2 = (-b+sqrt (D)/2*a);
		cout << " nilai x1 = nilai x2 = " << x1 << endl;
	} else if (D < 0){
		x1 = (-b+sqrt (D)/2*a);
		x2 = (-b-sqrt (D)/2*a);
		cout << " karena D < 0 maka persamaan kuadrat tersebut tidak mempunyai akar real" << endl;
		cout << " nilai x1 = " << x1 << endl;
		cout << " nilai x2 = " << x2 << endl;
	}

return 0;
}
