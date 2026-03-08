/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x140988A7C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140AA7378 (PopCheckpointSystemSleep.c)
 */

__int64 PopNotifyCallbacksPreSleep()
{
  PopCheckpointSystemSleep(8LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_START);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_STOP);
  return PopCheckpointSystemSleep(9LL);
}
