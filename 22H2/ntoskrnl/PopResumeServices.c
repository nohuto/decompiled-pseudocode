/*
 * XREFs of PopResumeServices @ 0x14098A55C
 * Callers:
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140AAA5A8 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopResumeServices(_DWORD *a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  a1[4] = 6;
  qword_140C3D380 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  PopCheckpointSystemSleep(39LL);
  PopDispatchStateCallout(a1, (__int64)&v3);
  qword_140C3D388 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
  return PopCheckpointSystemSleep(40LL);
}
