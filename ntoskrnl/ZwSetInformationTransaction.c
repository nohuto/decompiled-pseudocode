/*
 * XREFs of ZwSetInformationTransaction @ 0x140415870
 * Callers:
 *     DifZwSetInformationTransactionWrapper @ 0x1405F5180 (DifZwSetInformationTransactionWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle, *(_QWORD *)&TransactionInformationClass);
}
