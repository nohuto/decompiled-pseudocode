/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x14078E30C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570498 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorCachePoPolicy @ 0x14078E27C (PopPowerAggregatorCachePoPolicy.c)
 * Callees:
 *     PopIsRemoteDesktopEnabled @ 0x1408E12E4 (PopIsRemoteDesktopEnabled.c)
 */

bool PopNetCheckOpportunisticDs()
{
  char v0; // bl

  v0 = 0;
  if ( dword_140C23398 == 2 && !PopNetBIRequestActive )
    return (unsigned __int8)PopIsRemoteDesktopEnabled() == 0;
  return v0;
}
