#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>
int main(){
int fd1[2],fd2[2],fd3[2],fd4[2],fd5[2],fd6[2],fd7[2],fd8[2],fd9[2],fd10[2];
int arr[1000];
for(int i=0;i<1000;i++)
	arr[i]=i+1;
if(pipe(fd1)==-1){
	printf("pipe failed");
	return 1;
}
if(pipe(fd2)==-1){
	printf("pipe failed");
	return 1;
}
if(pipe(fd3)==-1){
	printf("pipe failed");
	return 1;
}
if(pipe(fd4)==-1){
	printf("pipe failed");
	return 1;
}
if(pipe(fd5)==-1){
	printf("pipe failed");
	return 1;
}
if(pipe(fd6)==-1){
	printf("pipe failed");
	return 1;
}
if(pipe(fd7)==-1){
	printf("pipe failed");
	return 1;
}
if(pipe(fd8)==-1){
	printf("pipe failed");
	return 1;
}
if(pipe(fd9)==-1){
	printf("pipe failed");
	return 1;
}
if(pipe(fd10)==-1){
	printf("pipe failed");
	return 1;
}

int cpid=fork();
if(cpid<0)
{
	printf("fork failed");
	return 1;
}
char str[100];
if(cpid==0)
{ 
	int sum=0;
	for(int i=0;i<100;i++)
		sum=sum+arr[i];
	sprintf(str,"%d",sum);
	write(fd1[1],str,strlen(str)+1);
	printf("child 1\n");
	close(fd1[1]);
}
else
{ 
	wait(NULL);
	cpid=fork();
	if(cpid==0){
		int sum=0;
		for(int i=100;i<200;i++)
			sum=sum+arr[i];
		sprintf(str,"%d",sum);
		write(fd2[1],str,strlen(str)+1);
		printf("child 2\n");
		close(fd2[1]);
	}
	else
	{
		wait(NULL);
		cpid=fork();
		if(cpid==0){
			int sum=0;
			for(int i=200;i<300;i++)
				sum=sum+arr[i];
			sprintf(str,"%d",sum);
			write(fd3[1],str,strlen(str)+1);
			printf("child 3\n");
			close(fd3[1]);
		}
		else
		{
			wait(NULL);
			cpid=fork();
			if(cpid==0){
				int sum=0;
				for(int i=300;i<400;i++)
					sum=sum+arr[i];
				sprintf(str,"%d",sum);
				write(fd4[1],str,strlen(str)+1);
				printf("child 4\n");
				close(fd4[1]);
			}
			else
			{
				wait(NULL);
				cpid=fork();
				if(cpid==0){
					int sum=0;
					for(int i=400;i<500;i++)
						sum=sum+arr[i];
					sprintf(str,"%d",sum);
					write(fd5[1],str,strlen(str)+1);
					printf("child 5\n");
					close(fd5[1]);
				}
				else
				{
					wait(NULL);
					cpid=fork();
					if(cpid==0){
						int sum=0;
						for(int i=500;i<600;i++)
							sum=sum+arr[i];
						sprintf(str,"%d",sum);
						write(fd6[1],str,strlen(str)+1);
						printf("child 6\n");
						close(fd6[1]);
					}
					else
					{ 
						wait(NULL);
						cpid=fork();
						if(cpid==0){
							int sum=0;
							for(int i=600;i<700;i++)
								sum=sum+arr[i];
							sprintf(str,"%d",sum);
							write(fd7[1],str,strlen(str)+1);
							printf("child 7\n");
							close(fd7[1]);
						}
						else
						{
							wait(NULL);
							cpid=fork();
							if(cpid==0){
								int sum=0;
								for(int i=700;i<800;i++)
									sum=sum+arr[i];
								sprintf(str,"%d",sum);
								write(fd8[1],str,strlen(str)+1);
								printf("child 8\n");
								close(fd8[1]);
							}
							else
							{	
								wait(NULL);
								cpid=fork();
								if(cpid==0){
									int sum=0;
									for(int i=800;i<900;i++)
										sum=sum+arr[i];
									sprintf(str,"%d",sum);
									write(fd9[1],str,strlen(str)+1);
									printf("child 9\n");
									close(fd9[1]);
								}
								else
								{ 
									wait(NULL);
									cpid=fork();
									if(cpid==0){
										int sum=0;
										for(int i=900;i<1000;i++)
											sum=sum+arr[i];
										sprintf(str,"%d",sum);
										write(fd10[1],str,strlen(str)+1);
									printf("child 10\n");
									close(fd10[1]);
									}
									else
									{
										wait(NULL);
										wait(NULL);
										wait(NULL);
										wait(NULL);
										wait(NULL);
										wait(NULL);
										wait(NULL);
										wait(NULL);
										wait(NULL);
										wait(NULL);
										int Gsum=0;
										char o_str[100];
										read(fd1[0],o_str,100);
										int f=atoi(o_str);
										Gsum=Gsum+f;
										read(fd2[0],o_str,100);
										f = 0;
										f=atoi(o_str);
										Gsum=Gsum+f;
										read(fd3[0],o_str,100);
										f = 0;
										f=atoi(o_str);
										Gsum=Gsum+f;
										read(fd4[0],o_str,100);
										f = 0;
										f=atoi(o_str);
										Gsum=Gsum+f;
										read(fd5[0],o_str,100);
										f = 0;
										f=atoi(o_str);
										Gsum=Gsum+f;
										read(fd6[0],o_str,100);
										f = 0;
										f=atoi(o_str);
										Gsum=Gsum+f;
										read(fd7[0],o_str,100);
										f = 0;
										f=atoi(o_str);
										Gsum=Gsum+f;
										read(fd8[0],o_str,100);
										f = 0;
										f=atoi(o_str);
										Gsum=Gsum+f;
										read(fd9[0],o_str,100);
										f = 0;
										f=atoi(o_str);
										Gsum=Gsum+f;
										read(fd10[0],o_str,100);
										f = 0;
										f=atoi(o_str);
										Gsum=Gsum+f;
										printf("Parent ");
										printf("Sum : %d\n", Gsum);
										close(fd1[1]);
										close(fd2[1]);
										close(fd3[1]);
										close(fd4[1]);
										close(fd5[1]);
										close(fd6[1]);
										close(fd7[1]);
										close(fd8[1]);
										close(fd9[1]);
										close(fd10[1]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
return(0);
}
