/*
 * XREFs of VfFastIoSnapState @ 0x1409C9A8C
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140360FD0 (IopCompleteUnloadOrDelete.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopGetBasicInformationFile @ 0x1406088E8 (IopGetBasicInformationFile.c)
 *     IopQueryInformation @ 0x1406886C0 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x14068F570 (NtUnlockFile.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     NtLockFile @ 0x140708790 (NtLockFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1403506D0 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x1409C9B84 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D54 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}
