/*
 * XREFs of ZwCommitEnlistment @ 0x140413630
 * Callers:
 *     DifZwCommitEnlistmentWrapper @ 0x1405EBB40 (DifZwCommitEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
