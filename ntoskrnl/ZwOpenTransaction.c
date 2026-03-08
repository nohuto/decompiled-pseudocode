/*
 * XREFs of ZwOpenTransaction @ 0x140414A30
 * Callers:
 *     DifZwOpenTransactionWrapper @ 0x1405F0A00 (DifZwOpenTransactionWrapper.c)
 *     CmpRmUnDoPhase @ 0x140A1C3B4 (CmpRmUnDoPhase.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle, *(_QWORD *)&DesiredAccess);
}
