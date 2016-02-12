#include "header.h"

int ksleep(int event)
{
	printf("ksleep():\n\r");
	running->event = event; // record event in PROC.event
	running->status = SLEEP; // change status to SLEEP

	//add proc to sleepList
	put_proc(&sleepList, running);

	printf("after put_proc: pid %d status %d \n\r", running->pid, running->status);

	// give up CPU
	tswitch();
}

int kwakeup(int event)
{
	int i; PROC *p;
	for (i=1; i<NPROC; i++) // not applicable to P0
	{
		p = &proc[i];
	   if (p->status == SLEEP && p->event == event)
		{
			p->event = 0; // cancel PROC’s event
		  	p->status = READY; // make it ready to run again
		   enqueue(&readyQueue, p);
		}
	}
}

int kexit(int exitvalue)
{}

int kwait(int *status)
{}
