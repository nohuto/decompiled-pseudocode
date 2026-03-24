/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x1408F1EB8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570498 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetIsCompliantNicPresent()
{
  return PopNetCompliantNicCount != 0;
}
