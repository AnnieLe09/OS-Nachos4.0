// main.h 
//	This file defines the Nachos global variables
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#ifndef MAIN_H
#define MAIN_H

#include "copyright.h"
#include "debug.h"
#include "kernel.h"
#include "utility.h"
#include "thread.h"
#include "scheduler.h"
#include "interrupt.h"
#include "stats.h"
#include "timer.h"
#include "bitmap.h"
#include "ptable.h"
#include "stable.h"


extern Kernel *kernel;
extern Debug *debug;

// Initialization and cleanup routines
extern void Initialize(int argc, char **argv); 	// Initialization,
						// called before anything else
extern void Cleanup();				// Cleanup, called when
						// Nachos is done.



/*
extern Thread *currentThread;			// the thread holding the CPU
extern Thread *threadToBeDestroyed;  		// the thread that just finished
extern Scheduler *scheduler;			// the ready list
extern Interrupt *interrupt;			// interrupt status
extern Statistics *stats;			// performance metrics
extern Timer *timer;				// the hardware alarm clock
extern Machine* machine;
extern FileSystem  *fileSystem;
extern PTable *pTab;
extern STable *sTab;
extern Semaphore *addrLock;	// semaphore trong synch.h
extern Bitmap *gPhysPageBitMap;	// quan ly cac frame vat ly tren ram
extern Bitmap *pageTable; // Quan ly cac trang
extern int *parentIdTable; // Quan ly cac tien trinh cha
extern char** fileNameTable; // Quan ly ten cac tien trinh
*/




#ifdef USER_PROGRAM
#include "machine.h"
#include "synchcons.h"
#include "synch.h"
extern Machine* machine;	// user program memory and registers
extern SynchConsole* gSynchConsole;

extern Semaphore *addrLock;	// semaphore
extern BitMap *gPhysPageBitMap;	// quan ly cac frame
extern PTable *pTab;		// quan ly bang tien trinh
extern STable *sTab;		// quan ly semaphore
#endif

#ifdef FILESYS_NEEDED 		// FILESYS or FILESYS_STUB 
#include "filesys.h"
extern FileSystem  *fileSystem;
#endif

#ifdef FILESYS
#include "synchdisk.h"
extern SynchDisk   *synchDisk;
#endif

#ifdef NETWORK
#include "post.h"
extern PostOffice* postOffice;
#endif

#endif // MAIN_H

