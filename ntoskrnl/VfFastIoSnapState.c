/*
 * XREFs of VfFastIoSnapState @ 0x140AC82DC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     NtLockFile @ 0x1406B1EB0 (NtLockFile.c)
 *     IopWriteFile @ 0x1406B3E10 (IopWriteFile.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     IopQueryInformation @ 0x140757E40 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x14075F620 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x140784190 (IopGetBasicInformationFile.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x140AC83D4 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}
