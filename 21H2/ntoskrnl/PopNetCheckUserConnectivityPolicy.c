/*
 * XREFs of PopNetCheckUserConnectivityPolicy @ 0x14078E430
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570558 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetCheckUserConnectivityPolicy()
{
  return dword_140C23ED8 != 0;
}
