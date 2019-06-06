 /*You are given n triangles, specifically, their sides Ai,Bi andCi

. Print them in the same style but sorted by their areas from the smallest one to the largest one. 
It is guaranteed that all the areas are different.

The best way to calculate a volume of the triangle with sides
, and is Heron's formula:
*/
#include<iostream>
#include<cmath>
using namespace std;

class triangles{
	public:
		//sides data
		float Ai;
		float Bi;
		float Ci;
		float s;
		
		void side_input(){
			cout<<"give three sides a,b,and c:...."<<endl;
			float a,b,c;
			cin>>a>>b>>c;
			if(a+b>c and b+c>a and a+c>b){
				Ai=a;
				Bi=b;
				Ci=c;
			}
			else{
				cout<<"you have broken triangle inequality...give sides again.."<<endl;
				side_input();
			}
		} 
		
		void area_cal(){
			float p;
			p=0.5*(Ai+Bi+Ci);
			this->s=sqrt(p*(p-Ai)*(p-Bi)*(p-Bi));
			
		}
};

//partition function
//lomuto partition scheme
int partition(triangles *arr,int lo,int hi){//will return the index of pivot
	float pivot=arr[hi].s;
	int i=lo;
	for(int j=lo;j<=hi-1;j++){
		if(arr[j].s<pivot){
		//swap arr[i] with arr[j]
		triangles temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		i++;
		}
	}
	//swap arr[i] with arr[hi]
	triangles temp=arr[i];
	arr[i]=arr[hi];
	arr[hi]=temp;
		
	//return i
	return i;
}


void quick_sort(triangles *arr,int lo,int hi){
	//should not be singleton
	if(lo<hi){
	//chose pivot and
	//partition 
	int p=partition(arr,lo,hi);
	//recursive call
	quick_sort(arr,lo,p-1);
	quick_sort(arr,p+1,hi);
	}
}


int main(){
	int n;//no of triangles
	cout<<"give no of trianngles..."<<endl;
	cin>>n;
	
	triangles array[n];
	for(int i=0;i<n;i++){
		array[i].side_input();
		array[i].area_cal();
	}
	
	//bring in sort function u did earlier
	quick_sort(array,0,n-1);
	
	for(int i=0;i<n;i++){
		cout<<array[i].Ai<<"\t"<<array[i].Bi<<"\t"<<array[i].Ci<<endl;
	}
	
	
	
	
}
