#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int, int> map;
    int sum = 0, cnt = 0;
    map[0] = 1;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (map.find(sum - x) != map.end())
        {
            cnt += map[sum - x];
            //cout << map[sum-x] << " ";
        }
        map[sum]++;
    }
   // for(auto x:map) cout << x.first << " " << x.second << endl;
    cout << cnt << endl;
    return 0;
}
