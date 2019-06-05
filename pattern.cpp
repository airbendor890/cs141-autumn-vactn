#include<iostream>
using namespace std;
/*
  							4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   


*/
int main(){

int n;
char ch='y';
while(ch=='y' or ch=='Y'){

cout<<"give n value for pattern printing......(n<10)"<<endl;
cin>>n;
for(int i=1;i<=2*n-1;i++){

for(int j=1;j<=2*n-1;j++){
	if(i<n){
			if(j<=i)
		 	cout<<n-j+1<<"  ";
			if(2*n-j<=i)
			cout<<j-n+1<< "  ";
			if(j>i and 2*n-j>i )
			cout<<n-i+1<<"  ";
	}
	if(i>n){
			if(j<=2*n-i)
			cout<<n-j+1<<"  ";
			if(j>=i)
			cout<<j-n+1<<"  ";
			if(j>2*n-i and j<i )
			cout<<i-n+1<<"  ";
			
	}
	if(i==n){
			if(j<i)
		 	cout<<n-j+1<<"  ";
			if(2*n-j<=i)
			cout<<j-n+1<< "  ";
					
	}
	
}
	cout<<endl;
}	
	cout<<"do u want to try another n value pattern(n<10):..."<<endl;
	cin>>ch;

}

}
