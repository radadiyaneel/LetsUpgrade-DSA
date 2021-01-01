int maxElement(stack<int> s) {
    int m = INT_MIN;
    while(s.empty()==0) {
        m = max(m, s.top());
        s.pop();
    }
    return m;
}
