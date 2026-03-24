/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x1408F518C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570558 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x14067DFA4 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x14067E094 (PopAcquireAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl

  PopAcquireAdaptiveLock(0);
  v0 = BYTE6(xmmword_140C20590);
  PopReleaseAdaptiveLock();
  return v0;
}
