/*
 * XREFs of UsbhResetIrqPipeRetryTimer @ 0x1C0038A40
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C0005F10 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhResetIrqPipeRetryTimer(__int64 a1, _LIST_ENTRY *a2, unsigned int a3, _LIST_ENTRY *a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (_LIST_ENTRY *)UsbhHubResetIrqPipeWorker, 0, a4, a3, 1230467689);
}
