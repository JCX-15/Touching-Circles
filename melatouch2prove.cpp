#include <iostream>
#include <cmath>
using namespace std;
 
int circle(int x1, int y1, int x2,int y2, int r1, int r2)
{
    int distSq = (x1 - x2) * (x1 - x2) +(y1 - y2) * (y1 - y2);
    int radSumSq = (r1 + r2) * (r1 + r2);
    if (distSq == radSumSq){
    	return 1;
	}
    else
	{
    	if (distSq>radSumSq){
    		return -1;
		}
		else
		{
			return 0;
		}
	} 
}
 
int main()
{
    int N;
	float  h1, k1, r1, h2, k2, r2, a1, a2;
	long double factor=0, pi=0;
	cout<<"Ingrese el valor N: ";
	cin>>N;
	cout<<"Ingrese la informacion de los circulos: \n";
	cin>>h1;
	cin>>k1;
	cin>>r1;
	cin>>h2;
	cin>>k2;
	cin>>r2;
    int t = circle(h1, k1, h2,k2, r1, r2);
    for (int i=0; i<N; i++){
		factor = factor+pow(-1,i) * (4.0/ (2.0*i+1));
	}
	pi= factor;
	cout<<pi<<endl;
    if (t == 1){
        cout << "Los circulos se tocan."<<endl;
    }
	else
	{
		if (t < 0){
			cout << "Los circulos no se tocan."<<endl;
		}
        else{
        	cout << "Los circulos se intersectan."<<endl;
		}
	}
    a1=pi*(r1*r1);
	a2=pi*(r2*r2);
	cout<<"El area del primer circulo es: "<<a1<<endl;
	cout<<"El area del segundo circulo es: "<<a2<<endl;    
    return 0;
}
