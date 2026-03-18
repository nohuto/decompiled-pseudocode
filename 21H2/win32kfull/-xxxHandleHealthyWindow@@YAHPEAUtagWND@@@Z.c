/*
 * XREFs of ?xxxHandleHealthyWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144620
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0048AFC (xxxSetWindowPosAndBand.c)
 *     xxxUpdateInputHangInfo @ 0x1C00574C0 (xxxUpdateInputHangInfo.c)
 *     xxxHandleHealthyThread @ 0x1C0144560 (xxxHandleHealthyThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01446B8 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxHandleHealthyWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u) )
  {
    v8[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v8;
    v8[1] = a1;
    HMLockObject(a1);
    v1 = xxxDestroyCorrespondingGhostWindow(a1);
    ThreadUnlock1(v5, v4, v6);
  }
  return v1;
}
