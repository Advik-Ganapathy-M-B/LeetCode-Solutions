#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    
    string longestCommonPrefix(vector<string>& strs) {
        int x;
        int j=0;
        int min=200;
        int curr;
        vector <int> a;
        for(int i=0;i<strs.size();i++){
        for(j=0;j<200;j++){
            x = strncmp(strs[0].c_str(), strs[i].c_str(), j);
            if(x==0){
                curr=j;
            }
            }
            if(curr<min){
                min=curr;
            }
            curr=0;
        }
        if(min==0){return "";}
        else{
            return (strs[0].substr(0,min));
        }
    }
};
