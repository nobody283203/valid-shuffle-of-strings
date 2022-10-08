#include <bits/stdc++.h>

using namespace std;

bool validstring(string s1, string s2, string s3){
     int count=0, flag=0;
     if(s1.size()+s2.size()!=s3.size())
       return false;
    
    else
    {
        for(int i=0; i<s1.size(); i++){
            count=0;
            for(int j=0; j<s3.size(); j++){
            if(s1[i]!=s3[j])
            {
                count++;
            }
            
        }
            flag=0;
            for(int j=0; j<s3.size(); j++){
            if(s2[i]!=s3[j])
            {
                flag++;
            }
        }
        }
        
    
    
    if(count!=0 && flag!=0)
    return false;
    else
    return true;
    }
}

int main()
{
    string s1="YX";
    string s2="22";
    string s3="XY12";
    
    cout<<validstring(s1, s2, s3);
    

    return 0;
}
