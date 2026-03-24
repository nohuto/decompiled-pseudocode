/*
 * XREFs of xxxRequestOutOfFullScreenMode @ 0x1C021E1F4
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C01280E0 (xxxRemoteDisconnect.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C00586B0 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 xxxRequestOutOfFullScreenMode()
{
  struct tagWND *v0; // rdi
  unsigned int v1; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rcx
  _QWORD v5[5]; // [rsp+50h] [rbp-28h] BYREF

  v0 = gspwndFullScreen;
  v1 = 0;
  v5[2] = 0LL;
  if ( gspwndFullScreen )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v5[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v5;
    v5[1] = v0;
    HMLockObject(v0);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((unsigned __int64)gspwndFullScreen, 0x406u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v3);
    while ( WPP_MAIN_CB.Queue.ListEntry.Blink )
      xxxSleepThread2(0, 1u, 0, 0, 0LL);
    if ( gspwndFullScreen && gbFullScreen == 1 )
      return (unsigned int)-1073741823;
  }
  return v1;
}
