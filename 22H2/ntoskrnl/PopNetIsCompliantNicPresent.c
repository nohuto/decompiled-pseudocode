/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x140878E3C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C78A0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetIsCompliantNicPresent()
{
  return PopNetCompliantNicCount != 0;
}
