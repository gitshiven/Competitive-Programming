#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ANS(ans) cout << (ans? "YES":"NO")
#define fill(vec,n) for(int i=0;i<n;i++) cin>>vec[i]
#define fill_rev(vec,n) for(int i=n-1;i>=0;i--) cin>>vec[i]
#define lp(i,n) for(int i=0;i<n;i++)
#define pr(i,j) cout<<i<<" "<<j
#define pr3(i,j,k) pr(i,j)<<" "<<k
typedef long long ll;
const double PI = 2.0 * acos(0.0);
// digits start 48 ascii
// lowercase letters 97 ascii
// uppercase 65



int main()
{
	int a, b;
	cin >> a >> b;
	int awon = 0, tie = 0, bwon = 0;
	lp(i, 6) {
		if (abs(i + 1 - a) < abs(i + 1 - b))awon++;
		else if (abs(i + 1 - a) > abs(i + 1 - b))bwon++;
		else tie++;
	}
	pr3(awon, tie, bwon);
}