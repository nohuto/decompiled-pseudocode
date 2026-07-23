/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x1408F1FC8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetIsCompliantNicPresent()
{
  return PopNetCompliantNicCount != 0;
}
