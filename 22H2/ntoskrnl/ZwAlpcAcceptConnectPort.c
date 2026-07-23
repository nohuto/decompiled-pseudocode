/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x1403FA900
 * Callers:
 *     PopUmpoProcessMessage @ 0x1406F3304 (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x1407D0594 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcAcceptConnectPort(
        PHANDLE PortHandle,
        HANDLE ConnectionPortHandle,
        ULONG Flags,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        PALPC_MESSAGE_ATTRIBUTES ConnectionMessageAttributes,
        BOOLEAN AcceptConnection)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
