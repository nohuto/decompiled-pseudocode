/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x1408F52EC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x140671D94 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140671E84 (PopAcquireAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl

  PopAcquireAdaptiveLock(0);
  v0 = BYTE6(xmmword_140C205B0);
  PopReleaseAdaptiveLock();
  return v0;
}
