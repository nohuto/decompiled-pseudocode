/*
 * XREFs of PopGetStopWatchByRequestType @ 0x140670B10
 * Callers:
 *     PopStatsMarkPowerRequestActive @ 0x1406709E8 (PopStatsMarkPowerRequestActive.c)
 *     PopPausePowerRequestStats @ 0x140670A58 (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x140670AA8 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopStatsMarkPowerRequestInactive @ 0x140670DA0 (PopStatsMarkPowerRequestInactive.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x140670FF8 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopStatsScenarioStateChange @ 0x140772670 (PopStatsScenarioStateChange.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F657C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     PoIsInitializedStopWatch @ 0x1402713C8 (PoIsInitializedStopWatch.c)
 *     PoInitializeStopWatch @ 0x1402729B4 (PoInitializeStopWatch.c)
 */

__int64 __fastcall PopGetStopWatchByRequestType(__int64 a1, int a2)
{
  __int128 *v2; // r10
  __int64 v3; // r9
  _OWORD *v5; // rcx
  char v6; // r8
  __int64 *v7; // r10
  __int64 v8; // r11

  v2 = &ExecutionRequiredStopWatchCollection;
  v3 = 0LL;
  if ( a2 != 3 )
    v2 = 0LL;
  if ( v2 && !PoIsInitializedStopWatch((_QWORD *)(48LL * a2 + a1 + 24)) )
  {
    if ( v6 )
      PoInitializeStopWatch(v5, v7);
    else
      return v8;
  }
  return v3;
}
