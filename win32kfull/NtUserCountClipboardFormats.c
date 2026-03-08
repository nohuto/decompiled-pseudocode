/*
 * XREFs of NtUserCountClipboardFormats @ 0x1C00155C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C0015634 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00BD7B8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserCountClipboardFormats()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  struct tagWINDOWSTATION *v2; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit();
  v0 = 0;
  v2 = CheckClipboardAccess();
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v0 = CountNumClipFormatForIL(*(_QWORD *)(CurrentProcessWin32Process + 864), v2);
  }
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
