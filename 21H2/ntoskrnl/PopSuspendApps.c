/*
 * XREFs of PopSuspendApps @ 0x1407765D0
 * Callers:
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x140672878 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140994484 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopSuspendApps(_DWORD *a1)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS);
  PopCheckpointSystemSleep(2LL);
  a1[4] = 2;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS_END);
  return PopCheckpointSystemSleep(3LL);
}
