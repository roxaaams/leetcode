class Solution {
public:
    bool judgeCircle(string moves) {
        auto x = 0, y = 0;
        for (const auto &m : moves) {
            switch (m) {
                case 'R': ++y; break;
                case 'L': --y; break;
                case 'U': --x; break;
                case 'D': ++x; break;
            }
        }

        return (x == 0 && y == 0);
    }
};
