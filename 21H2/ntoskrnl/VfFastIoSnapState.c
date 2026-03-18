/*
 * XREFs of VfFastIoSnapState @ 0x140A8A9AC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402D5CA8 (IopCompleteUnloadOrDelete.c)
 *     IopWriteFile @ 0x140658DCC (IopWriteFile.c)
 *     IopGetBasicInformationFile @ 0x1406C7B5C (IopGetBasicInformationFile.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopQueryInformation @ 0x14072A9B0 (IopQueryInformation.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x140A8AAA4 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}
