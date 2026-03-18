/*
 * XREFs of PopNetCheckAdaptiveCsState @ 0x1409966E4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C78A0 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140993758 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     PopIsRemoteDesktopEnabled @ 0x140980C14 (PopIsRemoteDesktopEnabled.c)
 */

__int64 PopNetCheckAdaptiveCsState()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !PopNetBIRequestActive && dword_140C3D958 == 2 )
    return PopIsRemoteDesktopEnabled() == 0;
  return v0;
}
