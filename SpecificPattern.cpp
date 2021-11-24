#include<iostream>
using namespace std;

int main(){

    
    char c1,c2,cc;
    int n1,n2,r,c;

    cout<<"Pls enter a prefer char"<<endl;
    cin>>c1;
    cout<<"pls enter how many times this c shld be repeated"<<endl;
    cin>>n1;
    cout<<"Pls enter another prefer char"<<endl;
    cin>>c2;
    cout<<"pls enter how many times this c shld be repeated"<<endl;
    cin>>n2;
    cout<<"pls specify num of rows n columns: "<<endl;
    cin>>r>>c;


    int nn1=n1,nn2=n1;
    int strc;
    for(int i=0;i<r;i++){
        cout<<endl;
        int j=0;
        while(j<c){

            if(nn1!=n1 && j==0)
                nn2=nn1;
           for(int k=0;k<nn2;k++){
                cout<<c1;
                j++;
                if(j==c && k!=n1){
                    nn1-=(k+1);
                    cout<<nn1;
                    break;
                }
            }
            nn2=n1;
            if(j==c)
                break;

            for(int l=0;l<n2;l++){
                cout<<c2;
                j++;
                if(j==c && l!=n2){
                    n2-=l;
                    break;
                }
            }

        }
    } 

  return 0;
  }
