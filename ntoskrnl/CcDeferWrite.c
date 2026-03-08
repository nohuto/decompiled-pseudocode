/*
 * XREFs of CcDeferWrite @ 0x140535060
 * Callers:
 *     DifCcDeferWriteWrapper @ 0x1405D3D90 (DifCcDeferWriteWrapper.c)
 * Callees:
 *     CcDereferencePartition @ 0x140219EF0 (CcDereferencePartition.c)
 *     CcScheduleLazyWriteScan @ 0x140242B0C (CcScheduleLazyWriteScan.c)
 *     CcGetPartitionFromFileObject @ 0x140243818 (CcGetPartitionFromFileObject.c)
 *     CcGetPrivateVolumeCacheMapFromFileObject @ 0x140290B30 (CcGetPrivateVolumeCacheMapFromFileObject.c)
 *     ExInterlockedInsertTailList @ 0x1402B8DC0 (ExInterlockedInsertTailList.c)
 *     ExInterlockedInsertHeadList @ 0x1402E5000 (ExInterlockedInsertHeadList.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1403BBEB8 (CcPostDeferredWrites.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

void __stdcall CcDeferWrite(
        PFILE_OBJECT FileObject,
        PCC_POST_DEFERRED_WRITE PostRoutine,
        PVOID Context1,
        PVOID Context2,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  char *PoolWithTag; // rdi
  __int64 PartitionFromFileObject; // rbx
  _QWORD *v12; // rcx
  __int64 *PrivateVolumeCacheMapFromFileObject; // rsi
  unsigned __int64 OldIrql; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  struct _LIST_ENTRY *v20; // rcx
  KSPIN_LOCK *v21; // r8
  struct _LIST_ENTRY *v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v30, 0, sizeof(v30));
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x77446343u);
  if ( PoolWithTag )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    PartitionFromFileObject = CcGetPartitionFromFileObject((__int64)FileObject);
    PrivateVolumeCacheMapFromFileObject = CcGetPrivateVolumeCacheMapFromFileObject(v12, PartitionFromFileObject);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 1296)) <= 1 )
      __fastfail(0xEu);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 1296)) <= 1 )
      __fastfail(0xEu);
    if ( PrivateVolumeCacheMapFromFileObject && _InterlockedIncrement64(PrivateVolumeCacheMapFromFileObject + 1) <= 1 )
      __fastfail(0xEu);
    v20 = (struct _LIST_ENTRY *)(PrivateVolumeCacheMapFromFileObject + 138);
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    v21 = (KSPIN_LOCK *)(PartitionFromFileObject + 1216);
    *((_QWORD *)PoolWithTag + 1) = FileObject;
    v22 = (struct _LIST_ENTRY *)(PoolWithTag + 24);
    *((_DWORD *)PoolWithTag + 4) = BytesToWrite;
    *((_QWORD *)PoolWithTag + 6) = PostRoutine;
    *((_QWORD *)PoolWithTag + 9) = PartitionFromFileObject;
    *((_QWORD *)PoolWithTag + 10) = PrivateVolumeCacheMapFromFileObject;
    *(_DWORD *)PoolWithTag = 6816508;
    *((_QWORD *)PoolWithTag + 7) = Context1;
    *((_QWORD *)PoolWithTag + 8) = Context2;
    *((_QWORD *)PoolWithTag + 12) = MEMORY[0xFFFFF78000000320];
    if ( !PrivateVolumeCacheMapFromFileObject )
      v20 = (struct _LIST_ENTRY *)(PartitionFromFileObject + 1168);
    PoolWithTag[88] = 0;
    if ( Retrying )
      ExInterlockedInsertHeadList(v20, v22, v21);
    else
      ExInterlockedInsertTailList(v20, v22, v21);
    CcPostDeferredWrites(PartitionFromFileObject, (__int64)PrivateVolumeCacheMapFromFileObject);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PartitionFromFileObject + 768), &v30);
    LOBYTE(v23) = 1;
    CcScheduleLazyWriteScan((_BYTE *)PartitionFromFileObject, (__int64)PrivateVolumeCacheMapFromFileObject, v23, 0);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v30);
    v24 = v30.OldIrql;
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && v30.OldIrql <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (v30.OldIrql + 1));
        v19 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    __writecr8(v24);
    CcDereferencePartition(PartitionFromFileObject);
  }
  else
  {
    ((void (__fastcall *)(PVOID, PVOID))PostRoutine)(Context1, Context2);
  }
}
