/*
 * XREFs of ZwConnectPort @ 0x1403FAE20
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407AD7F0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
