bool IsPrime(ll n) {
    if (n < 2) return 0;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}
