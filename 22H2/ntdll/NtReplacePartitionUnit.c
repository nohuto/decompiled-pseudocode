/*
 * XREFs of NtReplacePartitionUnit @ 0x1800A03B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReplacePartitionUnit(
        PUNICODE_STRING TargetInstancePath,
        PUNICODE_STRING SpareInstancePath,
        ULONG Flags)
{
  NTSTATUS result; // eax

  result = 375;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
