#include<iostream>
using namespace std;
main()
{
	int rev , rem;
	int n,i,temp;
	cout<<"Enter the number : ";
	cin>>n;
	temp=n;
	for(rev=0;n!=0;n=n/10)
	{
		rem=n%10;
		rev=rem+(rev*10);
	}
	cout<<"Reverse number : "<<rev;
		if( rev == temp )
	cout<<"\nNumber is paliondrome!!!";
		if( rev != temp )
	cout<<"\nNumber is not paliondrome!!!";
	
}
