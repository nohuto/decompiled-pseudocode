/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x1800A0030
 * Callers:
 *     RtlpQueryPackageIdentityAttributes @ 0x18006AC30 (RtlpQueryPackageIdentityAttributes.c)
 *     RtlQueryTokenHostIdAsUlong64 @ 0x180083AB0 (RtlQueryTokenHostIdAsUlong64.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 347;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
