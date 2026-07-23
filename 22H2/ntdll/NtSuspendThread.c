/*
 * XREFs of NtSuspendThread @ 0x1800A0C90
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D5FD0 (RtlpProcessReflectionStartup.c)
 *     RtlWow64SuspendThread @ 0x1800DC370 (RtlWow64SuspendThread.c)
 *     RtlRemoteCall @ 0x1800FEF80 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 446;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
