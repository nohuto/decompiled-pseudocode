/*
 * XREFs of PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1405997DC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     PopUmpoSendPowerMessage @ 0x14032D004 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140435400 (memset.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140AA7EEC (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140AA7F08 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 */

__int64 PopUmpoSendFlushSleepStudyLoggerNotification()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  qword_140C3D338 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceFlushSleepStudyLogger();
  memset(Src, 0, 0x48uLL);
  Src[0] = 13;
  PopUmpoSendPowerMessage(Src, 0x48uLL, 1);
  qword_140C3D340 = KeQueryPerformanceCounter(0LL).QuadPart;
  return PopDiagTraceFlushSleepStudyLoggerEnd();
}
