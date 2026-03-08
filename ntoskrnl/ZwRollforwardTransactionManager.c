/*
 * XREFs of ZwRollforwardTransactionManager @ 0x1404154D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollforwardTransactionManager(HANDLE TransactionManagerHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle, TmVirtualClock);
}
