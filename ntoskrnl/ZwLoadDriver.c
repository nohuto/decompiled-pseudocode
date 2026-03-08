/*
 * XREFs of ZwLoadDriver @ 0x140414490
 * Callers:
 *     KsepLoadShimProvider @ 0x14057E7A8 (KsepLoadShimProvider.c)
 *     DifZwLoadDriverWrapper @ 0x1405EE940 (DifZwLoadDriverWrapper.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140786730 (EtwpUpdateFileInfoDriverState.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     PopCadTriggerDriverLoad @ 0x140999BF0 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1409ED864 (EtwpConstructIptData.c)
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
