/*
 * XREFs of ZwUnloadDriver @ 0x1403FDE80
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407987F8 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
