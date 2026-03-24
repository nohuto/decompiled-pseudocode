/*
 * XREFs of ZwUnloadDriver @ 0x1403FDCA0
 * Callers:
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407985F8 (EtwpUpdateFileInfoDriverState.c)
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
