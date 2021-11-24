#include<iostream>
using namespace std;

int main(){

	int n,re;
	cin>>n;
	if(n<=0){
		cout<<"pls enter a +ve num"<<endl;
		cin>>n;
	}
	int n2=n,n3;	//n2 use for condition check in while loop, n3 use in calc
	while(n2>0){
        	n3=n2%10;
        	if(n2>10)
			re=(re+n3)*10;
        	else
        		re=re+n3;
        	n2/=10;
	}
	cout<<re<<endl;
    	if(re==n)
        	cout<<"is p"<<endl;
		
  	return 0;
  }
