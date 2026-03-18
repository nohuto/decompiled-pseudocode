/*
 * XREFs of xxxActivateEnabledPopup @ 0x1C0222C18
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00F188C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00B2724 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C015736C (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall xxxActivateEnabledPopup(struct tagWND *a1)
{
  struct tagWND *EnabledPopup; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  EnabledPopup = DWP_GetEnabledPopup(a1);
  if ( !EnabledPopup || EnabledPopup == *(struct tagWND **)(GetDesktopWindow((__int64)a1) + 112) )
    return 0LL;
  ThreadLockAlways(EnabledPopup, &v7);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 19);
  xxxSetActiveWindow(EnabledPopup);
  ThreadUnlock1(v4, v3, v5);
  return 1LL;
}
