/*
 * XREFs of NtUserIsClipboardFormatAvailable @ 0x1C00123E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C0012468 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00BD7B8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall NtUserIsClipboardFormatAvailable(unsigned int a1)
{
  __int64 v2; // rbx
  PVOID v3; // rcx
  struct tagWINDOWSTATION *v4; // rdi
  struct tagTHREADINFO *v5; // rax

  EnterSharedCrit();
  v2 = 0LL;
  v4 = CheckClipboardAccess();
  if ( v4 )
  {
    if ( !gbLockScreenActive )
    {
      v5 = PtiCurrentShared();
      v3 = grpdeskLogon;
      if ( *((PVOID *)v5 + 57) != grpdeskLogon )
        LOBYTE(v2) = FindClipFormat(v4, a1, 1u) != 0LL;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
