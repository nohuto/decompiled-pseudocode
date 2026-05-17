/*
 * XREFs of NtEnumerateKey @ 0x18009DB20
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180047690 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180076500 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpNtEnumerateSubKey @ 0x180082740 (RtlpNtEnumerateSubKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E3768 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFB00 (RtlpCleanupRegistryKeys.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180106B58 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180107A28 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtEnumerateKey()
{
  __int64 result; // rax

  result = 50LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
