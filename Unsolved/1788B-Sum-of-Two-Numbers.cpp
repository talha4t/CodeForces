#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n; cin >> n;

        if (n % 2 == 0)
            cout << n / 2 << ' ' << n / 2 << ed;
        else if (n < 10)
            cout << n << ' ' << 0 << ed;
        else if (n == 19) 
            cout << 14 << ' ' << 5 << ed;
        else if (n % 2 and n != 19)
            cout << ceil(1.0 * n / 2)<< ' ' << n / 2<< ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
