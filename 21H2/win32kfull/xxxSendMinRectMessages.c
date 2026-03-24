/*
 * XREFs of xxxSendMinRectMessages @ 0x1C0124CA8
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0124B20 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236330 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMinimizeHungWindow @ 0x1C023F190 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C004F0E4 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, struct _LARGE_STRING *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v4; // r14
  struct tagVWPL **v5; // rsi
  __int64 v6; // rdx
  void *v7; // rcx
  struct tagWND *i; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // rdi
  _QWORD v13[3]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+78h] [rbp-8h]
  unsigned int v16; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 LowLimit; // [rsp+C0h] [rbp+40h] BYREF

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
    xxxCallHook(5, v4, (__int64)a2, 10);
    v5 = *(struct tagVWPL ***)(gptiCurrent + 464LL);
    v2 = 1;
  }
  if ( v5[30] )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 456LL), &v14, UserDereferenceObject);
    v7 = *(void **)(gptiCurrent + 456LL);
    if ( v7 )
      ObfReferenceObject(v7);
    v16 = 0;
    for ( i = 0LL; ; i = v11 )
    {
      v11 = VWPLNextBase(v5[30], v6, i, &v16);
      if ( !v11 )
        break;
      v13[2] = 0LL;
      LowLimit = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v13;
      v13[1] = v11;
      HMLockObject(v11);
      if ( xxxSendTransformableMessageTimeout(
             (unsigned __int64)v11,
             0x8Bu,
             v4,
             a2,
             0,
             0x64u,
             (__int64 *)&LowLimit,
             1,
             0) )
      {
        v2 = 1;
      }
      ThreadUnlock1(v10);
    }
    PopAndFreeW32ThreadLock((__int64)&v14);
  }
  return v2;
}
