/*
 * XREFs of ZwLoadDriver @ 0x1403FC460
 * Callers:
 *     KsepLoadShimProvider @ 0x140526D00 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407985F8 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x1408F57F8 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x140948298 (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1);
}
