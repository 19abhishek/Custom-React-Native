#include <jni.h>
#include "trial-native.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_trialnative_TrialNativeModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return trialnative::multiply(a, b);
}
