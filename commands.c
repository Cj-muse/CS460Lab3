#include "kernel.c"

// 's' command
do_tswitch()
{

}

// 'f' command
do_kfork()  
{
	
}

// 'q' command 
do_exit()
{
	//ask for an exitValue (value), e.g. 123
        //kexit(exitValue);
}

// 'z' command
do_sleep()
{
        //ask for an event (value), e.g. 123; 
        //ksleep(event);
}

// 'a' command
do_wakeup()
{
	//ask for an event (value);
        //kwakeup(event);
}

// 'w' command 
do_wait()
{ 
	//int pid, status;
        //pid = kwait(&status);
        //print pid and status;
}
