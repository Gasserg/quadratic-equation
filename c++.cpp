#include <iostream> 
#include<math.h>
using namespace std ; 


int main() 
{
	float a ,b , c , d , root1 , root2 ;
	cout << " enter a , b , c of your equation \n" ; 
	cin>> a >> b >> c ; 
	d = b*b-4*a*c; 
	if(d == 0)
	{
	
		root1 = -(b)/(2*a);
		root2 = root1;
	
	}
	else if (d > 0)
	{

		root1 = -(b+sqrt(d))/2*a; 
		root2 = -(b-sqrt(d))/2*a; 


	}
	else 
	{
		root1= -(b)/(2*a);
		root2= sqrt(-(b)/(2*a));
		cout<<"root is imageniry";
	}
cout << "\n root1 " <<root1 << "\n root2 "<<root2 << "\n";
}
