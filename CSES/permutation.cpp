#include <bits/stdc++.h>

using namespace std;

int main() {
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    int n;
    cin >> n;

    if (n <= 3) {
        if (n == 1) cout << 1 << "\n";
        else        cout << "NO SOLUTION" << "\n";
        return 0;
    }

    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }

    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }

    cout << "\n";
}