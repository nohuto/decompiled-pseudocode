/*
 * XREFs of ZwCreateEnlistment @ 0x14041BC40
 * Callers:
 *     DifZwCreateEnlistmentWrapper @ 0x1405EE3D0 (DifZwCreateEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE ResourceManagerHandle,
        HANDLE TransactionHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        NOTIFICATION_MASK NotificationMask,
        PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, *(_QWORD *)&DesiredAccess);
}
