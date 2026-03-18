/*
 * XREFs of PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140398C28
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     PopUmpoSendPowerMessage @ 0x14036AF00 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140A52F10 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140A52F2C (PopDiagTraceFlushSleepStudyLogger.c)
 */

__int64 PopUmpoSendFlushSleepStudyLoggerNotification()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  qword_140C22CB8 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceFlushSleepStudyLogger();
  memset(Src, 0, 0x48uLL);
  Src[0] = 13;
  PopUmpoSendPowerMessage(Src, 0x48uLL, 1);
  qword_140C22CC0 = KeQueryPerformanceCounter(0LL).QuadPart;
  return PopDiagTraceFlushSleepStudyLoggerEnd();
}
