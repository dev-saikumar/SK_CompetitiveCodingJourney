#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> pascalTriangle(int n){
	vector<vector<int>> ans(n);
	int prevSize=0;
	for(int i=0;i<n;i++){
		vector<int> temp(prevSize+1);
		temp[0]=1;
		temp[prevSize]=1;
		for(int j=1;j<=prevSize/2;j++){
			temp[j]=temp[prevSize-j]=ans[i-1][j-1]+ans[i-1][j];
		}
		prevSize++;
		ans[i]=temp;
	}
	return ans;
}

int main(){
	vector<vector<int>> v=pascalTriangle(5);
	for(vector<int> i:v){
		for(int j: i)
			cout<<j<<" ";
		cout<<endl;
	}
	return 0;
}