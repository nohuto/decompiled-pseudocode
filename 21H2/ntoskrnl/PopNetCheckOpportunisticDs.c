/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x14078E5CC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorCachePoPolicy @ 0x14078E53C (PopPowerAggregatorCachePoPolicy.c)
 * Callees:
 *     PopIsRemoteDesktopEnabled @ 0x1408E13F4 (PopIsRemoteDesktopEnabled.c)
 */

bool PopNetCheckOpportunisticDs()
{
  char v0; // bl

  v0 = 0;
  if ( dword_140C23378 == 2 && !PopNetBIRequestActive )
    return (unsigned __int8)PopIsRemoteDesktopEnabled() == 0;
  return v0;
}
