/*
 * XREFs of ZwResumeProcess @ 0x1800A0470
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D5FD0 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeProcess(HANDLE ProcessHandle)
{
  NTSTATUS result; // eax

  result = 381;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
