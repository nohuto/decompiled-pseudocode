/*
 * XREFs of PopSuspendServices @ 0x1407FFD04
 * Callers:
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1407FE82C (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopSuspendServices(_DWORD *a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES);
  PopCheckpointSystemSleep(4LL);
  a1[4] = 3;
  PopDispatchStateCallout(a1, (__int64)&v3);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDSERVICES_END);
  return PopCheckpointSystemSleep(5LL);
}
