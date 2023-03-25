#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    if (n == 1)
        cout << abs(v[0] - v[1]) << ed;
    else {
        int f = 2 * n / 2;

        cout << abs(v[f - 1] - v[f]) << ed;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
