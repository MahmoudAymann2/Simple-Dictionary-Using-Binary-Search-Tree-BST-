#include<iostream>
#include<string.h>
int count;
using namespace std;
typedef struct node
{
 	char w[20];
 	char m[20];
 	class node  *left;
 	class node * right;
}node;
class dict
{
public:

 		node *root;
 		void create();
 		void disp(node *);
 void insert(node * root,node *temp);
 int search(node *,char []);


 		node* del(node *,char []);
 node * min(node *);
};
void dict :: create()
{
 	class node *temp;
 int choice;
do
 {
  		temp = new node;
 cout<<"Enter the Keyword: \n";
 		 cin>>temp->w;
  		cout<<"Enter the Meaning: \n";
  		cin>>temp->m;
temp->left = NULL;
temp->right = NULL;
if(root == NULL)
  		{
   			root = temp;
  }
 		 else
 		 {
 			insert(root, temp);
  		}
  		cout<<"Do you want to add more (Yes=1/No=0): \n";
  		cin>>choice;
 }
 	while(choice == 1);
}
void dict ::  insert(node * root,node *temp)
{
 if(strcmp (temp->w, root->w) < 0 )
 {
  		if(root->left == NULL)
   		root->left = temp;
 		 else
  		 insert(root->left,temp);
 }
 else
 	{
if(root->right == NULL)
  		 	root->right = temp;
  		else
  			 insert(root->right,temp);
 	}
}
void dict :: disp(node * root)
{
 if( root != NULL)
 {
  		disp(root->left);
  		cout<<"the Key Word : \n"<<root->w;
  		cout<<"the Meaning : \n"<<root->m;
  		disp(root->right);
 }
}
int dict :: search(node * root,char k[20])
{
 int c=0;
 while(root != NULL)
 {
 		 c++;
 		 if(strcmp (k,root->w) == 0)
 		 {
  			 cout<<"No of Comparisons: \n"<<c;
   return 1;
  		}
 		 if(strcmp (k, root->w) < 0)
  			 root = root->left;

if(strcmp (k, root->w) > 0)
 			  root = root->right;
 }
return -1;
}



node* dict :: del(node * root,char k[20])
{
 	node *temp;
if(root == NULL)
 {
  		cout<<"The Element Not Founded \n";
  		return root;
 }
if (strcmp(k,root->w) < 0)
 {
 		 root->left = del(root->left, k);
  		return root;
 }
 if (strcmp(k,root->w) > 0)
 	{
   		root->right = del(root->right, k);
   		return root;
 }
 	if (root->right==NULL&&root->left==NULL)
 	{
 		 temp = root;
 		 delete temp;
  		return NULL;
  	}
 	 if(root->right==NULL)
  	{
  		temp = root;
  		root = root->left;
delete temp;
  		return root;
  	}
 	 else if(root->left==NULL)
  	{
  temp = root;
  		root = root->right;
  		delete temp;
 return root;
 	 }
  	temp = min(root->right);
 strcpy(root->w,temp->w);
 root->right = del(root->right, temp->w);
 	 return root;
}

node * dict :: min(node *q)
{
 	while(q->left != NULL)
 {
  		q = q->left;
 }
 	return q;
}

int main()
{

 	int choice;
 	dict d;
 d.root = NULL;
do
 	{
 	    cout<<"the size of the dictionary is: "<<count<<endl;
 	     count++;
cout<<"Menu\n1.create\n2.Display\n3.Search\n4.Delete\n5.insert\nPlease enter your choice: \n";
  cin>>choice;
switch(choice)
  		{
case 1: d.create();
 				 break;
case 2: if(d.root == NULL)
  				{
  					cout<<"No any Keyword found \n";
 				 }
  				else
  				{
 					 d.disp(d.root);
 				 }
 				 break;
case 3: if(d.root == NULL)
 				{
cout<<"Dictionary is Empty, First add keywords then try again \n";
 }
  				else
 				{
cout<<"Enter the Keyword which you want to search: \n";
  					char k[20];
  					cin>>k;
					 if( d.search(d.root,k) == 1)
  						cout<<"Keyword Found \n";
  					else
  						cout<<"Keyword Not Found \n";
 }
  				break;

case 4:
  if(d.root == NULL)
 			 {
cout<<"Dictionary is Empty, First add keywords then try again \n";
  			}
 			 else
  			{
  			cout<<"Enter the Keyword which you want to delete: \n";
  			char k[20];
  			cin>>k;
 			 if(d.root == NULL)
  			{
  				cout<<"No any Keyword found \n";
  			}
  			else
  			{
  				d.root = d.del(d.root,k);
    			}
  		 }
case 5:
int index;
int temp;
if(d.root == NULL)
 				{
cout<<"Dictionary is Empty, First add keywords then try again \n";
 }
  				else
 				{
cout<<"Enter the Keyword which you want to insert: \n";
cin>>temp;
cout<<"enter the index of the keyword you entered: \n";
cin>>index;
 	 }



}
}
while( choice<=5);
return 0;
}

