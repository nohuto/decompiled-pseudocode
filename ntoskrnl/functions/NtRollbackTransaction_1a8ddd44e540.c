// attributes: thunk
NTSTATUS __stdcall NtRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  return __imp_NtRollbackTransaction(TransactionHandle, Wait);
}
