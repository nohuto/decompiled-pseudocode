/*
 * XREFs of ZwSetEvent @ 0x1403F9BE0
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140725C90 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PspShutdownCsrProcess @ 0x1409066A0 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
