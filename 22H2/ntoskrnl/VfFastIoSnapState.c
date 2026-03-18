/*
 * XREFs of VfFastIoSnapState @ 0x140ACC2DC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopWriteFile @ 0x1406B6DD0 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072FFC0 (IopCloseFile.c)
 *     IopReadFile @ 0x14074C6D0 (IopReadFile.c)
 *     NtLockFile @ 0x1407659A0 (NtLockFile.c)
 *     IopQueryInformation @ 0x1407ABEB0 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1407B5080 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x1407D37EC (IopGetBasicInformationFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022EBF0 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x140ACC3D4 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACE284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}
