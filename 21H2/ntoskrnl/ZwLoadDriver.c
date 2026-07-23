/*
 * XREFs of ZwLoadDriver @ 0x1403FC640
 * Callers:
 *     KsepLoadShimProvider @ 0x140526F40 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407987F8 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x1408F5958 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x140948468 (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
