/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x14078E344
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570498 (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140775738 (PopSleepstudyStartNextSession.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     PopValidateRTCWake @ 0x1409985EC (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B2650 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x1406F1B8C (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x14078E378 (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
