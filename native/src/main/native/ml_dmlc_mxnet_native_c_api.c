#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "ml_dmlc_mxnet_native_c_api.h" // generated by javah
#include "c_api.h"

JNIEXPORT jint JNICALL Java_ml_dmlc_mxnet_LibInfo_mxNDArrayCreateNone(JNIEnv *env, jobject obj, jobject ndArrayHandle) {
  NDArrayHandle *out;
  int ret = MXNDArrayCreateNone(out);
  jclass ndClass = env->GetObjectClass(ndArrayHandle);
  jfieldID ptr64 = env->GetFieldID(ndClass, "ptr64", "J");
  env->SetLongField(ndArrayHandle, ptr64, (long)out);
  return ret;
}

// TODO: move to c_api_error.c
JNIEXPORT jstring JNICALL Java_ml_dmlc_mxnet_LibInfo_mxGetLastError(JNIEnv * env, jobject obj) {
  char *tmpstr = "MXNetError";
  jstring rtstr = env->NewStringUTF(tmpstr);
  return rtstr;
}

JNIEXPORT jint JNICALL Java_ml_dmlc_mxnet_LibInfo_mxNDArrayFree(JNIEnv * env, jobject obj, jobject ndArrayHandle) {
  // TODO
  puts("Free ndarray called");
  return 0;
}

