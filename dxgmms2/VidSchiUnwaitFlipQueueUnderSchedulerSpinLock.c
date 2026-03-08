/*
 * XREFs of VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0017CAC
 * Callers:
 *     VidSchiResumeFlipQueues @ 0x1C00B42DC (VidSchiResumeFlipQueues.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C0003B80 (VidSchUnwaitFlipQueue.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

void __fastcall VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(__int64 a1)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  char v3; // [rsp+30h] [rbp-30h]
  _QWORD v4[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v5; // [rsp+58h] [rbp-8h]

  v5 = 0;
  v4[0] = a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v4);
  v3 = 0;
  v2[1] = v2;
  v2[0] = v2;
  VidSchUnwaitFlipQueue((struct HwQueueStagingList *)v2, a1);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v2);
  AcquireSpinLock::Release((AcquireSpinLock *)v4);
}
