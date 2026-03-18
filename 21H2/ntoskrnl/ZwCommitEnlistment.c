/*
 * XREFs of ZwCommitEnlistment @ 0x14041CA80
 * Callers:
 *     DifZwCommitEnlistmentWrapper @ 0x14061DFC0 (DifZwCommitEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
