#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
#define ll long long


int main() {
    
    int n, m; cin >> n >> m;
    vector <pair <int, int>> E;
    int deg[n + 1]; memset(deg, 0, sizeof deg);
    for (int i = 1; i <= m; i++){
        int a, b; cin >> a >> b;
        deg[a]++;
        deg[b]++;
        E.push_back({a, b});
    }

    for (auto x: E){
        int a = x.f, b = x.s;
        if (deg[a] != n - 1 and deg[b] != n - 1){
            deg[a]--; deg[b]--;
        }
    }

    cout << deg[1] + 1 << '\n';

    return 0;
}

/*
    1 2 3 4 6
    4 7 3 1 1

    1 1 1 1 1 1 1 1 1 1 1 1 2 3 5 7

    1  2 3 5 7
    12 1 1 1 1
*/