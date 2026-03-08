/*
 * XREFs of NtCreateEnlistment @ 0x1403D2450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCreateEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE ResourceManagerHandle,
        HANDLE TransactionHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        NOTIFICATION_MASK NotificationMask,
        PVOID EnlistmentKey)
{
  return __imp_NtCreateEnlistment(
           EnlistmentHandle,
           DesiredAccess,
           ResourceManagerHandle,
           TransactionHandle,
           ObjectAttributes,
           CreateOptions,
           NotificationMask,
           EnlistmentKey);
}
