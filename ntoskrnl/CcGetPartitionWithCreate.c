/*
 * XREFs of CcGetPartitionWithCreate @ 0x1402E20D0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsReferencePartitionSafe @ 0x140295BC8 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCreatePartition @ 0x14039B540 (CcCreatePartition.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CcDeletePartition @ 0x140536840 (CcDeletePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

_BYTE *__fastcall CcGetPartitionWithCreate(__int64 a1)
{
  _BYTE *v1; // rbx
  void *v2; // rsi
  __int64 Partition; // rax
  unsigned __int64 v6; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  int v16; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_BYTE **)(a1 + 8);
  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v1 )
    goto LABEL_2;
  Partition = CcCreatePartition();
  v1 = (_BYTE *)Partition;
  if ( Partition )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 768), &LockHandle);
    v6 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v2 = v1;
      v1 = *(_BYTE **)(a1 + 8);
    }
    else
    {
      ++CcPartitionCount;
      *(_QWORD *)(a1 + 8) = v1;
      v1[1293] = 1;
      if ( PsReferencePartitionSafe(a1) )
        PsDereferencePartition(a1);
      else
        v1[1294] = 1;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&CcGlobalPartitionLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v13 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
      CcDeletePartition(v2);
    if ( v1 )
    {
LABEL_2:
      if ( v1[1294] >= 2u )
        KeBugCheckEx(0x34u, 0x641uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    }
  }
  return v1;
}
