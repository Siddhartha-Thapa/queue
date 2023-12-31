#include<iostream>
#include<conio.h>
using namespace std;
#define max 5
class queue
{
    int q[max],front,rare,data;
    public:
    queue()
    {
        front=0;
        rare=-1;
    }
    void enq()
    {
        rare=rare+1;
        if(rare==max-1)
        {
            cout<<"overflow"<<endl;
        }
        else{
            cout<<"enter data"<<endl;
            cin>>data;
            q[rare]=data;

        }
    }
    void deq()
    {
        if(front>rare)
        {
            cout<<"queue is empty"<<endl;
        }
        else{
            data=q[front];
            cout<<"the dequeued data is"<<data;
            front=front+1;

        }
    }
    void display()
    {
        cout<<"the elements in queue are:";
        for(int i=front;i<=rare;i++)
        {
            cout<<q[i]<<" ";
        }
    }

};
int main()
{
    queue qu;
    int c;
    while(c!=4)
    {
        cout<<"menu:"<<endl<<"1.enqueue"<<endl<<"2.dequeue"<<endl<<"3.display"<<endl<<"4.exit"<<endl;
        cout<<"enter choice"<<endl;
        cin>>c;
        if(c==1)
        {
            qu.enq();
        }
        if(c==2)
        {
            qu.deq();
        }
        if(c==3)
        {
            qu.display();

        }
        
    }
    return 0;
}
