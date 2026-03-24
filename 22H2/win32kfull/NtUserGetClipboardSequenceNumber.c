/*
 * XREFs of NtUserGetClipboardSequenceNumber @ 0x1C0030000
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0030448 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserGetClipboardSequenceNumber()
{
  struct tagWINDOWSTATION *v0; // rax
  __int64 v1; // rcx
  unsigned int v2; // ebx

  EnterSharedCrit(0LL, 1LL);
  v0 = CheckClipboardAccess();
  v2 = 0;
  if ( v0 )
    v2 = *((_DWORD *)v0 + 36);
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
