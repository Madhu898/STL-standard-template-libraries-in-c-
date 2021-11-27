/*        BALANCING THE PARENTHESIS USING STACK WITH THE HELP OF STL
        
        input  = {([])}

        output = valid expression
        
        input 2  = {({])]

        output 2 = invalid expression

*/

#include <bits/stdc++.h>
using namespace std;
bool isvalid(string s)
{
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (st.empty())
    {
        return ans;
    }
    else
    {
        return false;
    }
}
int main()

{
    system("cls");
    string s;
    getline(cin, s);
    if (isvalid(s))
    {
        cout << "valid expression " << endl;
    }
    else
    {
        cout << "invalid expression " << endl;
    }

    return 0;
}
