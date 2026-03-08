/*
 * XREFs of CcExitPartition @ 0x140536FC8
 * Callers:
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x14065745C (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1403BBEB8 (CcPostDeferredWrites.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403CB270 (CcForEachPrivateVolumeCacheMap.c)
 *     CcWaitForCurrentLazyWriterActivityOnPartition @ 0x1403CE98C (CcWaitForCurrentLazyWriterActivityOnPartition.c)
 *     CcNotifyWriteBehindInternal @ 0x14053467C (CcNotifyWriteBehindInternal.c)
 *     CcDeletePartition @ 0x140536840 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140536B34 (CcDeleteSectionsForPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcExitPartition(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // r14
  unsigned __int8 v5; // cl
  struct _KPRCB *v6; // r10
  _DWORD *v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // r14
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  unsigned __int64 v15; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  int v26; // [rsp+70h] [rbp+20h] BYREF

  v26 = 0;
  v2 = a1[1];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 )
  {
    if ( a2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
      v15 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 1294) = 2;
      KxReleaseSpinLock((volatile signed __int64 *)&CcGlobalPartitionLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v9 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v15);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      __writecr8(OldIrql);
      if ( CcEnablePerVolumeLazyWriter )
        CcForEachPrivateVolumeCacheMap(
          v2,
          (__int64 (__fastcall *)(__int64, __int64, __int64))CcPostDeferredWritesOnVolumeHelper,
          0LL);
      else
        CcPostDeferredWrites(v2, 0LL);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcExitPartition: Partition Exited=%p, PartitionObject=%p now deleting Partition \n",
        (const void *)v2,
        a1);
      CcDeletePartition((char *)v2);
    }
    else
    {
      CcNotifyWriteBehindInternal(v2, 2);
      if ( CcEnablePerVolumeLazyWriter )
        CcForEachPrivateVolumeCacheMap(
          v2,
          (__int64 (__fastcall *)(__int64, __int64, __int64))CcWaitForCurrentLazyWriterActivityHelper,
          (__int64)&v26);
      else
        v26 = CcWaitForCurrentLazyWriterActivityOnPartition(v2, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
      v4 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 1294) = 1;
      KxReleaseSpinLock((volatile signed __int64 *)&CcGlobalPartitionLock);
      if ( KiIrqlFlags )
      {
        v5 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v5 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v5 >= 2u )
        {
          v6 = KeGetCurrentPrcb();
          v7 = v6->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v9 = (v8 & v7[5]) == 0;
          v7[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(v6);
        }
      }
      __writecr8(v4);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v10 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v11 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = v12->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      __writecr8(v10);
      while ( *(_QWORD *)(v2 + 624) != v2 + 624
           || *(_QWORD *)(v2 + 656) != v2 + 680
           || *(_QWORD *)(v2 + 664) != v2 + 680 )
      {
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 656), v2);
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 624), v2);
      }
    }
  }
}
