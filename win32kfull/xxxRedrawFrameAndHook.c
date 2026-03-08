/*
 * XREFs of xxxRedrawFrameAndHook @ 0x1C022A73C
 * Callers:
 *     NtUserRedrawFrameAndHook @ 0x1C01D9F80 (NtUserRedrawFrameAndHook.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 */

__int64 __fastcall xxxRedrawFrameAndHook(struct tagWND *a1)
{
  unsigned __int64 v2; // rbx

  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  if ( IsTrayWindow(a1, 1) )
  {
    v2 = *(_QWORD *)a1;
    xxxCallHook(6LL, v2, 0LL, 10);
    PostShellHookMessagesEx(6u, v2, 0LL);
  }
  return 1LL;
}
