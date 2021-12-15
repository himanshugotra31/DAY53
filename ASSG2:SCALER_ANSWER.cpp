int Solution::solve(vector<int> &A) {
    int ans = 0;
    // initialize the smallest and greatest element
    int mini = 1e9, maxi = -1e9;
    // find smallest and greatest element
    for(auto &i : A) {
        mini = min(mini, i);
        maxi = max(maxi, i);
    }
    // count the required elements
    for(auto &i : A) {
        if(mini < i and i < maxi)
            ans += 1;
    }
    // return the answer
    return ans;
}