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
		cout << "\n root1 " <<root1 << "\n root2 "<<root2 << "\n";
	
	}
	else if (d > 0)
	{

		root1 = -(b+sqrt(d))/2*a; 
		root2 = -(b-sqrt(d))/2*a; 
		cout << "\n root1 " <<root1 << "\n root2 "<<root2 << "\n";


	}
	else 
	{
	    cout<<"Roots are imaginary";
            int real= (-b/(2*a)); int imag= (sqrt(-d))/(2*a);
            cout<<"Root 1:\t"<<real<<"+ i ("<<imag<<")";
            cout<<"Root 2:\t"<<real<<"- i ("<<imag<<")";
	    
	}

}
