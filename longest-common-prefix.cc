class Solution {
  public:
    string longestCommonPrefix(vector<string> &strs) {
      if (strs.size() == 0)
        return "";
      string prefix;
      for (int j = 0; j < strs[0].size(); j++) {
        for (int i = 1; i < strs.size(); i++) {
          if (j >= strs[i].size() || strs[i][j] != strs[0][j])
            return prefix;
        }
        prefix += strs[0][j];
      }
      return prefix;
    }
};
