#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
#include<string.h>
#define sq(x) x*x 
#include<fcntl.h>
#include<ctype.h>
#include<unistd.h>
#include<pthread.h>
#include<stdbool.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<semaphore.h>
#define TOTAL_CHARS 128
//int sum(int i) {
//    int suma = 0;
//    if (i == 0)
//        return suma;
//        else {
//        suma = suma + i;
//        return suma=suma+sum(i-1);
//
//        }
//            
//}
//int x, v[101], k = 0,i=0;
//void convert(int n) {
//    if (n == 0) {
//        for (int i = k-1; i >= 0; i--) {
//            printf("%d", v[i]);
//        }
//    }
//    else {
//            x = n % 2;
//            v[i] = v[i] * 10 + x;
//            k++;
//            i++;
//             convert(n / 2);
//        }
//    
//    }

//int sum_digits(int n) {
//    int i, v[101], x, max = INT_MIN;
//    for (i = 0; i < n; i++)
//{
//    scanf("%d", &v[i]);
//}
//    for (i = 0; i < n; i++) {
//       int sum = 0;
//       while (v[i] != 0) {
//           sum = sum + v[i] % 10;
//           v[i] = v[i] / 10;
//        }
//       if (sum > max)
//       {
//           max = sum;
//       }
//    }
//    return max;
//}

//int search(int x, int A[], int n) {
//    int ok = 0;
//    for (int i = 0; i <= n; i++)
//    {
//        if (x == A[i])
//        {
//            return i;
//            ok = 1;
//        }
//        
//    }
//    if(ok==0)
//    return -1;
//}


//void findValues(int A[], int n, int vals[]) {
//    int max = INT_MIN, min = INT_MAX, sum=0,i;
//    for (i = 1; i <= n; i++) {
//        if (A[i] > max)
//            max = A[i];
//        if (A[i] < min)
//            min = A[i];
//        sum = sum + A[i];
//    }
//    vals[1] = min;
//    vals[2] = max;
//    vals[3] = sum;
//    
//
//}


//int search(int a,int x)
//{
//    int i, * p = &a, ok = 0;
//    for (i = 0; i < 5; i++){
//        if (*p != x)
//            p++;
//        else {
//            return i;
//            ok = 1;
//        }
//    }
//    if (ok == 0)
//        return -1;
//
//}

//int my_strlen(char* s) {
//    char* p = s;
//    int k = 0;
//    while (*p != '\0') {
//
//        p++;
//        k++;
//   }
//    k = k - 1;
//        
//        
//    return *p-1;
//   
//}

//void my_strrev(char* a) {
//    char* p = a, *x=a;
//    int k = 0;
//    while (*x != '\0') {
//        x++;
//        k++;
//    }
//    while (*x != *p) {
//        x--;
//    printf("%c", *x);
//    }
//    
//
//}

//void get_properties(int* a, int* min, int* max, int* num) {
//    int crr, k = 0;
//    *min = *max = *a;
//    while ((crr = *a) != 0) {
//        if (crr < *min)
//            *min = crr;
//        if (crr > *max)
//            *max = crr;
//        k++;
//        a++;
//    }
//    *num = k;
//}
// char* csearch(char* arr, int n, char cval, char c) {
//    char* p = arr;
//    if (c == 'c') {
//        while (*p != '\0') {
//            if (*p == cval)
//                return p;
//            else
//                p++;
//        }
//    }
// }
// float* fsearch(float* arr, int n, float fval, char c) {
//    float* p = arr;
//    while (p < arr + n) {
//        if (*p == fval) {
//            return p;
//        }
//        p++;
//    }
// }

// int* search(int* arr, int n, int val, char c) {
//    int* pi = arr;
//    if (c == 'i') {
//        int* p = (int*)pi;
//        while (p < arr + n) {
//            if (*p == val) {
//                return p;
//            }
//            p++;
//        }
//    }

//    else if (c == 'c') {
//        char* carr = (char*)arr;
//        return csearch(carr, n, (char)val, c);
//    }

//    else if (c == 'f') {
//        float* farr = (float*)arr;
//        return fsearch(farr, n, (float)val, c);
//    }
//    else
//        return NULL;

// }

// void print_pid(int my_pid, int parent_pid) {
//     printf("[son] pid %d from [parent] pid %d\n", my_pid, parent_pid);
//}

