/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x14077663C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExNotifyCallback @ 0x1402B0640 (ExNotifyCallback.c)
 *     PopDiagTraceEventNoPayload @ 0x1402CD1D4 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140993484 (PopCheckpointSystemSleep.c)
 */

__int64 PopNotifyCallbacksPreSleep()
{
  PopCheckpointSystemSleep(8LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_START);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_STOP);
  return PopCheckpointSystemSleep(9LL);
}
