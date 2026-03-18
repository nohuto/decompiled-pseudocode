/*
 * XREFs of ZwSetEvent @ 0x14041B920
 * Callers:
 *     DifZwSetEventWrapper @ 0x140626F10 (DifZwSetEventWrapper.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1407F3CF0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PspShutdownCsrProcess @ 0x1409AC388 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, PreviousState);
}
