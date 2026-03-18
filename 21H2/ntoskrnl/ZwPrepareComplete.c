/*
 * XREFs of ZwPrepareComplete @ 0x14041DEE0
 * Callers:
 *     DifZwPrepareCompleteWrapper @ 0x140623410 (DifZwPrepareCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
