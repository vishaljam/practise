#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include "mymath.h"
int main(int argc , char * argv[])
{
  /* x=atoi(argv[1]); */
  /* y=atoi(argv[2]); */
  /* printf("Addition is %d",add(10,5)); */
  /* printf("\nSubstraction is %d\n",sub()); */
    int fd,i,fd2;
  FILE *fp1,*fp2;
  char *filename=NULL,*buff=NULL,*filename2=NULL;
  buff=(char *)malloc(sizeof(char)*2);
  filename=argv[1];
  filename2=argv[2];
  fp1=fopen(filename,"r");
  fp2=fopen(filename2,"wr");
  for(i=0;i<6;i++)
    {
      
      fread(fp,buff,2);
      printf("%s",buff);
      write(fd2,buff,2);
    }
  close(fd);
}
