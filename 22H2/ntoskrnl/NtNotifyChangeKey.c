/*
 * XREFs of NtNotifyChangeKey @ 0x1406DBFB0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140696830 (ExpWatchProductTypeWork.c)
 *     SepAdtRegNotificationCallback @ 0x14079E5F0 (SepAdtRegNotificationCallback.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14079E798 (SepAdtOpenRegAndSetupNotification.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C020 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A41034 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x1406DC020 (NtNotifyChangeMultipleKeys.c)
 */

NTSTATUS __cdecl NtNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  return NtNotifyChangeMultipleKeys(
           KeyHandle,
           0,
           0LL,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           CompletionFilter,
           WatchTree,
           Buffer,
           BufferSize,
           Asynchronous);
}
