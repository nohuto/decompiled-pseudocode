/*
 * XREFs of PopReleaseAwaymodeLock @ 0x140990570
 * Callers:
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x1408E17D0 (PopAwayModePowerRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 */

_QWORD *PopReleaseAwaymodeLock()
{
  if ( (struct _KTHREAD *)PopAwaymodeLockExclusiveThread == KeGetCurrentThread() )
    PopAwaymodeLockExclusiveThread = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&PopAwaymodeLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
