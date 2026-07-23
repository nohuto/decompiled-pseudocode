/*
 * XREFs of NtQueueApcThreadEx2 @ 0x1800A01B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueueApcThreadEx2(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        ULONG ApcFlags,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  NTSTATUS result; // eax

  result = 359;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
