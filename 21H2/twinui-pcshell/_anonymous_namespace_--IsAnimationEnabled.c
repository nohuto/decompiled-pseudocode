/*
 * XREFs of _anonymous_namespace_::IsAnimationEnabled @ 0x1803BB76C
 * Callers:
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::operator() @ 0x1800CEFA8 (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--operator().c)
 *     ?AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AEAVCExperienceManagerAnimationHelper@@_N@Z @ 0x1803B7CC0 (-AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AE.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803BFE08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool anonymous_namespace_::IsAnimationEnabled()
{
  char v0; // bl
  __int64 pvParam; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  pvParam = 8LL;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) )
    return HIDWORD(pvParam) != 0;
  return v0;
}
