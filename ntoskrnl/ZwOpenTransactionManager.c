/*
 * XREFs of ZwOpenTransactionManager @ 0x140414A50
 * Callers:
 *     DifZwOpenTransactionManagerWrapper @ 0x1405F08A0 (DifZwOpenTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        LPGUID TmIdentity,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle, *(_QWORD *)&DesiredAccess);
}
