/*
 * XREFs of UsbhIsrRetryTimer @ 0x1C0038390
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C0005F10 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhIsrRetryTimer(__int64 a1, _LIST_ENTRY *a2, unsigned int a3, _LIST_ENTRY *a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (_LIST_ENTRY *)UsbhHubIsrWorker, 0, a4, a3, 1230467945);
}
