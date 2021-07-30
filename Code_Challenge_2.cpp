#define VI2 vector<vector<int>>
#define VI vector<int>

class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
       int m = sm.size(), n = sn.size();
	VI2 L(m + 1, VI(n + 1, 0));

	
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (sm[i - 1] == sn[j - 1])
			{
				L[i][j] = 1 + L[i - 1][j - 1];

			}
			else
			{
				if (L[i - 1][j] > L[i][j - 1])
				{

					L[i][j] = L[i - 1][j];
				}
				else
				{

					L[i][j] = L[i][j - 1];
				}
				
			}
		}
	}
	
	return L[m][n]; 
    }
};