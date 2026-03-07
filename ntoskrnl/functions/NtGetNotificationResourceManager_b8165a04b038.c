// attributes: thunk
NTSTATUS __stdcall NtGetNotificationResourceManager(
        HANDLE ResourceManagerHandle,
        PTRANSACTION_NOTIFICATION TransactionNotification,
        ULONG NotificationLength,
        PLARGE_INTEGER Timeout,
        PULONG ReturnLength,
        ULONG Asynchronous,
        ULONG_PTR AsynchronousContext)
{
  return __imp_NtGetNotificationResourceManager(
           ResourceManagerHandle,
           TransactionNotification,
           NotificationLength,
           Timeout,
           ReturnLength,
           Asynchronous,
           AsynchronousContext);
}
