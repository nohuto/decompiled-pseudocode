/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C00533B4
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0004FE0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C00104E4 (RootHub_WaitForResumeCompletion.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0013210 (UsbDevice_UcxEvtEnable.c)
 *     Command_Initialize @ 0x1C001438C (Command_Initialize.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00533E4 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredMsgKM(const char *a1, ...)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1, (__int64)a1);
}
