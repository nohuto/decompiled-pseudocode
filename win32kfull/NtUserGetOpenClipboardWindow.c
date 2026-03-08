/*
 * XREFs of NtUserGetOpenClipboardWindow @ 0x1C00169F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00BD7B8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserGetOpenClipboardWindow()
{
  struct tagWINDOWSTATION *v0; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 *v3; // rax

  EnterSharedCrit();
  v0 = CheckClipboardAccess();
  v2 = 0LL;
  if ( v0 )
  {
    v3 = (__int64 *)*((_QWORD *)v0 + 12);
    if ( v3 )
      v2 = *v3;
  }
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
