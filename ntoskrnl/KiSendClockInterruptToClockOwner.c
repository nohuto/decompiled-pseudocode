/*
 * XREFs of KiSendClockInterruptToClockOwner @ 0x1402F984C
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x14022E860 (KeResumeClockTimerFromIdle.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x140250C10 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x14039680C (KiAdjustTimer2DueTimes.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1403BCB70 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14045A080 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     HalRequestClockInterrupt @ 0x1402F98D0 (HalRequestClockInterrupt.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 KiSendClockInterruptToClockOwner()
{
  _DWORD v1[68]; // [rsp+20h] [rbp-128h] BYREF

  v1[0] = 2097153;
  memset(&v1[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v1, KiClockTimerOwner);
  return HalRequestClockInterrupt(0LL, v1);
}
