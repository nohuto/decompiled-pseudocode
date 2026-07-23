/*
 * XREFs of ZwOpenEvent @ 0x1403FA220
 * Callers:
 *     PspShutdownCsrProcess @ 0x1409066A0 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
