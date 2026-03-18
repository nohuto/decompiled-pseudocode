/*
 * XREFs of xxxRedrawFrameAndHook @ 0x1C0227A1C
 * Callers:
 *     NtUserRedrawFrameAndHook @ 0x1C01D8F50 (NtUserRedrawFrameAndHook.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EB4B8 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 */

__int64 __fastcall xxxRedrawFrameAndHook(struct tagWND *a1)
{
  unsigned __int64 v2; // rbx

  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  if ( IsTrayWindow(a1, 1) )
  {
    v2 = *(_QWORD *)a1;
    xxxCallHook(6LL, v2, 0LL, 10LL);
    PostShellHookMessagesEx(6u, v2, 0LL);
  }
  return 1LL;
}
