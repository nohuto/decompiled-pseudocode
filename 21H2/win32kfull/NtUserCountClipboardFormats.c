/*
 * XREFs of NtUserCountClipboardFormats @ 0x1C00300F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C003015C (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00304E8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserCountClipboardFormats()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  struct tagWINDOWSTATION *v2; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit(0LL, 1LL);
  v0 = 0;
  v2 = CheckClipboardAccess();
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    v0 = CountNumClipFormatForIL(*(_QWORD *)(CurrentProcessWin32Process + 880), v2);
  }
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
