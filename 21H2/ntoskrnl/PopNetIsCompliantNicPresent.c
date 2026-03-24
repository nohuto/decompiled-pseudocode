/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x1408F1E68
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570558 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetIsCompliantNicPresent()
{
  return PopNetCompliantNicCount != 0;
}
