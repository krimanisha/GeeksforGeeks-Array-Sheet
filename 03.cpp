//Reverse an array

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    //reversing the array
	    for(int j=n-1; j>=0; j--){
	        cout<<arr[j];
	    }
        cout<<endl; //for multiple cases to execute
	}
	return 0;
}