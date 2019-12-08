#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ci pair<char, int>

class comp2{
public:
    bool operator()(ci &a, ci &b){
        return a.second < b.second;
    }
};

void swap(ci &a, ci& b){
    ci temp = a; a = b; b = temp;
}

string solution2(int A, int B, int C) {
    // write your code in C++14 (g++ 6.2.0)
    priority_queue<ci, vector<ci>, comp2> pq;
    ci node, temp;
    string ans = "";
    bool is_max;
    char recent = '\0'; int sub;
    if(A>0) pq.push(ci('a', A));
    if(B>0) pq.push(ci('b', B));
    if(C>0) pq.push(ci('c', C));
    // cout<<pq.top().first<<endl;
    while(pq.size()>0){
        node = pq.top(); pq.pop();
        is_max = true;
        if(node.second==0) continue;
        
        if(node.first == recent){
            if(pq.size()>0){
                temp = node; node = pq.top(); pq.pop(); pq.push(temp);
                if(temp.second!=node.second) is_max = false;
            }
            else
                break;
        }
        
        if(is_max) sub = 2; else sub = 1;
        sub = min(sub, node.second);
        node.second -= sub;
        ans = ans + string(sub, node.first);
        recent = node.first;
        if(node.second>0){
            pq.push(node);
        }
    }
    return ans;
}

int main()
{
    cout<<solution2(2, 7, 2)<<endl;

    return 0;
}