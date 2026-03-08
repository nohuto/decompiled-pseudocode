/*
 * XREFs of ZwPrePrepareEnlistment @ 0x140414AB0
 * Callers:
 *     DifZwPrePrepareEnlistmentWrapper @ 0x1405F0CB0 (DifZwPrePrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
