/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C00202C0
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C0013088 (XilCoreCommonBuffer_AcquireBuffer.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00533E4 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredArgsMsgKM(int a1, int a2, int a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 1, a1, a2, a3, a4);
}
