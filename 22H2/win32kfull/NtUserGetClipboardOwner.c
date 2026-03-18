/*
 * XREFs of NtUserGetClipboardOwner @ 0x1C0018530
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0018758 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserGetClipboardOwner()
{
  struct tagWINDOWSTATION *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 *v6; // rax

  EnterSharedCrit();
  v0 = CheckClipboardAccess();
  v5 = 0LL;
  if ( v0 )
  {
    v6 = (__int64 *)*((_QWORD *)v0 + 14);
    if ( v6 )
      v5 = *v6;
  }
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v5;
}
