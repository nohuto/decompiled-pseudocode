/*
 * XREFs of NtUnloadKey @ 0x1800A0DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  NTSTATUS result; // eax

  result = 457;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
