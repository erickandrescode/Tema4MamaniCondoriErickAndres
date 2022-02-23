#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(double x) {
	return pow(x,3)+3*(x,2)+3*(x)+1;
}
double df(double x){
	return 3*pow(x,2)+6*x+3;
}
int main(){
	char salir;
	int n,neax;
	double x0, x1;
	do{
		cout<<"\n\tIngresar x_0: " ;cin>>x0;
		cout<<"\tNum. max de iteraciones: ";cin>>neax;
		n=1;
		x1=0;
		while (n<neax){
			x1=x0-(f(x0)/df(x0));
			x0=x1;
			cout<<"\t"<<n<<"\t"<<x1<<endl;
			n++;
		}
		cout<<"\n\t Desea salir ? s/n";cin>>salir;
	}while (salir!='s' && salir!='S');
	return 0;
}
