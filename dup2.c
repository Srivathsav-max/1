#include<sys/types.h>
#include<sys/stat.h> 
#include<fcntl.h> 
#include<stdlib.h>

int main()
{
int SRCFD,TRGTFD,Flag,RDflag; 
char Data[100]; 
SRCFD=open("F2.txt",O_RDONLY); 
Flag = dup2(SRCFD,TRGTFD);
RDflag = read(TRGTFD,Data,sizeof(Data)); 
write(1,Data,sizeof(Data));
close(SRCFD);
}

