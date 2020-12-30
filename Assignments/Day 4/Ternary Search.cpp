int ternary_search(int *arr, int l, int r, int x)
{
    if (r >= l)
    {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (arr[mid1] == x)
            return mid1;
        if (arr[mid2] == x)
            return mid2;
        if (x < arr[mid1])
            return ternary_search(arr, l, mid1 - 1, x);
        else if (x > arr[mid2])
            return ternary_search(arr, mid2 + 1, r, x);
        else
            return ternary_search(arr, mid1 + 1, mid2 - 1, x);
    }
    return -1;
}
