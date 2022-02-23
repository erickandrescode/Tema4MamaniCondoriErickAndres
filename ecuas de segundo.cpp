




#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	float a,b,c,x2,x1;
	
	cout<<"introduce el coef de 2do grado:";
	cin>>a;
	cout<<"introduce el coef de 1er grado:";
	cin>>b;
	cout<<"introduce el coef independiente:";
	cin>>c;
	if(a!=0){
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		cout<<"las raices son:"<<x1<<"_y_"<<x2<<endl;
	}
	system("PAUSE");
	return 0;
}
