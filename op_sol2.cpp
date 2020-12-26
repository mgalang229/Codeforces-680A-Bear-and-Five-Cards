#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t[5], sum=0;
	for(int i=0; i<5; ++i) {
		cin >> t[i];
		sum+=t[i];
	}
	//sort the array for to make easier conditions below
	sort(t, t+5);
	int combi=0;
	//get the largest possible sum from a combination of two/three same numbers
	for(int i=0; i<5; ++i) {
		if(i+1<5&&t[i]==t[i+1])
			combi=max(combi, 2*t[i]);
		if(i+2<5&&t[i]==t[i+2])
			combi=max(combi, 3*t[i]);
	}
	cout << sum-combi << "\n";
}
