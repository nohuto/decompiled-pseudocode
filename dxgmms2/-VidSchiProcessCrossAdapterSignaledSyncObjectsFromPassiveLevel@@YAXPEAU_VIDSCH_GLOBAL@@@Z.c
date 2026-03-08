/*
 * XREFs of ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003DBE0
 * Callers:
 *     VidSchFlushAdapter @ 0x1C0107550 (VidSchFlushAdapter.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0006790 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C003AC40 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 */

void __fastcall VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel(struct _VIDSCH_GLOBAL *a1)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  char v3; // [rsp+30h] [rbp-30h]
  _QWORD v4[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v5; // [rsp+58h] [rbp-8h]

  v5 = 0;
  v4[0] = (char *)a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v4);
  v3 = 0;
  v2[1] = v2;
  v2[0] = v2;
  VidSchiProcessCrossAdapterSignaledSyncObjects((struct HwQueueStagingList *)v2, (__int64)a1);
  if ( !v3 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v2);
  AcquireSpinLock::Release((AcquireSpinLock *)v4);
}
