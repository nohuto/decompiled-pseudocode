/*
 * XREFs of ZwAlpcSetInformation @ 0x1403FABC0
 * Callers:
 *     PopUmpoInitializeChannel @ 0x140A6FE7C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A70AB0 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
