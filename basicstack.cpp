#include<iostream>
#include<stack>
using namespace std;
int main ()
{
    stack<int> st;
    // st.push(10);
    //  st.push(20);
    //   st.push(30);
    //    st.push(40);
    //    cout<<st.top();
     st.push(10);
     st.push(20);
      st.push(30);
      st.pop();
      cout<<st.top();

       st.push(40);
       cout<<st.top();
       cout<<st.size();

}