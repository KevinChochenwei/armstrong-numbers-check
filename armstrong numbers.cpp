#include <iostream>
#include <math.h>
using namespace std;

int Armscheck(int*);

int main(){
	int Result,a,b;

	while(cin>>a>>b){
	int count=0;		
		for(int j=a;j<=b;j++)
			{ 
					Result= Armscheck(&j);
					if (Result==1)
						{
						cout<<j<<" ";
						count=count+1;
					}
					else
						count=count;
			}
		
		if(count==0)
			cout<<"none"<<endl;
		cout<<endl;
	}


return 0;
	
}

int Armscheck(int* X){
	int dig=1,sum=0,res=0;
	int temp=*X;
	int temp1=*X;
	while(temp/10>0)
		{
			dig=dig+1;
			temp=temp/10;
			}	
	
	for(int i=1;i<=dig;i++)
		{
			res=temp1%10;
			sum=sum+ pow(res,dig);
			temp1=temp1/10;			
		}

	if (sum==*X)
		return 1;
	else 
		return 0;
	
} 
