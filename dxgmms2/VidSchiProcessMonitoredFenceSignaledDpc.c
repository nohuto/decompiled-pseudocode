/*
 * XREFs of VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001DBB6
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C000A580 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C003A0D4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C00037C0 (VidSchiUnwaitMonitoredFences.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C001D6C6 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001D8B2 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessMonitoredFenceSignaledDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rdi
  __int64 v2; // rbx
  _QWORD v3[2]; // [rsp+20h] [rbp-40h] BYREF
  char v4; // [rsp+30h] [rbp-30h]
  _QWORD v5[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v6; // [rsp+58h] [rbp-8h]

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[185], ListEntry);
  v2 = *((_QWORD *)&Next[1].Next + 1);
  v6 = 256;
  v5[0] = v2 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v5);
  v4 = 0;
  v3[1] = v3;
  v3[0] = v3;
  VidSchiUnwaitNodeHwQueueProgress((struct HwQueueStagingList *)v3, (struct _VIDSCH_NODE *)Next);
  VidSchiUnwaitMonitoredFences((__int64)v3, v2, 0LL);
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)Next);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v5);
}
