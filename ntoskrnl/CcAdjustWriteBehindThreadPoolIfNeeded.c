/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140533834
 * Callers:
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPagesInternal @ 0x1402429A0 (CcChargeDirtyPagesInternal.c)
 *     CcUninitializeCacheMap @ 0x140336C50 (CcUninitializeCacheMap.c)
 *     CcCanIWrite @ 0x140362960 (CcCanIWrite.c)
 *     CcQueueLazyWriteScanThread @ 0x140534A20 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcGetCurrentNumaNode @ 0x14020D750 (CcGetCurrentNumaNode.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140219E24 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140300D74 (CcBoostLowPriorityWorkerThread.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAdjustWriteBehindThreadPool @ 0x1405337B8 (CcAdjustWriteBehindThreadPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

signed __int32 __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(__int64 a1, char a2)
{
  signed __int32 result; // eax
  char v3; // si
  __int64 v6; // rcx
  __int64 CurrentNumaNode; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_BYTE)dword_140D1D1EC || (unsigned int)CcNumberNumaNodes > 1 || CcEnablePerVolumeLazyWriter )
    return result;
  CurrentNumaNode = CcGetCurrentNumaNode(a1, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 832), &LockHandle);
  if ( *(_DWORD *)(a1 + 872) )
  {
    if ( !CcIsWriteBehindThreadpoolAtLowPriority(a1) )
      goto LABEL_17;
    v3 = 1;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a1 + 1056) > 0x2000uLL || a2 )
  {
    if ( CcIsWriteBehindThreadpoolAtLowPriority(a1) )
    {
      CcAdjustWriteBehindThreadPool(v9);
      v3 = 1;
    }
    goto LABEL_17;
  }
  if ( !*(_DWORD *)(CurrentNumaNode + 188)
    && !*(_DWORD *)(CurrentNumaNode + 176)
    && *(_QWORD *)(CurrentNumaNode + 104) == CurrentNumaNode + 104
    && *(_QWORD *)(CurrentNumaNode + 120) == CurrentNumaNode + 120 )
  {
    v8 = a1;
LABEL_14:
    CcAdjustWriteBehindThreadPool(v8);
  }
LABEL_17:
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v13 = (result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v13 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v3 )
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result < 2u )
      return CcBoostLowPriorityWorkerThread(a1, 0LL);
  }
  return result;
}
