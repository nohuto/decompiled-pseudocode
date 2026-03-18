/*
 * XREFs of PopSuspendApps @ 0x1407FFCB0
 * Callers:
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1407FE82C (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
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
