/*
 * XREFs of xxxTimersProc @ 0x1C003FF80
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 * Callees:
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage @ 0x1C0139694 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C01C04E0 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01C0774 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ThreadLockExchangeWorker @ 0x1C01C0A4C (ThreadLockExchangeWorker.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOLEAN xxxTimersProc()
{
  BOOLEAN result; // al
  _QWORD v1[3]; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v2; // [rsp+68h] [rbp-70h]

  gbTimersProcActive = 1;
  v1[2] = 0LL;
  gbRITAlerted = 0;
  do
  {
    gbRITRescan = 0;
    v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    gcmsLastTimer = v2;
    v1[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v1;
    v1[1] = 0LL;
    ThreadUnlockWorker1(gptiCurrent);
  }
  while ( gbRITRescan );
  gdmsNextTimer = 0x7FFFFFFF;
  guNextCoalescableTimerDue = 0x7FFFFFFF;
  result = KeSetTimer(gptmrMaster, (LARGE_INTEGER)-21474836470000LL, 0LL);
  gbTimersProcActive = 0;
  return result;
}
