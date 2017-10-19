#include<iostream.h>
#include<math.h>
void main()
{
	int a,b,c,s;
	float area;
	cout<<"imput a,b,c:";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"area="<<area<<endl;
}

