/*
 * XREFs of ZwSetEvent @ 0x1404124D0
 * Callers:
 *     DifZwSetEventWrapper @ 0x1405F4790 (DifZwSetEventWrapper.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1408674A0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PspShutdownCsrProcess @ 0x1409AA2D8 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, PreviousState);
}
