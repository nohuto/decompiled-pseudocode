/*
 * XREFs of UsbhSS_SignalPdoWake @ 0x1C001B37C
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C001B2A0 (UsbhPortResumeComplete.c)
 *     UsbhPortResumeFailed @ 0x1C004D050 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C0005F10 (UsbhQueueWorkItemWithRetry.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C000F240 (UsbhLatchPdo.c)
 */

__int64 __fastcall UsbhSS_SignalPdoWake(_LIST_ENTRY *a1, _LIST_ENTRY *a2)
{
  _DWORD *v4; // rbx

  v4 = PdoExt((__int64)a2);
  UsbhLatchPdo((__int64)a1, *((_WORD *)v4 + 714), 0LL, 0x73737057u);
  Log((__int64)a1, 0x10000, 1935098187, (__int64)a2, 0LL);
  return UsbhQueueWorkItemWithRetry(a1, (__int64)(v4 + 406), (_LIST_ENTRY *)UsbhSS_PdoWakeWorker, 0, a2, 0, 2001752915);
}
