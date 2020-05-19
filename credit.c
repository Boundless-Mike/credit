#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long z = get_long("Number: ");
    if (z < 4000000000000)
        {
            printf("INVALID\n");
        }
        else if (z > 4999999999999 && z < 340000000000000)
        {
            printf("INVALID\n");
        }
        else if (z > 349999999999999 && z < 370000000000000)
        {
            printf("INVALID\n");
        }
        else if (z > 379999999999999 && z < 4000000000000000)
        {
            printf("INVALID\n");
        }
        else if (z > 4999999999999999 && z < 5100000000000000)
        {
            printf("INVALID\n");
        }
        else if (z > 5599999999999999)
        {
            printf("INVALID\n");
        }
            else if (z > 3999999999999 && z < 5000000000000)
                {
                    long a = z % 10;
                    long b = (z % 100 - a) / 10;
                    long c = (z % 1000 - a - b) / 100;
                    long d = (z % 10000 - a - b -c) / 1000;
                    long e = (z % 100000 - a - b -c -d) / 10000;
                    long f = (z % 1000000 - a - b -c -d -e) / 100000;
                    long g = (z % 10000000 - a - b -c -d -e -f) / 1000000;
                    long h = (z % 100000000 - a - b -c -d -e -f -g) / 10000000;
                    long i = (z % 1000000000 - a - b -c -d -e -f -g -h) / 100000000;
                    long j = (z % 10000000000 - a - b -c -d -e -f -g -h -i) / 1000000000;
                    long k = (z % 100000000000 - a - b -c -d -e -f -g -h -i -j) / 10000000000;
                    long l = (z % 1000000000000 - a - b -c -d -e -f -g -h -i -j -k) / 100000000000;
                    long m = (z % 10000000000000 - a - b -c -d -e -f -g -h -i -j -k -l) / 1000000000000;
                    b = b * 2;
                    b = (((b % 100) - (b % 10)) / 10) + (b % 10);
                    d = d * 2;
                    d = (((d % 100) - (d % 10)) / 10) + (d % 10);
                    f = f * 2;
                    f = (((f % 100) - (f % 10)) / 10) + (f % 10);
                    h = h * 2;
                    h = (((h % 100) - (h % 10)) / 10) + (h % 10);
                    j = j * 2;
                    j = (((j % 100) - (j % 10)) / 10) + (j % 10);
                    l = l * 2;
                    l = (((l % 100) - (l % 10)) / 10) + (l % 10);
                    long ac = b + d + f + h + j + l;
                    long bc = ac + a + c + e + g + i + k + m;
                    long cc = bc % 10;
                    if (cc == 0)
                    {
                        printf("VISA\n");
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }
            else if (z > 339999999999999 && z < 350000000000000)
                {
                    long a = z % 10;
                    long b = (z % 100 - a) / 10;
                    long c = (z % 1000 - a - b) / 100;
                    long d = (z % 10000 - a - b -c) / 1000;
                    long e = (z % 100000 - a - b -c -d) / 10000;
                    long f = (z % 1000000 - a - b -c -d -e) / 100000;
                    long g = (z % 10000000 - a - b -c -d -e -f) / 1000000;
                    long h = (z % 100000000 - a - b -c -d -e -f -g) / 10000000;
                    long i = (z % 1000000000 - a - b -c -d -e -f -g -h) / 100000000;
                    long j = (z % 10000000000 - a - b -c -d -e -f -g -h -i) / 1000000000;
                    long k = (z % 100000000000 - a - b -c -d -e -f -g -h -i -j) / 10000000000;
                    long l = (z % 1000000000000 - a - b -c -d -e -f -g -h -i -j -k) / 100000000000;
                    long m = (z % 10000000000000 - a - b -c -d -e -f -g -h -i -j -k -l) / 1000000000000;
                    long n = (z % 100000000000000 - a - b -c -d -e -f -g -h -i -j -k -l -m) / 10000000000000;
                    long o = (z % 1000000000000000 - a - b -c -d -e -f -g -h -i -j -k -l -m -n) / 10000000000000;
                    b = b * 2;
                    b = (((b % 100) - (b % 10)) / 10) + (b % 10);
                    d = d * 2;
                    d = (((d % 100) - (d % 10)) / 10) + (d % 10);
                    f = f * 2;
                    f = (((f % 100) - (f % 10)) / 10) + (f % 10);
                    h = h * 2;
                    h = (((h % 100) - (h % 10)) / 10) + (h % 10);
                    j = j * 2;
                    j = (((j % 100) - (j % 10)) / 10) + (j % 10);
                    l = l * 2;
                    l = (((l % 100) - (l % 10)) / 10) + (l % 10);
                    n = n * 2;
                    n = (((n % 100) - (n % 10)) / 10) + (n % 10);
                    long aa = b + d + f + h + j + l + n;
                    long bb = aa + a + c + e + g + i + k + m + o;
                    long ab = bb % 10;
                    if (ab == 0)
                    {
                        printf("AMEX\n");
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }
            else if (z > 369999999999999 && z < 380000000000000)
                {
                    long a = z % 10;
                    long b = (z % 100 - a) / 10;
                    long c = (z % 1000 - a - b) / 100;
                    long d = (z % 10000 - a - b -c) / 1000;
                    long e = (z % 100000 - a - b -c -d) / 10000;
                    long f = (z % 1000000 - a - b -c -d -e) / 100000;
                    long g = (z % 10000000 - a - b -c -d -e -f) / 1000000;
                    long h = (z % 100000000 - a - b -c -d -e -f -g) / 10000000;
                    long i = (z % 1000000000 - a - b -c -d -e -f -g -h) / 100000000;
                    long j = (z % 10000000000 - a - b -c -d -e -f -g -h -i) / 1000000000;
                    long k = (z % 100000000000 - a - b -c -d -e -f -g -h -i -j) / 10000000000;
                    long l = (z % 1000000000000 - a - b -c -d -e -f -g -h -i -j -k) / 100000000000;
                    long m = (z % 10000000000000 - a - b -c -d -e -f -g -h -i -j -k -l) / 1000000000000;
                    long n = (z % 100000000000000 - a - b -c -d -e -f -g -h -i -j -k -l -m) / 10000000000000;
                    long o = (z % 1000000000000000 - a - b -c -d -e -f -g -h -i -j -k -l -m -n) / 100000000000000;
                    b = b * 2;
                    b = (((b % 100) - (b % 10)) / 10) + (b % 10);
                    d = d * 2;
                    d = (((d % 100) - (d % 10)) / 10) + (d % 10);
                    f = f * 2;
                    f = (((f % 100) - (f % 10)) / 10) + (f % 10);
                    h = h * 2;
                    h = (((h % 100) - (h % 10)) / 10) + (h % 10);
                    j = j * 2;
                    j = (((j % 100) - (j % 10)) / 10) + (j % 10);
                    l = l * 2;
                    l = (((l % 100) - (l % 10)) / 10) + (l % 10);
                    n = n * 2;
                    n = (((n % 100) - (n % 10)) / 10) + (n % 10);
                    long aa = b + d + f + h + j + l + n;
                    long bb = aa + a + c + e + g + i + k + m + o;
                    long ab = bb % 10;
                    if (ab == 0)
                    {
                        printf("AMEX\n");
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }
            else if (z > 3999999999999999 && z < 5000000000000000)
                {
                    long a = z % 10;
                    long b = (z % 100 - a) / 10;
                    long c = (z % 1000 - a - b) / 100;
                    long d = (z % 10000 - a - b -c) / 1000;
                    long e = (z % 100000 - a - b -c -d) / 10000;
                    long f = (z % 1000000 - a - b -c -d -e) / 100000;
                    long g = (z % 10000000 - a - b -c -d -e -f) / 1000000;
                    long h = (z % 100000000 - a - b -c -d -e -f -g) / 10000000;
                    long i = (z % 1000000000 - a - b -c -d -e -f -g -h) / 100000000;
                    long j = (z % 10000000000 - a - b -c -d -e -f -g -h -i) / 1000000000;
                    long k = (z % 100000000000 - a - b -c -d -e -f -g -h -i -j) / 10000000000;
                    long l = (z % 1000000000000 - a - b -c -d -e -f -g -h -i -j -k) / 100000000000;
                    long m = (z % 10000000000000 - a - b -c -d -e -f -g -h -i -j -k -l) / 1000000000000;
                    long n = (z % 100000000000000 - a - b -c -d -e -f -g -h -i -j -k -l -m) / 10000000000000;
                    long o = (z % 1000000000000000 - a - b -c -d -e -f -g -h -i -j -k -l -m -n) / 100000000000000;
                    long p = (z % 10000000000000000 - a - b -c -d -e -f -g -h -i -j -k -l -m -n -o) / 1000000000000000;
                    b = b * 2;
                    b = (((b % 100) - (b % 10)) / 10) + (b % 10);
                    d = d * 2;
                    d = (((d % 100) - (d % 10)) / 10) + (d % 10);
                    f = f * 2;
                    f = (((f % 100) - (f % 10)) / 10) + (f % 10);
                    h = h * 2;
                    h = (((h % 100) - (h % 10)) / 10) + (h % 10);
                    j = j * 2;
                    j = (((j % 100) - (j % 10)) / 10) + (j % 10);
                    l = l * 2;
                    l = (((l % 100) - (l % 10)) / 10) + (l % 10);
                    n = n * 2;
                    n = (((n % 100) - (n % 10)) / 10) + (n % 10);
                    p = p * 2;
                    p = (((p % 100) - (p % 10)) / 10) + (p % 10);
                    long aa = b + d + f + h + j + l + n + p;
                    long bb = aa + a + c + e + g + i + k + m + o;
                    long ab = bb % 10;
                    if (ab == 0)
                    {
                        printf("VISA\n");
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }
             else if (z > 5099999999999999 && z < 5600000000000000)
                {
                    long a = z % 10;
                    long b = (z % 100 - a) / 10;
                    long c = (z % 1000 - a - b) / 100;
                    long d = (z % 10000 - a - b -c) / 1000;
                    long e = (z % 100000 - a - b -c -d) / 10000;
                    long f = (z % 1000000 - a - b -c -d -e) / 100000;
                    long g = (z % 10000000 - a - b -c -d -e -f) / 1000000;
                    long h = (z % 100000000 - a - b -c -d -e -f -g) / 10000000;
                    long i = (z % 1000000000 - a - b -c -d -e -f -g -h) / 100000000;
                    long j = (z % 10000000000 - a - b -c -d -e -f -g -h -i) / 1000000000;
                    long k = (z % 100000000000 - a - b -c -d -e -f -g -h -i -j) / 10000000000;
                    long l = (z % 1000000000000 - a - b -c -d -e -f -g -h -i -j -k) / 100000000000;
                    long m = (z % 10000000000000 - a - b -c -d -e -f -g -h -i -j -k -l) / 1000000000000;
                    long n = (z % 100000000000000 - a - b -c -d -e -f -g -h -i -j -k -l -m) / 10000000000000;
                    long o = (z % 1000000000000000 - a - b -c -d -e -f -g -h -i -j -k -l -m -n) / 100000000000000;
                    long p = (z % 10000000000000000 - a - b -c -d -e -f -g -h -i -j -k -l -m -n -o) / 1000000000000000;
                    b = b * 2;
                    b = (((b % 100) - (b % 10)) / 10) + (b % 10);
                    d = d * 2;
                    d = (((d % 100) - (d % 10)) / 10) + (d % 10);
                    f = f * 2;
                    f = (((f % 100) - (f % 10)) / 10) + (f % 10);
                    h = h * 2;
                    h = (((h % 100) - (h % 10)) / 10) + (h % 10);
                    j = j * 2;
                    j = (((j % 100) - (j % 10)) / 10) + (j % 10);
                    l = l * 2;
                    l = (((l % 100) - (l % 10)) / 10) + (l % 10);
                    n = n * 2;
                    n = (((n % 100) - (n % 10)) / 10) + (n % 10);
                    p = p * 2;
                    p = (((p % 100) - (p % 10)) / 10) + (p % 10);
                    long aa = b + d + f + h + j + l + n + p;
                    long bb = aa + a + c + e + g + i + k + m + o;
                    long ab = bb % 10;
                    if (ab == 0)
                    {
                        printf("MASTERCARD\n");
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }    
}