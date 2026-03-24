/*
 * XREFs of PopStatsScenarioStateChange @ 0x1407724B0
 * Callers:
 *     PopWnfAudioCallback @ 0x140772380 (PopWnfAudioCallback.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408E1B6C (PopPowerRequestNotifyMobileHotspotChanged.c)
 * Callees:
 *     PoStartStopWatch @ 0x140263F5C (PoStartStopWatch.c)
 *     PoPauseStopWatch @ 0x140264050 (PoPauseStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x14062BEE8 (PopGetStopWatchByRequestType.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x140772520 (PopAvlFindOrMakeStatsForScenarioType.c)
 */

__int64 __fastcall PopStatsScenarioStateChange(__int64 a1, char a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx
  signed __int32 v5; // ecx

  result = PopAvlFindOrMakeStatsForScenarioType();
  v4 = (volatile signed __int32 *)result;
  if ( result )
  {
    result = PopGetStopWatchByRequestType(result, 3);
    if ( result )
    {
      v5 = _InterlockedExchangeAdd(v4, 0);
      if ( a2 )
      {
        if ( !v5 )
        {
          _InterlockedIncrement(v4);
          return PoStartStopWatch(result);
        }
      }
      else if ( v5 == 1 )
      {
        _InterlockedDecrement(v4);
        return PoPauseStopWatch(result);
      }
    }
  }
  return result;
}
