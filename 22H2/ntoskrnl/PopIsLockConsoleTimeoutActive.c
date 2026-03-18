/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x140878E50
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C78A0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EC41C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC4C8 (PopReleaseAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl

  v0 = 1;
  PopAcquireAdaptiveLock(1);
  if ( !byte_140C39CC1 || byte_140C39CC2 || dword_140C39CD8 == -1 )
    v0 = 0;
  PopReleaseAdaptiveLock();
  return v0;
}
