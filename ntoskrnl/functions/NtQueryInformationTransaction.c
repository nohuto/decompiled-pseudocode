// attributes: thunk
NTSTATUS __stdcall NtQueryInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength,
        PULONG ReturnLength)
{
  return __imp_NtQueryInformationTransaction(
           TransactionHandle,
           TransactionInformationClass,
           TransactionInformation,
           TransactionInformationLength,
           ReturnLength);
}
