#include <bits/stdc++.h>
using namespace std;
void helper(vector<vector<int>> &matrix, vector<pair<int, int>> vp)
{
    for (auto &it : vp)
    {
    }
}
void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
                vp.push_back({i, j});
        }
    }
    helper(matrix, vp);
}
int main()
{
    int n, m;
    vector<vector<int>> mat(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    setZeros(mat);
    return 0;
}