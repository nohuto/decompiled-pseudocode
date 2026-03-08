/*
 * XREFs of NtQueryInformationTransactionManager @ 0x1403D26D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtQueryInformationTransactionManager(
        HANDLE TransactionManagerHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength,
        PULONG ReturnLength)
{
  return __imp_NtQueryInformationTransactionManager(
           TransactionManagerHandle,
           TransactionManagerInformationClass,
           TransactionManagerInformation,
           TransactionManagerInformationLength,
           ReturnLength);
}
