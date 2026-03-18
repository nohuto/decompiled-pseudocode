/*
 * XREFs of NtUserHideCursorNoCapture @ 0x1C01F7A00
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023BF4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 NtUserHideCursorNoCapture()
{
  __int64 v0; // rcx
  __int64 ThreadWin32Thread; // rax

  EnterCrit(0LL, 0LL);
  v0 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
  if ( !*(_QWORD *)(v0 + 104) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x400u || (*(_DWORD *)(ThreadWin32Thread + 648) & 0x100) == 0 )
    {
      v0 = (unsigned int)gpdwCPUserPreferencesMask & 0x80010000;
      if ( (_DWORD)v0 == -2147418112 )
        zzzSetCursor(0LL);
    }
  }
  UserSessionSwitchLeaveCrit(v0);
  return 0LL;
}
