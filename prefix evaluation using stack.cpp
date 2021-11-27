/*
        EVALUATION OF PREFIX EXPRESSION

        input  1 = -+7*45+20  

        output 1 = 25
*/

#include<bits/stdc++.h>
using namespace std;
int postfix(string s)
{
    stack<int >st;    
    for(int i=s.length()-1;i>=0;i--)
    {
        
        if(s[i]>='0' and s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
        int ele1,ele2;
        ele2=st.top();
        st.pop();
        ele1=st.top();
        st.pop();
        switch(s[i])
        {
            case '+':
            st.push(ele2+ele1);
            break;
            case '-':
            st.push(ele2-ele1);
            break;
            case '*':
            st.push(ele2*ele1);
            break;
            case '/':
            st.push(ele2/ele1);
            break;
            case '^':
            st.push(pow(ele2,ele1));
            break;
        }
        }
        

    }
    return st.top();
    
}
int main()
{
    system("cls");
    string s;
    getline(cin,s);
    cout<<postfix(s)<<endl;
    return 0;
}
