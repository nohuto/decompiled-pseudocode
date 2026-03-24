/*
 * XREFs of PopResumeServices @ 0x14077653C
 * Callers:
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceEventNoPayload @ 0x1402CD1D4 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x14067E9C8 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140993484 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopResumeServices(_DWORD *a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  a1[4] = 6;
  qword_140C23980 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  PopCheckpointSystemSleep(39LL);
  PopDispatchStateCallout(a1, (__int64)&v3);
  qword_140C23988 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
  return PopCheckpointSystemSleep(40LL);
}
