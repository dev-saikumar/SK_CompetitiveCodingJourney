#include<bits/stdc++.h>

using namespace std;


void reverseTheArray(vector<int> &v){
	int n=v.size();
	for(int i=0;i<(n/2);i++){
		swap(v[i],v[n-1-i]);
	}
}

int main(){
	vector<int> v=  {1,2,3,4,5,6};
	reverseTheArray(v);
	for(int i:v)
		cout<<i<<" ";
	return 0;
}