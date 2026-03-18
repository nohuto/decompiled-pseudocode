/*
 * XREFs of xxxSendMinRectMessages @ 0x1C010DD14
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C010DBA0 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMinimizeHungWindow @ 0x1C023DBB8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C00784D4 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v4; // r14
  struct tagVWPL **v5; // rsi
  __int64 v6; // rdx
  void *v7; // rcx
  struct tagWND *i; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 *v12; // rdi
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h]
  unsigned int v18; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+40h] BYREF

  v2 = 0;
  if ( a1 )
    v4 = *a1;
  else
    v4 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v5 = *(struct tagVWPL ***)(gptiCurrent + 464LL);
  if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *((_DWORD *)*v5 + 4)) & 0x800) != 0 )
  {
    xxxCallHook(5, v4, a2, 10);
    v5 = *(struct tagVWPL ***)(gptiCurrent + 464LL);
    v2 = 1;
  }
  if ( v5[30] )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 456LL), &v14, UserDereferenceObject);
    v7 = *(void **)(gptiCurrent + 456LL);
    if ( v7 )
      ObfReferenceObject(v7);
    v18 = 0;
    for ( i = 0LL; ; i = (struct tagWND *)v12 )
    {
      v12 = (unsigned __int64 *)VWPLNextBase(v5[30], v6, i, &v18);
      if ( !v12 )
        break;
      v19 = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      ThreadLock((__int64)v12, (__int64 *)&v16);
      if ( xxxSendTransformableMessageTimeout(v12, 0x8Bu, v4, a2, 0, 0x64u, (unsigned __int64 *)&v19, 1, 0) )
        v2 = 1;
      ThreadUnlock1(v10, v9, v11);
    }
    PopAndFreeW32ThreadLock((__int64)&v14);
  }
  return v2;
}
