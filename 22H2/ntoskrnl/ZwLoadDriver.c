/*
 * XREFs of ZwLoadDriver @ 0x1403FBAE0
 * Callers:
 *     KsepLoadShimProvider @ 0x140526C40 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140793488 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x1408F5848 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1409482E8 (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
