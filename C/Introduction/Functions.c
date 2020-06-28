#include <stdio.h>
int max_of_four(int a, int b, int c, int d) 
{
    int max1=a;
    int max2=c;
    if (a<b)
    {
        max1=b;
    }
    if (c<d)
    {
        max2=d;
    }
    if (max1>max2)
    {
            return max1;
    }
    else {

    return max2;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

