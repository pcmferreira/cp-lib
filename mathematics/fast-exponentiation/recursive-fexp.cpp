int fexp(int b, int e, int m) {
    if (e == 0) return 1;
    int p = fexp(b, e >> 1, m);
    p = ((ll) p * p) % m;
    if (e & 1) p = (p * b) % m;
    return p;
}
