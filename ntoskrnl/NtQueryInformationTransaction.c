/*
 * XREFs of NtQueryInformationTransaction @ 0x1403D26B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

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
