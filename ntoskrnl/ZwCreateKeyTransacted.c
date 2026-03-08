/*
 * XREFs of ZwCreateKeyTransacted @ 0x140413990
 * Callers:
 *     DifZwCreateKeyTransactedWrapper @ 0x1405EC4D0 (DifZwCreateKeyTransactedWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        PULONG Disposition)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess);
}
