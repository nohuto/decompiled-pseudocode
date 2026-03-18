/*
 * XREFs of ZwUnloadDriver @ 0x14041F1A0
 * Callers:
 *     DifZwUnloadDriverWrapper @ 0x140628370 (DifZwUnloadDriverWrapper.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406D5860 (EtwpUpdateFileInfoDriverState.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x140856DC0 (IopUnloadDriver.c)
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
