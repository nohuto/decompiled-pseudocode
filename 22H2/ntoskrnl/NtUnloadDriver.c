/*
 * XREFs of NtUnloadDriver @ 0x14089B2D0
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140768DB8 (IopUnloadDriver.c)
 */

NTSTATUS __cdecl NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(&DriverServiceName->Length, 0);
}
