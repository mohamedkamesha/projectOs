 #include<bits/stdc++.h>
using namespace std;
vector <string>v;
int main(){
int n;
cin>>n;

while(n--){
        string s,arr,w="";
        cin>>arr;
        if(arr=="cd"){
               cin>>s;
               int x=s.length(),f=0;
               if(s[0]=='/')
                v.clear();
               for(int i=0;i<x;++i){
                  if(s[i]=='/'){
                       if(w.length()>0){
                        v.push_back(w);
                        w="";
                    }
                  }else if(s[i]=='.' && s[i+1]=='.' ){
                    ++i;
                    if(w.length()>0){
                        v.push_back(w);
                        w="";
                    }
                    if(!v.empty())
                   v.pop_back() ;
                  }
                  else{
                        w+=s[i];
                  }

               }
                       if(w.length()>0){
                        v.push_back(w);
                        w="";
                    }
        }else if(arr=="pwd"){
        cout<<"/";

        for(int i=0;i<v.size();++i){
          cout<<v[i]<<"/";
        }

        cout<<endl;
        }




}


return 0;
}
