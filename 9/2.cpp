#include <iostream>

using namespace std;
const int N = 50;

void print (int A[][N], int n, int m){
	int i = 0;
	int j = 0;
	while (i < n){
		while (j < m){
			cout << A[i][j] << " ";
			j++;
		}
		j = 0;
		i++;
		cout << endl;
	}
	cout << endl;
}

void mul(int A[][N], int na, int ma, int B[][N], int nb, int mb, int C[][N]){
	
	if (ma != nb){
		cout << "Wrong parameters!" << endl;
		return;
	}

	for (int i = 0; i < na; i++){
		for (int j = 0; j < mb; j++){
			C[i][j] = 0;
		}
	}
	

	for (int i = 0; i < na; i++){
		for (int j = 0; j < mb; j++){
			for (int k = 0; k < nb; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	print(C, 3, 2);
}

int main(){
	int A[3][N] = {{1, -1},
			{3, 2},
			{6, 7}};
	int B[4][N] = {{1, 4},
			{2, 3}};
	int C[3][N];
	//print(A, 3, 2);
	mul(A, 3, 2, B, 2, 2, C);
}
