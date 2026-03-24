/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x14077A4FC
 * Callers:
 *     PoBroadcastSystemState @ 0x140992AC4 (PoBroadcastSystemState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