// typedef struct {
//     int start;
//     int end;
//     int digit;
//     int count;
// } Range;

// void *prime_count(void *arg) {
//     Range *range = (Range *) arg;
//     int start = range->start;
//     int end = range->end;
//     int digit = range->digit;
//     int *count = &range->count;

//     for (int i = start; i <= end; i++) {
//         if (i % 10 != digit) {
//             continue;
//         }
//         bool is_prime = true;
//         for (int j = 2; j <= sqrt(i); j++) {
//             if (i % j == 0) {
//                 is_prime = false;
//                 break;
//             }
//         }
//         if (is_prime) {
//             (*count)++;
//         }
//     }

//     return NULL;
// }


//dupa 1.9

// volatile sig_atomic_t done = 0;
// void sigHandler(int sigNo)
// {
//  if (sigNo == SIGINT)
//     printf("Finished\n");
//  done = 1;

// }

// #define NUM_THREADS 6
// #define RANGE 1000000000
// #define DIGITS 2 // 7 or 9

// // Structure for thread data
// struct thread_data {
//     int start;
//     int end;
//     sem_t *semaphore;
// };

// // Function to check if a number is prime
// int is_prime(int num) {
//     if (num < 2) return 0;
//     if (num % 2 == 0 && num != 2) return 0;
//     for (int i = 3; i * i <= num; i += 2) {
//         if (num % i == 0) return 0;
//     }
//     return 1;
// }

// // Function to count primes in a given range
// void *count_primes(void *arg) {
//     struct thread_data *data = (struct thread_data *) arg;
//     int count = 0;
//     for (int i = data->start; i < data->end; i++) {
//         if (is_prime(i) && (i % 10 == DIGITS)) {
//             count++;
//         }
//     }
//     sem_post(data->semaphore); // Signal that the thread has finished
//     printf("Thread %d found %d primes\n", pthread_self(), count);
//     return NULL;
// }

// void my_strrev(char* a) {
//     char* p = a, *x=a, f[10];
//     int k = 2;
//     int i=0;
//     while(*p != '\0'){

//         f[i]=x[strlen(x)-k];
//         p++;
//         k++;
//         i++;
//     }
//    printf("%s",f);


// }

// char* concat(char *s, char *t){     

//     char *f,*p;
//     while(*s)
//         s++;


//     while(*t){
//         *s = *t;
//         s++;
//         t++;
//     }
//     *s='\0';


//     }



