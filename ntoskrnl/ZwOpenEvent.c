/*
 * XREFs of ZwOpenEvent @ 0x140412B10
 * Callers:
 *     DifZwOpenEventWrapper @ 0x1405EF360 (DifZwOpenEventWrapper.c)
 *     PspShutdownCsrProcess @ 0x1409AA2D8 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, *(_QWORD *)&DesiredAccess);
}
