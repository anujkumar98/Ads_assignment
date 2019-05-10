# include <stdio.h>
int arr[100],n;

void display()
{       int i;
	if(n==0)
	{
		printf("Heap is empty\n");
		return;
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void insert(int num,int loc)
{
	int par;
	while(loc>0)
	{
		par=(loc-1)/2;
		if(num<=arr[par])
		{
			arr[loc]=num;
			return;
		}
		arr[loc]=arr[par];
		loc=par;
	}
	arr[0]=num;
}
int main()
{
	int choice,num;
	n=0;
	while(1)
	{
		printf("1.Insert\n");
		printf("2.Display\n");
		printf("3.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1:
			printf("Enter the number to be inserted : ");
			scanf("%d",&num);
			insert(num,n);
			n=n+1;
			break;
		 case 2:
			display();
			break;
      case 3:
      exit(0);
		}
  }
}