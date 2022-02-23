// SENO(X).cpp: defina el punto de entrada

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int fact(int a)
{
	int F = 1;
	for (int i = 1; i <= a; i++)
	{
		F = F*i;
	}
	
	return F;
}

int main ()
{
int n; float an;
cout << "numero de terminos :"; cin >> n;
cout << "valor del angulo :"; cin >> an;

double coseno = 0;

for (int k = 0; k < n ; k++)
{
	coseno = coseno + pow(-1,k)*pow(an,2*k)/ fact(2*k);
}

cout << "\n" << coseno << endl;


_getch();

}
