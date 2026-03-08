/*
 * XREFs of xxxTimersProc @ 0x1C007AFD0
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1C01C16A0 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01C18D4 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ThreadLockExchangeWorker @ 0x1C01C1BAC (ThreadLockExchangeWorker.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOLEAN __fastcall xxxTimersProc(__int64 a1, __int64 a2, __int64 a3)
{
  BOOLEAN result; // al
  _QWORD v4[13]; // [rsp+60h] [rbp-68h] BYREF

  v4[2] = 0LL;
  gbTimersProcActive = 1;
  gbRITAlerted = 0;
  do
  {
    gbRITRescan = 0;
    gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v4[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v4;
    v4[1] = 0LL;
    ThreadUnlockWorker1(gptiCurrent, a2, a3);
  }
  while ( gbRITRescan );
  gdmsNextTimer = 0x7FFFFFFF;
  guNextCoalescableTimerDue = 0x7FFFFFFF;
  result = KeSetTimer(gptmrMaster, (LARGE_INTEGER)-21474836470000LL, 0LL);
  gbTimersProcActive = 0;
  return result;
}
