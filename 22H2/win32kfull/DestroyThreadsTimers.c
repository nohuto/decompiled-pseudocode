/*
 * XREFs of DestroyThreadsTimers @ 0x1C003BDE0
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x1C003C040 (FreeTimer.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage @ 0x1C0139694 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 DestroyThreadsTimers()
{
  bool v0; // zf
  __int64 v1; // rcx
  __int64 result; // rax
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage() == 0;
  result = gtmrListHead;
  if ( v0 )
  {
    v3[2] = 0LL;
    v3[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v3;
    v3[1] = 0LL;
    return ThreadUnlockWorker1(v1);
  }
  return result;
}
