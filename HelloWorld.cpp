//============================================================================
// Name        : helloCPP.cpp
// Author      : zym
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "HelloWorld.h"
#include <cstdio>

JNIEXPORT void JNICALL Java_HelloWorld_SayHello(JNIEnv *, jobject){
	printf("HelloWorld.\n");
}
