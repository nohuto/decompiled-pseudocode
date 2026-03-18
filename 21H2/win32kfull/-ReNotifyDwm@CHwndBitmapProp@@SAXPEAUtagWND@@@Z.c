/*
 * XREFs of ?ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z @ 0x1C0160078
 * Callers:
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 * Callees:
 *     ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x1C024A298 (--$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z.c)
 *     DwmAsyncCreateDCompositionVisualBitmapForHwnd @ 0x1C0271D90 (DwmAsyncCreateDCompositionVisualBitmapForHwnd.c)
 */

void __fastcall CHwndBitmapProp::ReNotifyDwm(struct tagWND *a1)
{
  CompositionObject *v1; // rcx
  __int64 v2; // rcx
  void *v3; // rax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndBitmapProp>(a1, &v4) )
  {
    v1 = *(CompositionObject **)(v4 + 24);
    if ( v1 )
    {
      if ( (int)CompositionObject::OpenDwmHandle(v1, &v5) >= 0 )
      {
        v3 = (void *)ReferenceDwmApiPort(v2);
        DwmAsyncCreateDCompositionVisualBitmapForHwnd(v3);
      }
    }
  }
}
