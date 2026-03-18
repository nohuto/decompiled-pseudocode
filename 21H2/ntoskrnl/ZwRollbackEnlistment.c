/*
 * XREFs of ZwRollbackEnlistment @ 0x14041E860
 * Callers:
 *     DifZwRollbackEnlistmentWrapper @ 0x140626910 (DifZwRollbackEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
