#include <stdio.h>
int main()
{
  int arr[]={12,45,23,70,9};
  int n=5;
 int target =70;
  int index = -1;
  int i;
   for(i=0; i<n; i++)
    {  
     if(arr[i] == target)
        {
         index = i;
         break;
        }
    }
   if(index != -1)
    {
      printf("target %d index %d.\n",target,index);
    }
  else
    {
      printf("sorry,target.\n");
    }
 return 0;
}