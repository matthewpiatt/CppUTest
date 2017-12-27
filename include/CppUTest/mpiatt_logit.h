#ifndef MPIATT_LOGIT_H
#define MPIATT_LOGIT_H

#include "CppUTest/SimpleString.h"

void logit(const char* file,
           int line,
           const char* op,
           const char* callsite_file,
           int callsite_line,
           const char* data,
           size_t size);

#endif // MPIATT_LOGIT_H

