/*
 * XREFs of ZwPrepareEnlistment @ 0x140414AF0
 * Callers:
 *     DifZwPrepareEnlistmentWrapper @ 0x1405F0EF0 (DifZwPrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
