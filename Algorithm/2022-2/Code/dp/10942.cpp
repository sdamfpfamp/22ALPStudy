#include<iostream>

using namespace std;

int dp[2001][2001];
int arr[2001];

int N,M;
int s,e;

int main(void){
	cin >> N;
	
	for(int i=1;i<=N;i++){
		cin >> arr[i];
		
		dp[i][i] = 1;
		
		if(i!=1&&arr[i-1]==arr[i])
		dp[i-1][i] = 1; 
		
		
	}
	
	for(int i=2;i<=N;i++){
		for(int j=1;j+i<=N;j++){
			if(arr[j]==arr[i+j]&&dp[j+1][j+i-1]==1){
				dp[j][j+i] = 1;
			}
		}
	}
	
	cin >> M;
	
	while(M--){
		cin >> s >> e;
		
		cout << dp[s][e] << '\n';
	}
	
	return 0;	
}
