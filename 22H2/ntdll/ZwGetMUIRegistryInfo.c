/*
 * XREFs of ZwGetMUIRegistryInfo @ 0x18009F3B0
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070050 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008BF20 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFB00 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1100 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180105FB0 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  NTSTATUS result; // eax

  result = 247;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
