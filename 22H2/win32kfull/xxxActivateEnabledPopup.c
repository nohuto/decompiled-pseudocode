/*
 * XREFs of xxxActivateEnabledPopup @ 0x1C000710C
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C004B32C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C00071D0 (DWP_GetEnabledPopup.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0124C64 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxActivateEnabledPopup(struct tagWND *a1)
{
  struct tagWND *EnabledPopup; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF

  v5[2] = 0LL;
  EnabledPopup = (struct tagWND *)DWP_GetEnabledPopup();
  if ( !EnabledPopup || EnabledPopup == *(struct tagWND **)(GetDesktopWindow(a1) + 112) )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v5[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v5;
  v5[1] = EnabledPopup;
  HMLockObject(EnabledPopup);
  xxxSetWindowPos(a1, 0, 0, 19);
  xxxSetActiveWindow(EnabledPopup);
  ThreadUnlock1();
  return 1LL;
}
