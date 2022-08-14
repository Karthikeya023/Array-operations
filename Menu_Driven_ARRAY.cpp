/*Menu Driven Program for Array operations*/
#include<stdio.h>
void traverse(int a[],int n);
int del(int a[],int n,int pos);
int insert(int a[],int n,int ele,int pos);
void reverse(int a[],int n);
void sort(int a[],int n);
void search(int a[],int n,int ele);
void replace(int a[],int n,int ele,int pos);
void find_big_small(int a[],int n);
void find_2ndbig_2ndsmall(int a[],int n);
void sum_of_ele(int a[],int n);
int main()
{
	int n,i,a[20],pos,ele;
	int ch;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(1)
	{
	
	printf("\nenter your choice\n");
	printf("1.Traverse\n2.Insertion\n3.Sort\n4.Deletion\n5.Reverse\n6.Search\n7.Replace\n8.Min & Max\n9.Second min & max\n10.Sum of ele\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: traverse(a,n);
		        break;
		case 2: printf("enter the ele & pos\n");
		        scanf("%d%d",&ele,&pos);
		        n=insert(a,n,ele,pos);
		        break;
		case 3: sort(a,n);
		        break;
		case 4: printf("enter pos to be deleted\n");
		        scanf("%d",&pos);
		        n=del(a,n,pos);
		        break;
		case 5: reverse(a,n);
		        break;
		case 6: printf("enter ele to be searched\n");
		        scanf("%d",&ele);
		        search(a,n,ele);
		        break;
		case 7: printf("enter the new ele\n");
		        scanf("%d",&ele);
		        printf("enter the position\n");
		        scanf("%d",&pos);
		        replace(a,n,ele,pos);
		        break;
		case 8: find_big_small(a,n);
		        break;
		case 9: find_2ndbig_2ndsmall(a,n);
		        break;
	   case 10: sum_of_ele(a,n);
	            break;
		default:printf("INVALID CHOICE\n");
		        break;
	}
}
 
}
void traverse(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int del(int a[],int n,int pos)
{
	int i;
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("After deletion\n");
	traverse(a,n);
	return n;
}
int insert(int a[],int n,int ele,int pos)
{
	int i;
	n++;
	for(i=n-1;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=ele;
	printf("After Insertion\n");
	traverse(a,n);
	return n;
}
void reverse(int a[],int n)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
void sort(int a[],int n)
{
	int i,j,temp;
	        for(i=0;i<n;i++)
        {
                for(j=0;j<n-i-1;j++)
                {
                        if(a[j]>a[j+1])
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }
        }

	
	printf("After sorting\n");
	traverse(a,n);
}
void search(int a[],int n,int ele)
{
	int i,f;
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			f=1;
		}
		
	}
	if(f==1)
	{
		printf("The element is found\n");
	}
	else
	printf("Element is not found\n");
}
void replace(int a[],int n,int ele,int pos)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i==pos-1)
		{
			a[i]=ele;
		}
	}
	printf("After replacing\n");
	traverse(a,n);
}
void find_big_small(int a[],int n)
{
	int i,j,temp;
	        for(i=0;i<n;i++)
        {
                for(j=0;j<n-i-1;j++)
                {
                        if(a[j]>a[j+1])
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }
        }
        printf("The smallest ele is : %d\n",a[0]);
        printf("The largest ele is : %d\n",a[n-1]);
}
void find_2ndbig_2ndsmall(int a[],int n)
{
	int i,j,temp;
	        for(i=0;i<n;i++)
        {
                for(j=0;j<n-i-1;j++)
                {
                        if(a[j]>a[j+1])
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }
        }
        printf("The 2nd smallest ele is : %d\n",a[1]);
        printf("The 2nd largest ele is : %d\n",a[n-2]);
}
void sum_of_ele(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum of ele in array is :%d\n",sum);
}








