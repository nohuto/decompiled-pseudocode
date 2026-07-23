/*
 * XREFs of ZwOpenEvent @ 0x1403FAD80
 * Callers:
 *     PspShutdownCsrProcess @ 0x1409067B0 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
