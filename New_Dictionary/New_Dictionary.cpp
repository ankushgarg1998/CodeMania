#include<bits/stdc++.h>
using namespace std;
struct table
    {
    string name;
    int sal;
    };

bool mycomp(table x, table y)
    {
    if(x.sal==y.sal)
        {
        if((x.name).find(y.name) != -1)
            return true;
        else
            return(x.name<y.name);
        }
    else
        return x.sal>y.sal;
    }
int main()
    {
    int n;
    cin>>n;
    vector<table> emp;
    table temp;
    for(int i=0;i<n;i++)
        {
        cin>>temp.name;
        cin>>temp.sal;
        emp.push_back(temp);
        }
    sort(emp.begin(),emp.end(),mycomp);
    for(int i=0;i<n;i++)
        {
            cout<<emp[i].name<<endl;//<<" "<<emp[i].sal<<endl;
        }
	  return 0;
    }
