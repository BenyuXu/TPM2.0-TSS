// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

//#pragma warning(disable:4996)

#pragma once

#pragma warning(disable:4996)

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

//set tools' version NO.
#ifndef VERSION
#define VERSION "1.0.0"
#endif

//set for using strtoll to convert string to number
#define strtoll _strtoi64

//define PATH_MAX
#define PATH_MAX 260



// TODO: reference additional headers your program requires here
