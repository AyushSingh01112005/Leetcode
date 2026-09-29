class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size() - 1;

        if (l >= r)
            return;

        swap(s[l], s[r]);

        reverseHelper(s, l + 1, r - 1);
    }

private:
    void reverseHelper(vector<char>& s, int l, int r) {
        if (l >= r)
            return;

        swap(s[l], s[r]);

        reverseHelper(s, l + 1, r - 1);
    }
};