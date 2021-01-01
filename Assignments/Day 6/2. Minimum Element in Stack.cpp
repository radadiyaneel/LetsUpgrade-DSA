int minElement(stack<int> s)
{
    int m = INT_MAX;
    while (s.empty() == 0)
    {
        m = min(m, s.top());
        s.pop();
    }
    return m;
}
