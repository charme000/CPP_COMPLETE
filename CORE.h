#ifndef CORE_H
#define CORE_H

/* Core Functionality and Macros */

#define EMPTY() 
#define DEFER(M) M EMPTY()
#define OBSTRUCT(M) M DEFER(EMPTY)()

/* Apply Macro to arguments */
#define APPLY(M, ...) M(__VA_ARGS__)

/* Join tokens */
#define JOIN(X, Y) X##Y
#define JOIN2(X, Y, Z) X##Y##_##Z

/* Evaluate expression */
#define EVAL(...) __VA_ARGS__

/* Evaluate to empty */
#define EAT(...)

/* Raise error */
#define ERROR() (ERROR)##(ERROR)

#endif