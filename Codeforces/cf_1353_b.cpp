#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using str = string;
using vi = vector<int>;

#define all(x)          x.begin(), x.end()
#define iter(a, x)      for (auto& a : x)
#define len(x)          (int) (x).size()
#define range(i, a, b)  for (int i = a; i < (b); ++i)
#define rep(i, n)       for (int i = 0; i < (n); ++i)

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define pf printf
#define sf scanf

void setIO(str name = "") {
	cin.tie(0)->sync_with_stdio(0); 
	if (len(name)) {
		freopen((name + ".in").c_str(), "r", stdin); 
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

const int MAX = 31;

vi A(MAX), B(MAX);

int solve(int n, int k) {
	// sort both arrays upto n - 1th index
	sort(A.begin(), A.begin() + n);
	sort(B.begin(), B.begin() + n);

	// swap elements between A and B
	int a = 0, b = n - 1, swaps = 0;
	int i = 0;
	while (swaps < k && a < n && b > -1 && i < 30) {
		if (A[a] < B[b]) {
			swap(A[a], B[b]);
			a++; b--;
			swaps++;
		}
		++i;
	}

	// cal sum of all elements of A and return it
	return accumulate(A.begin(), A.begin() + n, 0);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
    	int n, k;
    	cin >> n >> k;

    	// fill up array A and B
    	rep(i, n) 	cin >> A[i];
    	rep(i, n)	cin >> B[i];

    	// print result
    	cout << solve(n, k) << '\n';
    }
}