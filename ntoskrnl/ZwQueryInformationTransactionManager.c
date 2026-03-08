/*
 * XREFs of ZwQueryInformationTransactionManager @ 0x140414E10
 * Callers:
 *     DifZwQueryInformationTransactionManagerWrapper @ 0x1405F2930 (DifZwQueryInformationTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationTransactionManager(
        HANDLE TransactionManagerHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle, *(_QWORD *)&TransactionManagerInformationClass);
}
