/*
 * XREFs of PopNetCheckAdaptiveCsState @ 0x140993634
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1409906A8 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     PopIsRemoteDesktopEnabled @ 0x14097DB64 (PopIsRemoteDesktopEnabled.c)
 */

__int64 PopNetCheckAdaptiveCsState()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !PopNetBIRequestActive && dword_140C3D4D8 == 2 )
    return PopIsRemoteDesktopEnabled() == 0;
  return v0;
}
