/*
 * XREFs of NtCreatePagingFile @ 0x18009EB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreatePagingFile(
        PUNICODE_STRING PageFileName,
        PLARGE_INTEGER MinimumSize,
        PLARGE_INTEGER MaximumSize,
        ULONG Priority)
{
  NTSTATUS result; // eax

  result = 182;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
