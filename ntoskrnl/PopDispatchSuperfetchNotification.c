/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x140986790
 * Callers:
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140AA7378 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopDispatchSuperfetchNotification(int a1, int a2)
{
  __int64 v3; // rbx

  v3 = a2;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_START);
  PopCheckpointSystemSleep(6LL);
  PfPowerActionNotify(1LL, (a1 >> 31) & 2, v3);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_STOP);
  return PopCheckpointSystemSleep(7LL);
}
