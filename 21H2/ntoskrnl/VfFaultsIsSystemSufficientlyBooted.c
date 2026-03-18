/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x140A96C48
 * Callers:
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 *     VfFaultsInjectResourceFailure @ 0x140A96B0C (VfFaultsInjectResourceFailure.c)
 *     VerifierMmMapLockedPages @ 0x140AA0000 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AA00D0 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  if ( ViSystemSufficientlyBooted )
    return 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
    ++dword_140D57824;
  else
    ViSystemSufficientlyBooted = 1;
  return (unsigned int)ViSystemSufficientlyBooted;
}
