#include<bits/stdc++.h>

using namespace std;

void setMatrixToZeroes(vector<vector<int>> &v) {
	int n = v.size(), m = v[0].size();
	bool colZero = false;
	for (int i = 0; i < n; i++) {
		if (v[i][0] == 0)
			colZero = true;
		for (int j = 1; j < m; j++) {
			if (v[i][j] == 0) {
				v[0][j] = 0;
				v[i][0] = 0;
			}
		}
	}


	for (int i = n - 1; i >= 0; i--) {
		for (int j = m - 1; j > 0; j--) {
			if (v[i][0] == 0 || v[0][j] == 0)
				v[i][j] = 0;
		}
		if (colZero)
			v[i][0] = 0;
	}
}


int main() {
	vector<vector<int>> matrix= {{1,1,2,0},{3,4,5,2},{1,3,1,5}};
	setMatrixToZeroes(matrix);
	
	for(vector<int> i:matrix){
		for(int j:i){
			cout<<j<<" ";
		}
		cout<<endl;
	}
		
	return 0;
}
