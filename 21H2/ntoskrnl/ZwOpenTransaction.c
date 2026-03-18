/*
 * XREFs of ZwOpenTransaction @ 0x14041DE40
 * Callers:
 *     DifZwOpenTransactionWrapper @ 0x140623030 (DifZwOpenTransactionWrapper.c)
 *     CmpRmUnDoPhase @ 0x14091C5C4 (CmpRmUnDoPhase.c)
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
