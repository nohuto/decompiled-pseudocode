/*
 * XREFs of VfFastIoSnapState @ 0x1409CAA8C
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402A6030 (IopCompleteUnloadOrDelete.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 *     IopQueryInformation @ 0x1405E7B50 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1405EF3E0 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x140698398 (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     NtLockFile @ 0x14071FB70 (NtLockFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14035B420 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x1409CAB84 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}
