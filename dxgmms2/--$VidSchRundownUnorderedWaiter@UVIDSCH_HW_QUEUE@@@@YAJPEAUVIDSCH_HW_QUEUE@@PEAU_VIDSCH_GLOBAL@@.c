/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C003D190
 * Callers:
 *     VidSchFlushHwQueue @ 0x1C0107860 (VidSchFlushHwQueue.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiRundownUnorderedWaiterHwQueue@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003DC54 (-VidSchiRundownUnorderedWaiterHwQueue@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<VIDSCH_HW_QUEUE>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        union _LARGE_INTEGER Interval)
{
  _QWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  char v9; // [rsp+30h] [rbp-30h]
  _QWORD v10[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v11; // [rsp+58h] [rbp-8h]

  if ( *(_DWORD *)(a1 + 156) )
  {
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( *(_DWORD *)(a1 + 156) )
    {
      v11 = 0;
      v10[0] = a2 + 1728;
      AcquireSpinLock::Acquire((Acquire *)v10);
      v9 = 0;
      v8[1] = v8;
      v8[0] = v8;
      VidSchiRundownUnorderedWaiterHwQueue((struct HwQueueStagingList *)v8, (struct VIDSCH_HW_QUEUE *)a1);
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v8);
      AcquireSpinLock::Release((AcquireSpinLock *)v10);
    }
  }
  return 0LL;
}
