/*
 * XREFs of ZwOpenKeyTransacted @ 0x14041CBE0
 * Callers:
 *     DifZwOpenKeyTransactedWrapper @ 0x1405F1E70 (DifZwOpenKeyTransactedWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess);
}
