/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x1402F03A4
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140224BA0 (KeResumeClockTimerFromIdle.c)
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x140248150 (KiTimer2Expiration.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1402F02B0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiAdjustTimer2DueTimes @ 0x14039DCF0 (KiAdjustTimer2DueTimes.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405208D4 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140229340 (KeAddProcessorAffinityEx.c)
 *     HalRequestClockInterrupt @ 0x1402F0430 (HalRequestClockInterrupt.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1[0] = 1310721;
  memset(&v1[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
