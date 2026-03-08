/*
 * XREFs of PopReleaseAwaymodeLock @ 0x140AA5EA8
 * Callers:
 *     PopPowerRequestCallbackAwayModeRequired @ 0x14097E530 (PopPowerRequestCallbackAwayModeRequired.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char PopReleaseAwaymodeLock()
{
  if ( (struct _KTHREAD *)PopAwaymodeLockExclusiveThread == KeGetCurrentThread() )
    PopAwaymodeLockExclusiveThread = 0LL;
  ExReleasePushLockEx((__int64 *)&PopAwaymodeLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
