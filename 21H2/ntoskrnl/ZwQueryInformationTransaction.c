/*
 * XREFs of ZwQueryInformationTransaction @ 0x14041E1E0
 * Callers:
 *     DifZwQueryInformationTransactionWrapper @ 0x140625160 (DifZwQueryInformationTransactionWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle, *(_QWORD *)&TransactionInformationClass);
}
