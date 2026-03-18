/*
 * XREFs of GsDriverEntry @ 0x1C0034010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry @ 0x1C000E12C (DriverEntry.c)
 *     __security_init_cookie @ 0x1C0034044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
