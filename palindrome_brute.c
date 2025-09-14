int power(int base, int exponent) {
    int result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

bool isPalindrome(int x) {
    if (x < 0) return false;

    int xdup = x;
    int y = 0;
    int digits = 0;

    // Count digits
    int temp = x;
    while (temp > 0) {
        temp = temp / 10;
        digits++;
    }

    // Reverse the number
    while (digits > 0) {
        y = y + ((xdup % 10) * power(10, digits - 1));
        xdup = xdup / 10;
        digits--;
    }

    return x == y;
}
