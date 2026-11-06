#include <bits/stdc++.h>
class Solution {
public:
    string addBinary(string a, string b) {
        int carry_forward;
        using namespace std;
        ;
        int max_size =max(a.size(), b.size());
        string c(max_size,'0');
        if(max_size==a.size()){
            for(int i=b.size();i<a.size();i++){
                b='0'+b;
            }}
        else{
        for(int i=a.size();i<b.size();i++){
            a='0'+a;
        }}
        for(int i=max_size-1;i>=0;i--){
            if(a[i]=='0' && b[i]=='0'){
                if(carry_forward==1){c[i]='1';}
                else{c[i]='0';}
                carry_forward=0;
            }
            else if((a[i]=='1' && b[i]=='0')||(a[i]=='0'&&b[i]=='1')){
                if(carry_forward==1){c[i]='0';carry_forward=1;}
                else{c[i]='1';
                carry_forward=0;}
            }
            else{
                if(carry_forward==1){c[i]='1';carry_forward=1;}
                else{
                c[i]='0';
                carry_forward=1;}
            }
        }
        if(carry_forward==1){
            c='1'+c;
        }
        return c;
    }
    };
