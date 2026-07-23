/*
 * XREFs of DbgUiRemoteBreakin @ 0x1800CCA30
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18004EC30 (RtlExitUserThread.c)
 *     DbgBreakPoint @ 0x1800A1020 (DbgBreakPoint.c)
 */

void __cdecl __noreturn DbgUiRemoteBreakin(PVOID Context)
{
  if ( (NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 2) != 0) && (NtCurrentTeb()->SameTebFlags & 0x20) == 0 )
  {
    if ( UseWOW64 )
    {
      if ( g_LdrpWow64PrepareForDebuggerAttach )
        g_LdrpWow64PrepareForDebuggerAttach(Context);
    }
    DbgBreakPoint();
  }
  RtlExitUserThread(0);
}
