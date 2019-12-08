#include <bits/stdc++.h>

using namespace std;


int main()
{
    int N = 16, K = 10;
    int cnt = 0;

    while(N>1 && K>0)
    {
        if(K>0 && N%2 == 0)
        {
            cnt++;
            N/=2;
            K--;
        }
        else
        {
            N--;
            cnt++;
        }
    }

    cnt += N-1;

    cout<<cnt<<endl;

    return 0;
}