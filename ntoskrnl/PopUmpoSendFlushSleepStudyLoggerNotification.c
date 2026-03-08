/*
 * XREFs of PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1405972BC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     PopUmpoSendPowerMessage @ 0x1402BD1D0 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x140AA4CBC (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x140AA4CD8 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 */

__int64 PopUmpoSendFlushSleepStudyLoggerNotification()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  qword_140C3CF78 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceFlushSleepStudyLogger();
  memset(Src, 0, 0x48uLL);
  Src[0] = 13;
  PopUmpoSendPowerMessage(Src, 0x48uLL, 1);
  qword_140C3CF80 = KeQueryPerformanceCounter(0LL).QuadPart;
  return PopDiagTraceFlushSleepStudyLoggerEnd();
}
