/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140873C98
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140878B14 (PopSleepstudyStartNextSession.c)
 *     PopValidateRTCWake @ 0x140AA1594 (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA6980 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopCurrentPowerState @ 0x1407A7258 (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x140873CCC (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
