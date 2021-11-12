//author    :Albert
//date      :2021-11-12
//purpose   :Calculate the total number of paths
//notice    :Solution impute number is 2

#include<iostream>
#include<vector>
using namespace std;

class PathSolution{
private:
    int m_row;
    int m_col;
public:
    int dynamic_programming(int m, int n){
        m_row = m;
        m_col = n;
        vector<vector<int>>dp(m_row, vector<int>(m_col, 0));
        for(int i = 0; i < m_row; i++){
            dp[i][0] = 1;
        }
        for(int j = 0; j < m_col; j++){
            dp[0][j] = 1;
        }
        for(int i = 1; i < m_row; i++){
            for(int j = 1; j < m_col; j++){
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        return dp[m_row-1][m_col-1];
    }
};

int main()
{
    int m,n;
    cin>>m>>n;
    PathSolution path;
    int result;
    result = path.dynamic_programming(m, n);
    cout<<"path number is:"<<result<<endl;
    return 0;
}