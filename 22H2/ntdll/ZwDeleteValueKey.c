/*
 * XREFs of ZwDeleteValueKey @ 0x18009EFB0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180045B3C (RtlpQueryRegistryValues.c)
 *     RtlInitializeRXact @ 0x18008BB40 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x18008C500 (RtlDeleteRegistryValue.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E24B0 (RtlSetImageMitigationPolicy.c)
 *     RtlApplyRXact @ 0x1800E6270 (RtlApplyRXact.c)
 *     RtlpSetInstallLanguage @ 0x1800F0A50 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  NTSTATUS result; // eax

  result = 215;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
