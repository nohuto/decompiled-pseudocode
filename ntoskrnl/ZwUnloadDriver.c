/*
 * XREFs of ZwUnloadDriver @ 0x140415DD0
 * Callers:
 *     DifZwUnloadDriverWrapper @ 0x1405F5BA0 (DifZwUnloadDriverWrapper.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140786730 (EtwpUpdateFileInfoDriverState.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1);
}
