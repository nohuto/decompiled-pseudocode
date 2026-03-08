/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140870DD8
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 *     PopValidateRTCWake @ 0x140A9E3E4 (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA3750 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14078F3D0 (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x140870E0C (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
