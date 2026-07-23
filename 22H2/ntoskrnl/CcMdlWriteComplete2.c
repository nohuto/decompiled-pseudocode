/*
 * XREFs of CcMdlWriteComplete2 @ 0x140329A88
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x1406A1510 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x1406A45B0 (CcMdlWriteComplete.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     CcDecrementOpenCount @ 0x1402937BC (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     CcSetDirtyInMask @ 0x1402B6B00 (CcSetDirtyInMask.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x14031B530 (FsRtlIsNtstatusExpected.c)
 *     MmFlushSection @ 0x14033D70C (MmFlushSection.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, struct _MDL *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  CSHORT MdlFlags; // r15
  struct _MDL *v7; // rdi
  NTSTATUS v9; // esi
  __int16 v10; // r15
  _QWORD *v11; // r13
  struct _MDL *Next; // r12
  __int64 ByteCount; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  PMDL v17; // r14
  __int64 Partition; // rax
  unsigned __int64 OldIrql; // rbx
  struct _MDL *v20; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v27; // ecx
  __int128 v28; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+48h] BYREF
  PMDL Mdl; // [rsp+B0h] [rbp+50h]

  Mdl = a3;
  v4 = *a2;
  v30 = *a2;
  v5 = *(_QWORD *)(a1 + 40);
  MdlFlags = a3->MdlFlags;
  v7 = a3;
  v9 = 0;
  v28 = 0LL;
  v10 = MdlFlags & 2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = *(_QWORD **)(v5 + 8);
  do
  {
    Next = v7->Next;
    if ( v10 )
      MmUnlockPages(v7);
    ByteCount = v7->ByteCount;
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), (unsigned int)&v30, ByteCount, (_DWORD)a4, (__int64)&v28, 1);
      if ( (int)v28 < 0 )
        v9 = v28;
    }
    else
    {
      CcSetDirtyInMask((__int64)v11, &v30, ByteCount, 0LL);
    }
    v16 = v7->ByteCount;
    v7 = Next;
    v4 += v16;
    v30 = v4;
  }
  while ( Next );
  v17 = Mdl;
  if ( v10 )
  {
    Partition = CcGetPartition(v11, v14, v15, a4);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDecrementOpenCount((__int64)v11);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v25 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v9 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v9);
    v27 = -1073741591;
    if ( IsNtstatusExpected )
      v27 = v9;
    RtlRaiseStatus(v27);
  }
  do
  {
    v20 = v17->Next;
    IoFreeMdl(v17);
    v17 = v20;
  }
  while ( v20 );
}
