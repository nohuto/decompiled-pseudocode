/*
 * XREFs of GsDriverEntry @ 0x1C00A7010
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1C00A7044 (__security_init_cookie.c)
 *     DriverEntry @ 0x1C00A7300 (DriverEntry.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
