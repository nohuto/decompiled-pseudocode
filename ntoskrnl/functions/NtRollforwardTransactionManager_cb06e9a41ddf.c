// attributes: thunk
NTSTATUS __stdcall NtRollforwardTransactionManager(HANDLE TransactionManagerHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtRollforwardTransactionManager(TransactionManagerHandle, TmVirtualClock);
}
