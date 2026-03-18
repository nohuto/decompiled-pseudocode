/*
 * XREFs of NtSetInformationTransactionManager @ 0x1403D81D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtSetInformationTransactionManager(
        HANDLE TmHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength)
{
  return __imp_NtSetInformationTransactionManager(
           TmHandle,
           TransactionManagerInformationClass,
           TransactionManagerInformation,
           TransactionManagerInformationLength);
}
