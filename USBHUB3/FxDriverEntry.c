/*
 * XREFs of FxDriverEntry @ 0x1C0041030
 * Callers:
 *     <none>
 * Callees:
 *     FxDriverEntryWorker @ 0x1C0041064 (FxDriverEntryWorker.c)
 *     __security_init_cookie @ 0x1C0093808 (__security_init_cookie.c)
 */

NTSTATUS __stdcall FxDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return FxDriverEntryWorker(DriverObject, RegistryPath);
}
