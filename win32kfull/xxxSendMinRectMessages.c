/*
 * XREFs of xxxSendMinRectMessages @ 0x1C000D518
 * Callers:
 *     NtUserGetWindowMinimizeRect @ 0x1C000D3A0 (NtUserGetWindowMinimizeRect.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0218C94 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMinimizeHungWindow @ 0x1C02278C0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C003E0D0 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // rdx
  void *v6; // rcx
  struct tagWND *i; // r8
  struct tagWND *v8; // rdi
  int v10; // [rsp+20h] [rbp-60h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h]
  __int128 v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+78h] [rbp-8h]
  unsigned int v16; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+40h] BYREF

  v2 = 0;
  if ( a1 )
    v3 = *a1;
  else
    v3 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
  {
    xxxCallHook(5, v3, a2, 10);
    v2 = 1;
  }
  v4 = *(_QWORD *)(gptiCurrent + 464LL);
  if ( *(_QWORD *)(v4 + 240) )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 456LL), &v12, UserDereferenceObject);
    v6 = *(void **)(gptiCurrent + 456LL);
    if ( v6 )
      ObfReferenceObject(v6);
    v16 = 0;
    for ( i = 0LL; ; i = v8 )
    {
      v8 = VWPLNextBase(*(struct tagVWPL **)(v4 + 240), v5, i, &v16, v10, v11);
      if ( !v8 )
        break;
      v17 = 0LL;
      v15 = 0LL;
      v14 = 0LL;
      ThreadLock(v8, &v14);
      if ( xxxSendTransformableMessageTimeout(v8, 0x8Bu, 0, 100, (__int64)&v17, 1, 0) )
        v2 = 1;
      ThreadUnlock1();
    }
    PopAndFreeW32ThreadLock(&v12);
  }
  return v2;
}
