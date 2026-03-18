/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x1407FFEBC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 */

__int64 PopNotifyCallbacksPreSleep()
{
  PopCheckpointSystemSleep(8LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_START);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_STOP);
  return PopCheckpointSystemSleep(9LL);
}
