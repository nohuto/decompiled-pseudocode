/*
 * XREFs of PopGetStopWatchByRequestType @ 0x1406F61C0
 * Callers:
 *     PopStatsMarkPowerRequestActive @ 0x1406F6098 (PopStatsMarkPowerRequestActive.c)
 *     PopPausePowerRequestStats @ 0x1406F6108 (PopPausePowerRequestStats.c)
 *     PopIsDataAccruedByPowerRequestStats @ 0x1406F6158 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopStatsMarkPowerRequestInactive @ 0x1406F7330 (PopStatsMarkPowerRequestInactive.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1406F7610 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopStatsScenarioStateChange @ 0x140772170 (PopStatsScenarioStateChange.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F646C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     PoIsInitializedStopWatch @ 0x14034C198 (PoIsInitializedStopWatch.c)
 *     PoInitializeStopWatch @ 0x14034D2CC (PoInitializeStopWatch.c)
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
