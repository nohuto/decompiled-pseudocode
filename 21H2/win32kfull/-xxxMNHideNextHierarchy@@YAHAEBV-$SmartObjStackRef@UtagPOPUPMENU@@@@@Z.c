/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C022F938
 * Callers:
 *     xxxMNButtonDown @ 0x1C02304EC (xxxMNButtonDown.c)
 *     xxxMNMouseMove @ 0x1C0232340 (xxxMNMouseMove.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(__int64 *a1)
{
  __int64 v2; // rax
  ULONG_PTR v3; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)*a1 + 24LL) )
    return 0LL;
  v2 = *a1;
  v9[2] = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)v2 + 24LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v9;
  v9[1] = v3;
  HMLockObject(v3);
  if ( v3 != *(_QWORD *)(*(_QWORD *)*a1 + 56LL) )
    xxxSendMessage(v3);
  xxxSendMessage(v3);
  ThreadUnlock1(v6, v5, v7);
  return 1LL;
}
