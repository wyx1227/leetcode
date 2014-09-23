class Solution {
  public:
    vector<vector<int> > combine(int n, int k) {
      vector<vector<int>> result;
      vector<int> tmp;
      dfs(result, tmp, 1, n, k);
      return result;
    }

    void dfs(vector<vector<int>>& result, vector<int>& tmp, int start, int n, int k) {
      if (tmp.size() == k) {
        result.push_back(tmp);
        return;
      }
      for (int i = start; i <= n; i++) {
        tmp.push_back(i);
        dfs(result, tmp, i + 1, n, k);
        tmp.pop_back();
      }
    }
};
