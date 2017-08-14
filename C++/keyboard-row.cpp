class Solution {
public:

    inline bool isOnSingleRow(string &word, string &row) {
        for (int i = 1; i < (int) word.size(); ++i) {
            if (row.find_first_of(tolower(word[i])) == std :: string :: npos)
                return false;
        }

        return true;
    }

    vector<string> findWords(vector<string>& words) {
        vector<string> rows = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        vector<string> solution;

        for (auto & word : words) {
            for (auto & row : rows) {
                if (row.find_first_of(tolower(word[0])) != std :: string :: npos
                &&  isOnSingleRow(word, row)) {
                    solution.emplace_back(word);
                    break;
                }
            }
        }

        return solution;
    }
};
