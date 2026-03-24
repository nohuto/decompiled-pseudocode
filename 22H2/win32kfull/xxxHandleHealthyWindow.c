/*
 * XREFs of xxxHandleHealthyWindow @ 0x1C00035B0
 * Callers:
 *     xxxHandleHealthyThread @ 0x1C00034F0 (xxxHandleHealthyThread.c)
 *     xxxUpdateInputHangInfo @ 0x1C0057A70 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C006BD30 (xxxSetWindowPosAndBand.c)
 * Callees:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0003648 (xxxDestroyCorrespondingGhostWindow.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxHandleHealthyWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 ThreadWin32Thread; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL) )
  {
    v5[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v5[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v5;
    v5[1] = a1;
    HMLockObject(a1);
    v1 = xxxDestroyCorrespondingGhostWindow(a1);
    ThreadUnlock1();
  }
  return v1;
}
