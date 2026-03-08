/*
 * XREFs of KeInvalidateAllCaches @ 0x1403010D0
 * Callers:
 *     MiChangePageAttributeBatch @ 0x140211998 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttributeContiguous @ 0x140214270 (MiChangePageAttributeContiguous.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1402149F0 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x1402DCDE0 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x1404580A0 (KeInvalidateRangeAllCaches.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x140619B48 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiFlushCacheMdl @ 0x14065E8C0 (MiFlushCacheMdl.c)
 *     MiFlushCacheRange @ 0x14065E91C (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140B675DC (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x14021238C (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x1402DC0CC (KxSetTimeStampBusy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // rdx
  unsigned __int8 v5; // al
  struct _KPRCB *v6; // r10
  _DWORD *v7; // r9
  int v8; // edx
  bool v9; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v4) = 4096;
    else
      v4 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    KiIpiSendRequestEx((__int64)CurrentPrcb, 1, 0LL, 0, 6LL, (void (__fastcall *)(__int64))KeSweepLocalCaches, 0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  if ( KiIrqlFlags )
  {
    v5 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
    {
      v6 = KeGetCurrentPrcb();
      v7 = v6->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v9 = (v8 & v7[5]) == 0;
      v7[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(v6);
    }
  }
  __writecr8(CurrentIrql);
  return 1;
}