int main() {
    /*char ch;
    scanf(" %c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        ch = ch + 32;
        printf("%c", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
        printf("%c", ch);
    }
    else
        printf("%d", ch);*/


        /*float a, b, c, d, x, sum = 0.00;
        int v[4], k = 0;

        scanf("%f %f %f %f", &a, &b, &c, &d);
        v[0] = a;
        v[1] = b;
        v[2] = c;
        v[3] = d;


        for (int i = 0; i < 4; i++)
        {
            if (v[i] > 0) {
                sum = sum + v[i];
                k++;

            }

        }
        if (k == 0)
            printf("0.00");
        x = sum / k;
        printf("%.2f", x);*/




        /*int a = 1, b = 1, c = 1, i, x = 2, y, z;


            for (a = 1; a < 21; a++) {
                for (b = a+1; b < 21; b++) {
                    for (c = b+1; c < 21; c++) {
                        x = a * a;
                        y = b * b;
                        z = c * c;
                        if (x == y + z ||y == x + z || z == x + y  && a < b < c) {
                            printf("%d %d %d \n", a,b,c);

                        }

                    }
                }
            }*/

            //int n, i = 1, v[10], x, k = 0, v1[10], v2[10], y, z;
            //scanf("%d", &n);
            //x = n;
            //while (x != 0) {
            //    v[i] = x % 10;
            //    x = x / 10;
            //    i++;
            //    k++;
            //}
            //
            //for (y = 1; y <= k / 2; y++) {
            //    v1[y] = y;
            //    //printf("%d ", v1[y]);
            //}
            //
            //for (y = k/2; y>=1; y--) {
            //    v2[y] = y;
            //   //printf("%d ", v2[y]);
            //}
            //    if (v[(k / 2) - (v1[y])] != v[(k / 2) + (v2[y])])
            //        printf("true");
            //    else
            //        printf("false");
            //    break;
            //}

    /*int n, x, i = 2, k = 0, k1, z=1;
    scanf("%d", &n);

    x = n;
    do {
        if (n % i == 0) {
            k++;
            n = n / i;
        }
        else {
            if (k > 0) {
                printf("%d %d\n", i, k);
                    k = 0;
            }
            i++;

        }

    } while (n > 1);

    if (k > 0) {
        printf("%d %d\n", i, k);
    }


}*/
/* int n, i = 0, k = 0, v[101], ok = 0, sum = 0, ok1 = 0, rem, dsum = 0, b = 1, ok2 = 0;

    scanf("%d", &n);

    while (n != 0) {

        v[i] = n % 2;
        n = n / 2;
        i++;
        k++;

    }


    for (i = k - 1; i >= 0; i--) {
        if (ok2 == 0) {
            for (i = k - 2; i <= k; i++)
            {
                if ((v[i] && v[i + 1]) == 0)
                {
                    printf("Espresso, ");
                    break;
                }
                if (v[i] == 0 && v[i + 1] == 1)
                {
                    printf("Long coffee, ");
                    break;
                }
                if (v[i] == 1 && v[i + 1] == 0) {
                    printf("Cappucino, ");
                    break;
                }

                if (v[i] == 1 && v[i + 1] == 1)
                {
                    printf("Americano, ");
                    break;
                }
            }
            ok2 = 1;
        }

        if (ok1 == 0) {
            int j;
            for (j = 0; j < k - 2; j++) {
                sum = sum * 10 + v[j];

            }


            while (sum > 0) {
                rem = sum % 10;
                dsum = dsum + rem * b;
                sum = sum / 10;
                b = b * 2;


            }
            ok1 = 1;
            printf("%d sugar, ", dsum);
        }
            if (ok == 0) {
                if (v[i] == 1) {
                    printf("no lid\n");
                    ok = 1;
                }

                if (v[i] == 0) {
                    printf("with lid\n");

                    ok = 1;
                }
            }

    }*/




    /*int suma = 0, n;

    scanf("%d", &n);
    convert(n);*/

    //int n, max = INT_MIN;;
    //scanf("%d", &n);
    //
    //printf("%d",sum_digits(n));

    /* int i, r, x, N, arr[101];
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    r = search(x, arr, N);
        printf("%d", r);*/

        /* int n, a[101], vals[4];
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
        }
        findValues(a, n, vals);*/

        /*int i, j, k, val[21], x = 0, z = 0;
        char str[21], s[21];
        fgets(str, 20, stdin);
        for (i = 0; i < strlen(str) - 1; i++) {
            if (str[i] < 97) {

                str[i] = str[i] + 32;
            }
        }

        for (i = 'a'; i <= 'z'; i++) {
            k = 0;
            for (j = 0; j < strlen(str) - 1; j++) {

                if (str[j] == i && str[j] != ' ') {

                    k++;
                    s[x] = str[j];
                    val[x] = k;
                    x++;


                }
            }
        }
        for (i = 0; i < strlen(s); i++) {

            while (s[i] == s[i + 1]) {
                s[i] = s[i + 1];
                val[i] = val[i + 1];
                i++;
            }
            printf("%c %d\n", s[i], val[i]);
        }*/


        //int i, z=0;
        //    char s[100];
        //    fgets(s, 100, stdin);
        //    for (i = 0; i < strlen(s); i++)
        //    {
        //        
        //       
        //        while (s[i] == s[i + 1])
        //        {  
        //            int k = i;
        //            k++;
        //            z--;
        //            s[i] = s[k];
        //            i++;
        //            
        //            
        //        }
        //        s[strlen(s) - z] = '\0';
        //        printf("%c", s[i]);
        //    }


/* int a[6], i, x;
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);
    printf("%d", search(a[6], x));*/

    //int a[10]={1,10,12,14,5,2,0}, min, max, num;
    //    
    //get_properties(a, &min, &max, &num);
    //printf("%d %d %d", min, max, num);

    //char a[10];
    //fgets(a, 10, stdin);
    //my_strrev(a);
    //}


    // int arr[10] = { 10,20,30,40,20 };
    // int val = 20;
    // int* x = (int*)search(arr, 10, val, 'i');
    // if (x != NULL) {
    //     long pos = x - arr;
    //     printf("%ld\n", pos);
    // }

    // char carr[10] = "Examen";
    // char cval = 'a';
    // char* cx = csearch(carr, 10, cval, 'c');
    // if (x != NULL) {
    //     long pos = cx - carr;
    //     printf("%ld\n", pos);
    // }

    // float farr[10] = { 12.0, 13.0, 14.0, 15.0 };
    // float fval = 15.0;
    // float* fx = (float*)search(farr, 4, fval, 'f');
    // if (x != NULL) {
    //     long pos = fx - farr;
    //     printf("%ld\n", pos);
    // }



    //inainte

    // char fd,c; <- int fd in loc de char
// fd=open("myfile.txt", O_RDONLY | O_TRUNC);
// read(fd, &c,1);
// printf("%c",c);
// close(f); <- fd in loc de f

//#include<fcntl.h>
//programul citeste dintr-un fisier si afiseaza content-ul

//dupa

// int fd;
// char c;
// fd = open("myfile.txt", O_RDONLY) ;//| O_TRUNC);
// read(fd, &c, 1);
// printf("%c", c);
// close(fd);

// This program opens a file named "myfile.txt" in read-only mode, 
// reads a single character from the file, stores it in the variable c, and then prints the character using printf. 
// Finally, the program closes the file using close. 
// If the file "myfile.txt" does not exist, the open function will return -1 
// and the program will print an error message and exit.S

//inainte

// char c, total;
// int f; <- initializare total cu 0 , 

// f=open("myfile.txt",O_RDONLY);
// while(br>0)
//ssize_t = br; <- ssize_t is the correct type for read return values
// {
//     int br = read(f,c,1); <- mutare in while conditia asta si initializare 
//                              inainte de while, &c 
//     if(isdigit(c))
//     total++;
// }
// close(f);
// printf("Found %d digits", total);
// return 1; <- return 0;

//dupa
//#include<ctype.h>
// char c;
// int f;
// f = open("myfile.txt",O_RDONLY);
// ssize_t br ;
// int total=0;
// while(((br = read(f, &c, 1)) > 0))
// {

//     if(isdigit(c))
//     total++;
// } 
// close(f);
// printf("Found %d digits",total);
// return 0; 

// This program opens a file named "myfile.txt" in read-only mode and reads it one character at a time in a loop. If the character is a digit (0-9), 
// it increments a counter variable total. 
// After reading all the characters in the file, the program closes the file and prints the number of digits found in the file. 
// If the file does not exist or cannot be opened, open will return -1 and the program will print an error message and exit. 
// If there is an error in the read function, it will return -1 and the loop will terminate.


//inainte
// char v[1024];
// int fd = open("/my/OF/pics",O_RDONLY);
// ssize_t br;
// br = read(fd,&v,1023); <- 1024 pentru a aloca si spatiu si pentru null
//                      adaugare o variabila ssize_t pentru a putea pune null la final
// printf("File contents: %s",v);
// close(fd);
// adaugare return 0

//dupa
// char v[1024];
// int fd;
// ssize_t br;
// fd = open("/home/samsepi0l/",O_RDONLY);
// br = read(fd,&v,1023);
// v[br]= '\0';
// printf("File contents: %s",v);
// close(fd);

// return 0;

// This program attempts to open the directory "/home/samsepi0l/" in read-only mode. 
// It then reads up to 1023 bytes of data from the directory into a character array v and appends a null character at the end of the array to terminate it as a string. 
// The contents of the array are then printed using printf. Finally, the closes the file descriptor fd.

//inainte
// pid_t p = fork();
// char &n;
// if (p>0)
// printf("hello world");
// wait(&n);
// printf("parent finished!");
// return 1; 

//dupa 

// pid_t p = fork();
// char n;
// if (p>0){
// printf("hello world\n");
// wait(&n);
// printf("parent finished!\n");
// }
// else if(p==0)
// printf("hello world child\n");

// return 0;

// This program creates a new process using the fork() system call and then prints "hello world" in both the parent and child processes. 
// The parent process will also print "parent finished!" after the child process has completed.

//inainte
// pid_t p;
// int s;
// p= fork();
// if(p > 0){
//     char i;
//     for(i=1;i<1000;i++)
//     if(i % 2 == 0)
//     printf("Child 1 prints: %d\n",i);
// }
// else{
//     p = fork();
//     if(p<0){
//         char i;
//         for(i=1000;i>=1;i--)
//         if(i % 2 == 1)
//         printf("child 2 prints: %d\n",i);
//     }
// }
// waitpid(&p,&s,NULL);
// waitpid(&p,&s,NULL);
// printf("children finished printing.");

//dupa
// pid_t p;
// int s;
// p= fork();
// if(p > 0){

//     int i;
//     for(i=1;i<=1000;i++){
//         if(i % 2 == 0)
//     printf("Child 1 prints: %d\n",i);
//     }
// }
// else if (p == 0){

//     if(p>=0){
//         int i;
//         for(i=1000;i>=1;i--){
//             if(i % 2 == 1)
//             printf("child 2 prints: %d\n",i);
//         }      
//     }

// }
// waitpid(p,&s,NULL);
// waitpid(p,&s,NULL);
// printf("children finished printing.\n");
//   return 0;
// }

// This program creates two child processes using the fork() system call. 
// Each child process then prints a series of numbers from 1 to 1000. 
// The first child process prints only even numbers, while the second child process prints only odd numbers. 
// The parent process waits for both child processes to finish before printing "children finished printing."



// int main(int argv,char **argc){
//inainte
//     usigned long p= fork(); <- neaparat pid_t la fork
//     if(p==0)
//     printf("first arg is: %s\n",argv[1]);
// return 0;

// //dupa 

// pid_t p;

// p=fork();

// if (p==0){
//     printf("first arg is: %s\n",argc[1]);
// }
// return 0;
// }

// This program uses the fork() system call to create a new process, 
// and then the child process prints the value of the first command-line argument passed to the program.





//  int main(int argv,char **argc){
//inainte
//     int pid = fork();
//     if(pid == 0)
//     exit(260);
// int status;
// wait(&status);

//dupa

// pid_t pid = fork();
// int status;
//     if(pid == 0)
//     exit(260);
// else if (pid>0){
//     wait(&status);
//     printf("child exited with status %d\n",WEXITSTATUS(status));
// }
// return 0;
//  }
//  This program creates a new process using the fork() system call and then waits for the child process to exit. 
//  After the child process exits, the parent process prints the exit status of the child process.

// exercitiu de writing  1)

// void print_pid(int my_pid, int parent_pid) {
//     printf("[son] pid %d from [parent] pid %d\n", my_pid, parent_pid);

// main
// int pid1, pid2, pid3, status;

//     pid1 = fork();
//     if (pid1 == 0) {
//         print_pid(getppid(), getppid());
//         exit(0);
//     }

//     pid2 = fork();
//     if (pid2 == 0) {
//         pid3 = fork();
//         if (pid3 == 0) {
//             print_pid(getpid(), getppid());
//             exit(0);
//         }
//         waitpid(pid3, &status, 0);
//         print_pid(getpid(), getppid());
//         exit(0);
//     }

//     waitpid(pid1, &status, 0);
//     waitpid(pid2, &status, 0);

//     return 0;
//   }

// The fork() system call creates a new process, which is a copy of the parent process.
// getppid() returns the PID of the parent process.
// waitpid() suspends the execution of the parent process until the child process terminates.
// In the first child process, we print the PID of the parent process.
// In the second child process, we create the third child process and wait for it to terminate. 
// After that, we print the PID of the parent process.
// In the third child process, we print our own PID. The parent process waits for all child processes to terminate before exiting.



//exercitiu 2

//typedef struct {
//     int start;
//     int end;
//     int digit;
//     int count;
// } Range;

// void *prime_count(void *arg) {
//     Range *range = (Range *) arg;
//     int start = range->start;
//     int end = range->end;
//     int digit = range->digit;
//     int *count = &range->count;

//     for (int i = start; i <= end; i++) {
//         if (i % 10 != digit) {
//             continue;
//         }
//         bool is_prime = true;
//         for (int j = 2; j <= sqrt(i); j++) {
//             if (i % j == 0) {
//                 is_prime = false;
//                 break;
//             }
//         }
//         if (is_prime) {
//             (*count)++;
//         }
//     }

//     return NULL;
// }



//main
// pthread_t threads[4];
//     Range ranges[4];

//     int start = 2;
//     int end = 100000000;
//     int total_count = 0;

//     for (int i = 0; i < 4; i++) {
//         ranges[i].start = start;
//         ranges[i].end = start + (end - start) / 4;
//         ranges[i].digit = (i % 2 == 0) ? 3 : 7;
//         ranges[i].count = 0;
//         start = ranges[i].end + 1;
//     }

//     for (int i = 0; i < 4; i++) {
//         pthread_create(&threads[i], NULL, prime_count, &ranges[i]);
//     }

//     for (int i = 0; i < 4; i++) {
//         pthread_join(threads[i], NULL);
//         total_count += ranges[i].count;
//     }

//     printf("Total number of primes ending in 3 or 7: %d\n", total_count);

//     for (int i = 0; i < 4; i++) {
//         printf("Thread %d found %d primes\n", i, ranges[i].count);
//     }

//     return 0;



//varianta 2

//inainte
// unsigned char fd;

// if((fd = open("myfile",O_EXCL) | O_TRUNC))
// {
//     read(fd, &c, 4);
//     close(fd);
//     printf("%c",c);
// }
// close(fd);

//dupa

// int fd;
// ssize_t c;
// if((fd = open("myfile.txt",O_EXCL | O_TRUNC))) 
// {
//     read(fd, &c, 4);
//     printf("%c",c);
// }
// close(fd);

// This program opens a file named "myfile.txt" in exclusive mode (O_EXCL) and truncates it to zero length (O_TRUNC). 
// If the file is successfully opened, 
// the program reads the first 4 bytes from the file and prints them as a character. Finally, 
// the program closes the file.

//inainte
//int main(int argc, char* argv[]){

// int f = open(argv[1],O_WRONLY),c,total;
// if(f == 0){

//     while((n = read(f,&c,1) ) > 0)
//         if(isalpha(c))
//             total++;
//     close(f);
// }
// printf("Found %ud alphanumeric elements in file!\n", total);

// dupa

// int f ,total=0;
// ssize_t n;
// char c;
// f = open("myfile.txt",O_RDONLY);
// while((n = read(f,&c,1) ) > 0){
//     if(isalnum(c))
//         total++;
// }
// close(f);
// printf("Found %d alphanumeric elements in file!\n", total);
// return 0;
// }

// This program opens a file named "myfile.txt" in read-only mode and counts the number of alphanumeric characters in the file. 
// It then prints the total number of alphanumeric characters found in the file and exits.

// inainte 

// char v[512];
// unsigned long fd = open("/home/samsepi0l/",O_WRONLY);
// read(fd,&v,511);
// printf("file contents: %s",v);
// close(fd);

//dupa

// char v[512];
// int fd = open("/home/samsepi0l/myfile.txt",O_RDONLY);
// ssize_t br;
// br = read(fd,&v,511);
// v[br]='\0';
// printf("file contents: %s",v);
// close(fd);
// return 0;

// This program reads the contents of a file named "myfile.txt" 
// located in the "/home/samsepi0l/" directory and prints its contents to the console.

//inainte

// pid_t p = fork();
// char &n;
// if (p > 0)
//  printf("Hello world");
// wait(&n);
// printf("Child has finished!");
// return 1;

//dupa

// pid_t p = fork();
// char n;
// if (p > 0)
//  printf("Hello world\n");
// wait(&n);
// printf("Child has finished!\n");
// return 0;

// This program forks a new process and prints "Hello world" from the parent process. 
// It then waits for the child process to finish using wait(&n) 
// and prints "Child has finished!" once the child process has terminated.

//inainte

// unsigned char txt[2048], fd[2], n;
// pid_t p = fork();
// pipe(fd);
// if (p == 0) // parent
// {
//  printf(“Enter text: “);
//  scanf(“%s”, txt);
//  close(fd[0]); write(fd[1], txt, strlen(txt)); close(fd[1]);
//  wait(&n);
// }
// else // child
// {
// close(fd[1]);
//  read(fd[0], txt, 2048);
//  close(fd[0]);
//  printf(“Child received: %s\n”, txt);
// }

//dupa(nu merge)
// unsigned char txt[2048];
// int fd[2];int n;
// pid_t p = fork();
// pipe(fd);
// if (p == 0) // parent
// {
//  printf("enter text: ");
//  fgets(txt, sizeof(txt), stdin);
//  size_t len = strlen(txt);
//  if(len > 0 && txt[len-1]=='\n')
//     txt[len-1]='\0';
// txt[len]='\0';
//  close(fd[0]); 
//  write(fd[1], txt, strlen(txt)+1);
//  close(fd[1]);

// }
// else // child
// {
// close(fd[1]);
//  ssize_t n = read(fd[0], txt, sizeof(txt));
//     txt[n]='\0';
//     printf("Child received: %s\n", txt);
//  }
//  close(fd[0]);

// }
// int status;
//  waitpid(p, &status, 0);



//int main(int argv, char **argc)
//{
//inainte
// unsigned long p = fork();
// if (p == 0)
//  printf("First argument is: %s\n", argv[1]);
// return 0;

//dupa

// pid_t p = fork();
// if (p == 0)
//  printf("First argument is: %s\n", argc[1]);
// return 0;
// }

// This program forks a new process and prints the first command-line argument passed to the program in the child process.

// int main(int argv, char **argc)
// {
//inainte
//  int pid = fork();
//  if (pid == 0)
//  exit (260);
//  int status;
//  wait(&status);
//  printf("%d\n", WEXITSTATUS(status));
//  return 0;

//  pid_t pid = fork();
//  if (pid == 0)
//  exit (260);
// else if(pid>0)
// {
//     int status;
//  wait(&status);
//  printf("%d\n", WEXITSTATUS(status));
// }

//  return 0;
// }

// This program forks a new process and exits the child process with a status code of 260. 
// The parent process waits for the child process to finish and then prints its exit status.

//inainte

// unsigned int n, fd;
// char buffer[SIZE-1];
// ...
// while ((n = read(fd, buffer, SIZE) > 0))
//  {
//  printf("Bytes read: %d\n", n);
//  printf("Content: %s\n\n", buffer);
//  }

//dupa

// unsigned int fd;
// ssize_t n;
// char buffer[SIZE-1];

// while ((n = read(fd, buffer, SIZE) > 0))
//  {
//  printf("Bytes read: %d\n", n);
//  printf("Content: %s\n\n", buffer);
//  }

// This program reads data from a file descriptor fd into a buffer 
// and prints the number of bytes read and the content of the buffer to the console.

//inainte

// int done = 0;
// void sigHandler(int sigNo)
// {
//  if (sigNo == SIGINT)
//  printf(“Hello\n”);
//  else
//  {
//  printf(“Finished\n”);
//  done = 1;
//  }
// }
// int main()
// {
//  signal(SIGALRM, sigHandler);
//  signal(SIGINT, sigHandler);
//  alarm(5);
//  while (done) sleep(1); // looping
// }

//dupa
// volatile sig_atomic_t done = 0;
// void sigHandler(int sigNo)
// {
//  if (sigNo == SIGINT)
//     printf("Finished\n");
//  done = 1;

// }

// int main(){
// signal(SIGALRM, sigHandler);
//  signal(SIGINT, sigHandler);
// while (!done) {
//         printf("Hello\n");
//         sleep(5);
//         alarm(5);
//     }
// }


// This program sets up a signal handler for the SIGINT and SIGALRM signals and enters a loop 
// that prints "Hello" every 5 seconds while the done flag is not set. 
// When the SIGINT signal is received, the signal handler sets the done flag to 1 and prints "Finished" to the console.

//inainte 
// unsigned long n = 0;
// unsigned int s;
// pid_t p;
// sem_init(&s, 1); // initialize binary semaphore (mutex) with value 1
// sem_down(s, 1); // semaphore down by 1
// p = fork();
// if (p == 0)
// {
//  printf("Child is in the critical region\n");
//  sem_up(s, 1); // semaphore up by 1
//  printf("Child left the critical region\n");
//  return 0;
// }
// sem_up(s, 1); // semaphore up by 1
// printf("Parent left the critical region\n");
// return 0;

// dupa
// unsigned long n = 0;
// sem_t s;
// pid_t p;
// sem_init(&s, 1, 1); // initialize binary semaphore (mutex) with value 1
// sem_wait(&s); // semaphore down by 1
// p = fork();
// if (p == 0)
// {
//  printf("Child is in the critical region\n");
//  sem_post(&s); // semaphore up by 1
//  printf("Child left the critical region\n");
//  return 0;
// }
// sem_post(&s); // semaphore up by 1
// printf("Parent left the critical region\n");
// return 0;

// This program creates a binary semaphore (mutex) and uses it to synchronize access to a critical 
// region of code between a parent process and a child process. 
// The critical region of code is a section of code that should only be executed by one process at a time.


// // Fork child process 1
// pid_t child1 = fork();
// if (child1 == 0) {
//     // Child process 1
//     printf("Child process 1: My PID is %d, sending to child 2...\n", getpid());

//     // Fork child process 2
//     pid_t child2 = fork();
//     if (child2 == 0) {
//         // Child process 2
//         printf("Child process 2: Received PID %d from child 1.\n", getppid());
//         return 0;
//     }

//     // Child process 1 waits for child process 2 to finish
//     int status;
//     waitpid(child2, &status, 0);
//     printf("Child process 1: Child process 2 has finished.\n");
//     return 0;
// }

// // Fork child process 3
// pid_t child3 = fork();
// if (child3 == 0) {
//     // Child process 3
//     printf("Child process 3: My parent's PID is %d.\n", getppid());
//     return 0;
// }

// // Parent process
// int status;
// waitpid(child1, &status, 0);
// waitpid(child3, &status, 0);
// printf("Parent: All child processes have finished.\n");
// return 0;

// Child process 1: My PID is 60176, sending to child 2...
// Child process 3: My parents PID is 60175.
// Child process 2: Received PID 60176 from child 1.
// Child process 1: Child process 2 has finished.
// Parent: All child processes have finished.

// . Write a C program that creates 3 child processes, all spawned from the same parent. 
// The first child process sends its own PID to the second child process
// (who prints that PID on screen), and child process number 3 simply prints its parents PID. 



//    pthread_t threads[NUM_THREADS];
//     struct thread_data data[NUM_THREADS];
//     sem_t semaphore;
//     sem_init(&semaphore, 0, 3); // Initialize semaphore with value 3

//     int range_per_thread = RANGE / NUM_THREADS;
//     for (int i = 0; i < NUM_THREADS; i++) {
//         data[i].start = i * range_per_thread + 2;
//         data[i].end = (i == NUM_THREADS - 1) ? RANGE : (i + 1) * range_per_thread + 2;
//         data[i].semaphore = &semaphore;
//         sem_wait(&semaphore); // Wait for the semaphore to be available
//         pthread_create(&threads[i], NULL, count_primes, &data[i]);
//     }

//     int count = 0;
//     for (int i = 0; i < NUM_THREADS; i++) {
//         sem_wait(&semaphore); // Wait for the semaphore to be available
//         pthread_join(threads[i], NULL);
//         count += data[i].end - data[i].start;
//     }

//     printf("Total primes found: %d\n", count);

// return 0;


//     int i, j;
//     char input[1000];

//     int _char[TOTAL_CHARS];

//     for (i = 0; i < TOTAL_CHARS; ++i) {
//         _char[i] = 0;
//     }

//     fgets(input, sizeof(input), stdin);
//     if (input[strlen(input) - 1] == '\n') {
//         input[strlen(input) - 1] = '\0';
//     --i;
// }
//     for (i = 0; i < strlen(input); ++i) {
//         _char[(int)input[i]] = _char[(int)input[i]] + 1;
//     }

//     for (i = 1; i < TOTAL_CHARS; ++i) {
//         if (_char[i] != 0) {
//             printf("%c %d\n", i, _char[i]);
//         }
//     }

//     return 0;


//    int x = 25;
//    int *p;
//    p=&x;
//    printf("Value of x is: %d\n",x);
//    printf("Value stored at pointer p is: %d\n",*p);
//    printf("Address of the variable x is: %x\n",&x); 
//    printf("p points to the address = %x\n",p);
//    printf("Address of the pointer p = %x\n",&p);
//    return 0;

// char a[101];
// fgets(a,sizeof(a),stdin);
// my_strrev(a);



//   char str[101] ;

//   fgets(str,sizeof(str),stdin);

//   size_t size = strlen(str)+1;
//   char* memory = (char*)malloc(size);

//   strcpy(memory, str);
//   printf("%s",memory);
//   free(memory);


// char a[101] ,b[101] ;
// fgets(a,101,stdin);
// fgets(b,101,stdin);
// concat(a,b);


// printf("%s",a);

// int k, num=30;
// k = (num>5 ? (num <=10 ? 100 : 200): 500);
// printf("%d\n", k);
// return 0;


//     char *pcData="continental";
//    printf("%c ",pcData[6]);
//    return 0;




}







































































