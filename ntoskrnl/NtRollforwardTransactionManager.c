/*
 * XREFs of NtRollforwardTransactionManager @ 0x1403D2CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRollforwardTransactionManager(HANDLE TransactionManagerHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtRollforwardTransactionManager(TransactionManagerHandle, TmVirtualClock);
}
