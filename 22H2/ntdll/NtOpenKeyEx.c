/*
 * XREFs of NtOpenKeyEx @ 0x18009F8F0
 * Callers:
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CBA04 (LdrpAppxGetRemediationRegistryKey.c)
 *     LdrpIsCODServiceEnabled @ 0x1800CEDCC (LdrpIsCODServiceEnabled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 289;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
