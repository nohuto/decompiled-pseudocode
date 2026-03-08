/*
 * XREFs of PopResumeServices @ 0x1409874AC
 * Callers:
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x14067F6E8 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140AA7378 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopResumeServices(_DWORD *a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  a1[4] = 6;
  qword_140C3CFC0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES);
  PopCheckpointSystemSleep(39LL);
  PopDispatchStateCallout(a1, (__int64)&v3);
  qword_140C3CFC8 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMESERVICES_END);
  return PopCheckpointSystemSleep(40LL);
}
