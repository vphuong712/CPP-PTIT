#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n-1];
		for(int i = 0; i < n - 1; i++) {
			cin >> a[i];
		}
		sort(a, a + n - 1);
		int res;
		for(int i = 0; i < n - 1; i++) {
			if(a[i] != i + 1) {
				res = i + 1;
				break;
			}
		}
		cout << res << endl;
	}
}
