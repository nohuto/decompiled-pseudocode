/*
 * XREFs of ZwPrePrepareEnlistment @ 0x14041DEC0
 * Callers:
 *     DifZwPrePrepareEnlistmentWrapper @ 0x1406232E0 (DifZwPrePrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
