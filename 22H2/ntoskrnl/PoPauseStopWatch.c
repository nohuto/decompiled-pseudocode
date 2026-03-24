/*
 * XREFs of PoPauseStopWatch @ 0x14034C2C0
 * Callers:
 *     PopPausePowerRequestStats @ 0x1406F6108 (PopPausePowerRequestStats.c)
 *     PopStatsMarkPowerRequestInactive @ 0x1406F7330 (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsScenarioStateChange @ 0x140772170 (PopStatsScenarioStateChange.c)
 * Callees:
 *     PopInternalUpdateStopWatchState @ 0x14034CDA8 (PopInternalUpdateStopWatchState.c)
 *     PopInternalUpdateActiveStopWatchesCollectionState @ 0x14034CE9C (PopInternalUpdateActiveStopWatchesCollectionState.c)
 */

__int64 __fastcall PoPauseStopWatch(__int64 a1)
{
  signed __int32 v1; // eax
  bool v2; // zf
  __int64 result; // rax
  __int64 v4; // r10
  unsigned int v5; // r11d

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF);
  v2 = v1 == 1;
  result = (unsigned int)(v1 - 1);
  if ( v2 )
  {
    PopInternalUpdateStopWatchState();
    result = v5 + _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v4 + 48LL), v5);
    if ( !(_DWORD)result )
      return PopInternalUpdateActiveStopWatchesCollectionState();
  }
  return result;
}
