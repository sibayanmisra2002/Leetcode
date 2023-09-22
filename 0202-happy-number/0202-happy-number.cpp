class Solution {
public:

int solve(int n) {
    int ans = 0;
        while(n>0) {
            int digit = n%10;
            ans += digit*digit;
            n /= 10;
        }
        return ans;
}

    bool isHappy(int n) {
        unordered_set<int> sett;
        while(n!=1 && !sett.count(n)){
            sett.insert(n);
            n=solve(n);
        }
        if(n==1)return true;
        return false;
    }
};