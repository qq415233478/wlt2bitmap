#include <jni.h>
#include <malloc.h>
#include "Wlt2BmpUtils.h"
#include "../common/Android_Log.h"
#include "../decodetools/DecodePhoto.h"
JavaVM *mVM;
JNIEnv *m_Env;
int unpack(char *src, char *dst, int bmpSave);
JNIEXPORT jint  JNICALL Java_com_megvii_idcard_WltDecodeUtil_Wlt2Bmp
        (JNIEnv *env, jobject object,jbyteArray wlt,jbyteArray bmpparam)
{
	env->GetJavaVM(&mVM);
	jbyte *wlt_temp=env->GetByteArrayElements(wlt,NULL);
	char *wltchar=(char*)wlt_temp;
	jbyte *bmp=env->GetByteArrayElements(bmpparam,NULL);
	char *bmpchar=(char*)bmp;
	int ret = CallWlt2BmpBytes(wltchar,bmpchar);
    //free(wltchar);
    //free(bmpchar);
    env->ReleaseByteArrayElements(wlt, wlt_temp, JNI_ABORT);
    env->ReleaseByteArrayElements(bmpparam, bmp, JNI_ABORT);
   return ret;
}


