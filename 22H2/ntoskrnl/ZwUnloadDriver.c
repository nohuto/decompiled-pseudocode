/*
 * XREFs of ZwUnloadDriver @ 0x1403FD320
 * Callers:
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x140768DB8 (IopUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140793488 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
