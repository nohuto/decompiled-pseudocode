/*
 * XREFs of UsbhSS_SignalPdoWake @ 0x1C001A04C
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C001B070 (UsbhPortResumeComplete.c)
 *     UsbhPortResumeFailed @ 0x1C004D940 (UsbhPortResumeFailed.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C000B390 (UsbhQueueWorkItemWithRetry.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhLatchPdo @ 0x1C0019420 (UsbhLatchPdo.c)
 */

__int64 __fastcall UsbhSS_SignalPdoWake(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx

  v4 = PdoExt(a2);
  UsbhLatchPdo(a1, *((_WORD *)v4 + 714), 0LL, 0x73737057u);
  Log(a1, 0x10000, 1935098187, a2, 0LL);
  return UsbhQueueWorkItemWithRetry(a1, (__int64)(v4 + 406), (int)UsbhSS_PdoWakeWorker, 0, a2, 0, 0x77505353u);
}
