/*
 * XREFs of NtUserGetClipboardOwner @ 0x1C014FCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall NtUserGetClipboardOwner(__int64 a1, __int64 a2, __int64 a3)
{
  struct tagWINDOWSTATION *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 *v6; // rax

  EnterSharedCrit(a1, a2, a3);
  v3 = CheckClipboardAccess();
  v5 = 0LL;
  if ( v3 )
  {
    v6 = (__int64 *)*((_QWORD *)v3 + 14);
    if ( v6 )
      v5 = *v6;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
