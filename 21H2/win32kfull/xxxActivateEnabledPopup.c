/*
 * XREFs of xxxActivateEnabledPopup @ 0x1C023F4F4
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00692F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C010F65C (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     DWP_GetEnabledPopup @ 0x1C023F45C (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall xxxActivateEnabledPopup(struct tagWND *a1)
{
  struct tagWND *EnabledPopup; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  v8[2] = 0LL;
  EnabledPopup = (struct tagWND *)DWP_GetEnabledPopup(a1);
  if ( !EnabledPopup || EnabledPopup == *(struct tagWND **)(GetDesktopWindow((__int64)a1) + 112) )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v8;
  v8[1] = EnabledPopup;
  HMLockObject(EnabledPopup);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 19);
  xxxSetActiveWindow(EnabledPopup);
  ThreadUnlock1(v5, v4, v6);
  return 1LL;
}
