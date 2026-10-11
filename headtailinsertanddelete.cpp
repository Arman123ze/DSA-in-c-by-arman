#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int  data){
        this->data = data;
        next = NULL;
    }

};
class myll{
private:
   node* head;
   node* tail;
   int length;
public:

   myll()
   {
    head = tail = NULL;
    length = 0;
   }
   
   int size(){
    return length;

   }
   void idelete(int idx){
        if(idx<0||idx>length){
        cout<<"invalid_argument"<<endl;
        return;
    }
     else if(idx==0) deletehead();
    
     else{
      node* temp =head;
      for(int i=1;i<idx;i++){
        temp=temp->next;
      }
      temp->next = temp->next->next;
      length--;
      if(idx==length-1) tail=temp;

     }
    }

   void insertattail(int val){
    node* n= new node(val);
    if(tail == NULL){
        head=tail=n;
    }
    else{
    tail->next = n;
    tail = n;
    }
    length++;
   }
   int get(int idx){
    if(idx<0||idx>length){
      cout<<"invalid index"<<endl;
      return -1;
    }
     else if(idx==0) return head->data;
       else if(idx==length) return tail->data;
       else {
    node* temp=head;
    for(int i=1;i<=idx;i++){
      temp=temp->next;
    }
    return temp->data;
  }
   }
   void insert(int idx,int val){
    if(idx<0 || idx>length){
      cout<<"invalid indes"<<endl;
      return;
    }
    else if(idx==0){
      insertathaid(val);

    }
    else if(idx==length){
      insertattail(val);
    }
    else{
    node* temp=head;
    for(int i=1; i<idx;i++){
      temp = temp->next;
    }
    
    node* n = new node(val);
     n->next=temp->next;
     temp->next = n;
     length++;
     }
    }

     

   void insertathaid(int val){
     node* n= new node(val);
     n->next =head;
     head =n;
     length++;
   }
   void print(){
      node* temp = head;
      while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
      }
      cout<<endl;
   }
   void deletehead(){
    if(head==NULL) return;
      else head= head->next;
   }

};
int main(){
    myll list;
    list.insertattail(30);
     list.insertattail(40);
      list.insertattail(50);
    
      list.print();
      list.insertathaid(90);
      list.print();
      cout<<list.size();
       cout<<endl;
       cout<<list.size();
         list.insertattail(20);
         cout<<endl;
         list.print();
          cout<<list.size();
           cout<<endl;
       list.deletehead();
       list.print();
       list.insert(3,49);list.print();
              list.insert(5,49);list.print();
              cout<<list.get(-2)<<endl;
 list.idelete(2);
 list.print();



}