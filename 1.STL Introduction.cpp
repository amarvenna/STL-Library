#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={10,50,30,7,1023};
	sort(arr,arr+5); //sorting array using stl
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	if(binary_search(arr,arr+5,1023)){  //finding element using binary function with the help of STL
		cout<<"present"<<endl;
	}else{
		cout<<"not found"<<endl;
	}
	return 0;
}