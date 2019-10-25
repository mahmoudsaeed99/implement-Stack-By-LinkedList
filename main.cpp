#include <iostream>
#include <stack>
using namespace std;
class stack1
{
public:
    struct Node
{
    int data;
    Node* next;
};
    int length;
    Node* head=NULL;

    stack1();
    stack1(int value,int intial_size);
    ~stack1();
    int top();
    void push(int data);
    void print();
    int size1();
    void pop();
};
stack1:: stack1(int value,int intial_size){
    length=intial_size;
}

stack1::~stack1(){
    cout << "LIST DELETED";
}
int stack1::size1(){
    int counter=0;
    Node* crr=head;
    while(crr!=NULL){
        counter++;
        crr = crr->next;
    }
   return counter;
}
void stack1::pop(){
    Node* delete_node=new Node;
    if(head==NULL){
        return ;
    }
    if(head->next==NULL){
        head=NULL;
    }
    else{
        delete_node=head;
        head=head->next;
        delete(delete_node);
    }
}
void stack1::push(int data){
    Node* node = new Node();
    node->data = data;
    node->next = head;
    head = node;
}

int stack1::top(){
    if(head==NULL){
        return NULL;
    }
    else{
        return head->data;
    }
}
int main()
{
    stack1 s(0,0);
    s.push(9);
    s.push(8);
    s.push(7);
    s.push(6);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(0);
    cout<<"OK"<<endl;
    cout<<endl;
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size1()<<endl;
    return 0;
}
