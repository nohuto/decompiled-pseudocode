/*
 * XREFs of ZwRollbackEnlistment @ 0x140415470
 * Callers:
 *     DifZwRollbackEnlistmentWrapper @ 0x1405F41D0 (DifZwRollbackEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
