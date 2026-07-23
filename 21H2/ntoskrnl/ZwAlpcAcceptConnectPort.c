/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x1403FB460
 * Callers:
 *     PopUmpoProcessMessage @ 0x14066DC54 (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x1407D07E4 (PopMonitorProcessLoop.c)
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
