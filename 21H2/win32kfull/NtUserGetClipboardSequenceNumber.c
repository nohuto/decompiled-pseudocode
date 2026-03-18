/*
 * XREFs of NtUserGetClipboardSequenceNumber @ 0x1C00CD120
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall NtUserGetClipboardSequenceNumber(__int64 a1, __int64 a2, __int64 a3)
{
  struct tagWINDOWSTATION *v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  EnterSharedCrit(a1, a2, a3);
  v3 = CheckClipboardAccess();
  v5 = 0;
  if ( v3 )
    v5 = *((_DWORD *)v3 + 36);
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
