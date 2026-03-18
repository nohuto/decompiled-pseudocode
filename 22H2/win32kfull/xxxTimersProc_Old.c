/*
 * XREFs of xxxTimersProc_Old @ 0x1C013AF08
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 * Callees:
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage @ 0x1C0139694 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C01C04E0 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C01C0584 (-SetDelayableTimer@@YAXKK@Z.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01C0774 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ThreadLockExchangeWorker @ 0x1C01C0A4C (ThreadLockExchangeWorker.c)
 */

// write access to const memory has been detected, the output may be wrong!
void xxxTimersProc_Old()
{
  _QWORD v0[13]; // [rsp+20h] [rbp-68h] BYREF

  gbTimersProcActive = 1;
  v0[2] = 0LL;
  gbRITAlerted = 0;
  do
  {
    gbRITRescan = 0;
    gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v0[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v0;
    v0[1] = 0LL;
    ThreadUnlockWorker1(gptiCurrent);
  }
  while ( gbRITRescan );
  gdmsNextTimer = 0x7FFFFFFF;
  guNextCoalescableTimerDue = 0x7FFFFFFF;
  SetDelayableTimer(0x7FFFFFFFu, 0x7FFFFFFFu);
  gbTimersProcActive = 0;
}
