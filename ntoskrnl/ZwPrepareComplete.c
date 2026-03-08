/*
 * XREFs of ZwPrepareComplete @ 0x140414AD0
 * Callers:
 *     DifZwPrepareCompleteWrapper @ 0x1405F0DD0 (DifZwPrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
