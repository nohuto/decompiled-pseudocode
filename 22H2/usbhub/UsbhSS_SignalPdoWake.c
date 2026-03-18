/*
 * XREFs of UsbhSS_SignalPdoWake @ 0x1C00183BC
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C0018460 (UsbhPortResumeComplete.c)
 *     UsbhPortResumeFailed @ 0x1C004E460 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C000BEB0 (UsbhQueueWorkItemWithRetry.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C0016B5C (UsbhLatchPdo.c)
 */

__int64 __fastcall UsbhSS_SignalPdoWake(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx

  v4 = PdoExt(a2);
  UsbhLatchPdo(a1, *((_WORD *)v4 + 714), 0LL, 0x73737057u);
  Log(a1, 0x10000, 1935098187, a2, 0LL);
  return UsbhQueueWorkItemWithRetry(a1, (__int64)(v4 + 406), (int)UsbhSS_PdoWakeWorker, 0, a2, 0, 2001752915);
}
