#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
#define ll long long


int main() {
    
    int n; cin >> n;
    map <int, int> mp;
    for (int i = 1; i <= n * n; i++){
        int x; cin >> x; 
        mp[-x]++;
    }
    vector <int> ans;
    for (auto x: mp){
        int k = 0;
        for (auto y: ans){
            if (y % (-x.f) == 0)k++;
        } 
        int curr = sqrt((x.s + k * k)) - k;
        for (auto y: ans){
            mp[-__gcd(y, -x.f)] -= 2 * curr;
        }
        for (int j = 1; j <= curr; j++){
            ans.push_back(-x.f);
        }
    }
    for (auto x: ans) cout << x << " ";
    cout << '\n';

    return 0;
}

/*
    1 2 3 4 6
    4 7 3 1 1

    1 1 1 1 1 1 1 1 1 1 1 1 2 3 5 7

    1  2 3 5 7
    12 1 1 1 1
*/