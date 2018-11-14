#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class list{
	node *head;
	public:
		list()
		{
			head=NULL;
		}
		void create(int a)
		{
			node *newn;
			newn=new struct node;
			newn->data=a;
			newn->next=NULL;
			head=newn;
		}
		void pushn(int a)
		{
			if(head==NULL)
			{
				create(a);
			}
			else
			{
				node *firstn;
				firstn=new struct node;
				firstn->data=a;
				firstn->next=head;
				head=firstn;
			}
		}
		void popn()
		{
			head=head->next;
		}
		void traversel()
		{
			node *cur;
			for(cur=head;cur!=NULL;cur=cur->next)
			{
				cout<<cur->data<<endl;
			}
		}
};
int main()
{
	list l;
	cout<<"Enter the size of stack:\n";
	int n,x;
	cin>>n;
	cout<<"Enter the elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>x;
		l.pushn(x);
	}
	cout<<"Enter how many times you want to pop";
	cin>>x;
	for(int i=0;i<x;i++)
		l.popn();
	l.traversel();
	return 0;
}
