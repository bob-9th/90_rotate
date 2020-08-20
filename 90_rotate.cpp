#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> grid;

int main() {
    int n; cin >> n;
    grid.assign(n, vector<int>(n));

    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++) cin >> grid[x][y];

    for (int x = 0; x < n; x++) {
        for (int y = n - 1; y >= 0; y--) cout << setw(2) << setfill(' ') << grid[x][y] << " ";
        cout << "\n";
    }
}
