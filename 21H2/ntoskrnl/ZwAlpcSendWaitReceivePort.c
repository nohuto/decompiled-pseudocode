/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1403FB700
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140270CF4 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x14066DB24 (PopUmpoProcessMessages.c)
 *     PopMonitorProcessLoop @ 0x1407D07E4 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
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
