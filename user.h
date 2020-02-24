struct stat;
struct rtcdate;

// system calls
int fork(void);
int exit(void) __attribute__((noreturn));
int wait(void);
int pipe(int*);
int write(int, const void*, int);
int read(int, void*, int);
int close(int);
int kill(int);
int exec(char*, char**);
int open(const char*, int);
int mknod(const char*, short, short);
int unlink(const char*);
int fstat(int fd, struct stat*);
int link(const char*, const char*);
int mkdir(const char*);
int chdir(const char*);
int dup(int);
int getpid(void);
char* sbrk(int);
int sleep(int);
int uptime(void);
int KT_Create(void(*fnc)(void*), void* arg);
<<<<<<< HEAD
int KT_Join(int);
int sem_initialize(void);
=======
int KT_Join(void);
int sem_initialize(int);
>>>>>>> eaa0bd8... Having issues waking up sleeping thread during KT_join. Looked in gdb and it turns out that when a thread exits, for some reason the value of proc->psl is 0 instead of expected pointer to sl entry. Will debug later. Othewise should work
int sem_wait(int);
int sem_signal(int);
void sem_free(int);

// ulib.c
int stat(const char*, struct stat*);
char* strcpy(char*, const char*);
void *memmove(void*, const void*, int);
char* strchr(const char*, char c);
int strcmp(const char*, const char*);
void printf(int, const char*, ...);
char* gets(char*, int max);
uint strlen(const char*);
void* memset(void*, int, uint);
void* malloc(uint);
void free(void*);
int atoi(const char*);
