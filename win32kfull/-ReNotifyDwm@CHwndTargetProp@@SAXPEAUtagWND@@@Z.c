/*
 * XREFs of ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C007D70C
 * Callers:
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C007DC28 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C00E6368 (DwmAsyncCreateDCompositionHwndTarget.c)
 */

void __fastcall CHwndTargetProp::ReNotifyDwm(struct tagWND *a1)
{
  __int64 v1; // rbp
  unsigned int i; // ebx
  CompositionObject *v3; // rcx
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  void *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v6) )
  {
    v7 = 0LL;
    v1 = v6;
    for ( i = 0; i < 3; ++i )
    {
      v3 = *(CompositionObject **)(v1 + 16LL * (int)i + 24);
      if ( v3 )
      {
        if ( (int)CompositionObject::OpenDwmHandle(v3, &v7) >= 0 )
        {
          v5 = (void *)ReferenceDwmApiPort(v4);
          DwmAsyncCreateDCompositionHwndTarget(v5);
        }
      }
    }
  }
}
