/*
 * XREFs of ZwRollbackComplete @ 0x14041E840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
