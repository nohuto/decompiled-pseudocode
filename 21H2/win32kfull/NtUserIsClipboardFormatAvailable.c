/*
 * XREFs of NtUserIsClipboardFormatAvailable @ 0x1C00CD160
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00CD1F0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall NtUserIsClipboardFormatAvailable(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  PVOID v5; // rcx
  struct tagWINDOWSTATION *v6; // rdi
  __int64 ThreadWin32Thread; // rax

  v3 = a1;
  EnterSharedCrit(a1, a2, a3);
  v4 = 0LL;
  v6 = CheckClipboardAccess();
  if ( v6 )
  {
    if ( !gbLockScreenActive )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v5 = grpdeskLogon;
      if ( *(PVOID *)(ThreadWin32Thread + 456) != grpdeskLogon )
        LOBYTE(v4) = FindClipFormat(v6, v3, 1u) != 0LL;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
