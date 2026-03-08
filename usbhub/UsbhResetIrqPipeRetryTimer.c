/*
 * XREFs of UsbhResetIrqPipeRetryTimer @ 0x1C0039480
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C000B390 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhResetIrqPipeRetryTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (int)UsbhHubResetIrqPipeWorker, 0, a4, a3, 0x49577269u);
}
