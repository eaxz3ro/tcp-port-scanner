#include<stdio.h>
#include<sys/socket.h>
#include<netdb.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
int main(int argc, char **argv){
	int sfd,port,start,end,pst,count=0;
	struct hostent *hostaddr;
	struct sockaddr_in servaddr;
	if(argc < 4 || argc > 4){
	printf("Usage: ./scan <IPaddress> <Startport> <Endport>");
	return(EINVAL);
	}
	start=atoi(argv[2]);
	end=atoi(argv[3]);
	for(port=start;port<=end;port++){
	sfd=socket(PF_INET,SOCK_STREAM, IPPROTO_TCP);
	if(sfd == -1){
		perror("Error with socket\n");
		return(errno);
	}
	memset(&servaddr, 0, sizeof(servaddr));
	servaddr.sin_family=AF_INET;
	servaddr.sin_port=htons(port);
	hostaddr=gethostbyname(argv[1]);
	memcpy(&servaddr.sin_addr,hostaddr->h_addr,hostaddr->h_length);
	pst=connect(sfd,(struct sockaddr *)&servaddr,sizeof(servaddr));
	if(pst == -1){
	close(sfd);
	}
	else{
	printf("Port %d is open\n",port);
	count++;
	close(sfd);
	}
	}
	if(count==0){
	printf("All ports are closed.");
	}
	else{
	printf("Number of open ports:%d",count);
	}
}
