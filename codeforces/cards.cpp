#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    vector<long long> cards(n);

    for(int i=0;i<n;++i){
        cin >> cards[i];
    }

    long long sereja = 0;
    long long dima = 0;
    bool s = true;
    int left = 0;
    int right = n-1;

    while(left <= right){
        int pick;

        if(cards[left] > cards[right]){
            pick = cards[left];
            ++left; 
        } else {
            pick = cards[right];
            --right;
        }

        if(s){
            sereja += pick;
            s = false;
        } else {
            dima += pick;
            s = true;
        }
    }

    cout << sereja << " " << dima << endl;
}