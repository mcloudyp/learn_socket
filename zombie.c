#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	pid_t pid=fork();
	
	if(pid==0)	//if child process
		puts("Hi, I am a child process.");
	else		//if parent process
	{
		printf("Child Process ID: %d \n", pid);
		sleep(30);	//sleep 30 sec
	}

	if(pid==0)
		puts("End child process.");
	else
		puts("End parent process.");
	
	return 0;
}

