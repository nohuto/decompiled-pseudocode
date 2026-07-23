/*
 * XREFs of NtSetSecurityObject @ 0x1800A09F0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800886B0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x1800889FC (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS result; // eax

  result = 425;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
