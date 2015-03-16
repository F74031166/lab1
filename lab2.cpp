#include<iostream>
using namespace std;

int main() 
{
	int n;
	int con;
	cin>>n;
	cout<<n;
	while(1)
	{
		con=n%2;
		if(n==1)
		{
			cout<<"\n";
			return 0; 
		}
		else if(con==1)
		{
			n=3*n+1;
		}
		else if(con==0)
		{
			n=n/2;
		}
		cout<<"  "<< n;
	}
}
