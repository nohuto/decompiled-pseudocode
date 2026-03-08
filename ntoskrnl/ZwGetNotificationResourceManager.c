/*
 * XREFs of ZwGetNotificationResourceManager @ 0x140414330
 * Callers:
 *     DifZwGetNotificationResourceManagerWrapper @ 0x1405EE7D0 (DifZwGetNotificationResourceManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwGetNotificationResourceManager(
        HANDLE ResourceManagerHandle,
        PTRANSACTION_NOTIFICATION TransactionNotification,
        ULONG NotificationLength,
        PLARGE_INTEGER Timeout,
        PULONG ReturnLength,
        ULONG Asynchronous,
        ULONG_PTR AsynchronousContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, TransactionNotification);
}
