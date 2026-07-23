/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1403FABA0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14034BAC4 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1406F31D4 (PopUmpoProcessMessages.c)
 *     PopMonitorProcessLoop @ 0x1407D0594 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x1408873C0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
