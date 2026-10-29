// week08-1_old.cpp SOIT108_Advance_002B
// 想要把 3 個數字(排最大) +1
#include <stdio.h> // 用大一教的方法解

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a<b) { //兩兩比較，大的放左邊
        int temp = a; // 大小不對,就交換
        a = b;
        b = temp;
    }
    if (b<c) { // 大小不對,就交換
        int temp = b;
        b = c;
        c = temp;
    }
    if (a<b) {
        int temp = a; // 大小不對,就交換
        a = b;
        b = temp;
    }
    printf("%d", a*100+b*10+c + 1);
}
```
```cpp
// week08-1.cpp SOIT108_Advance_002B
// 使用大二教的 C++ 來解
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a<b) swap(a,b);
    if (a<c) swap(a,c);
    if (b<c) swap(b,c);
    cout << a*100+b*10+c+1;
}
