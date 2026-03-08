/*
 * XREFs of UsbhIdleIrpRetryTimer @ 0x1C0057BC0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C000B390 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhIdleIrpRetryTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (int)UsbhPdoIdleCC_Worker, 0, a4, 0, 0x69505353u);
}
