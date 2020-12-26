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
	int best=sum;
	//brute-force approach:
	//choose two equal numbers and subtract it from the total sum
	//find the smallest difference of these numbers
	for(int i=0; i<5; ++i)
		for(int j=0; j<5; ++j)
			if(i!=j&&t[i]==t[j])
				best=min(best, sum-2*t[i]);
	//choose three equal numbers and subtract it from the total sum
	//find the smallest difference of these numbers
	for(int i=0; i<5; ++i)
		for(int j=0; j<5; ++j)
			for(int k=0; k<5; ++k)
				if(i!=j&&j!=k&&i!=k&&t[i]==t[j]&&t[i]==t[k])
					best=min(best, sum-3*t[i]);
	cout << best << "\n";
}
