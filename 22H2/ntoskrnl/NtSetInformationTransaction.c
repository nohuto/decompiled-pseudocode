/*
 * XREFs of NtSetInformationTransaction @ 0x1403D7D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtSetInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength)
{
  return __imp_NtSetInformationTransaction(
           TransactionHandle,
           TransactionInformationClass,
           TransactionInformation,
           TransactionInformationLength);
}
