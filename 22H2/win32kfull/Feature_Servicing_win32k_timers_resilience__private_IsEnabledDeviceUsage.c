/*
 * XREFs of Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage @ 0x1C0139694
 * Callers:
 *     DestroyWindowsTimers @ 0x1C003BD44 (DestroyWindowsTimers.c)
 *     DestroyThreadsTimers @ 0x1C003BDE0 (DestroyThreadsTimers.c)
 *     FreeTimer @ 0x1C003C040 (FreeTimer.c)
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 *     xxxTimersProc @ 0x1C003FF80 (xxxTimersProc.c)
 *     InternalSetTimer @ 0x1C00E6510 (InternalSetTimer.c)
 *     NtUserKillTimer @ 0x1C011B3E0 (NtUserKillTimer.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     xxxTimersProc_Old @ 0x1C013AF08 (xxxTimersProc_Old.c)
 * Callees:
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback @ 0x1C01396CC (Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_win32k_timers_resilience__private_featureState & 0x10) != 0 )
    return Feature_Servicing_win32k_timers_resilience__private_featureState & 1;
  else
    return Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_win32k_timers_resilience__private_featureState,
             3LL);
}
