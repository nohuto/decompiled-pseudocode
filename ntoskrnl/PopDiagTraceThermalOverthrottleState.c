/*
 * XREFs of PopDiagTraceThermalOverthrottleState @ 0x140592760
 * Callers:
 *     PopUpdateOverThrottledCount @ 0x1409881F8 (PopUpdateOverThrottledCount.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x140592798 (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalOverthrottleState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, POP_ETW_EVENT_THERMAL_ZONE_OVERTHROTTLED_UPDATE);
}
