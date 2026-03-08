/*
 * XREFs of MiFlushControlArea @ 0x1406220F4
 * Callers:
 *     MiDeleteCachedSegment @ 0x140621514 (MiDeleteCachedSegment.c)
 *     MiProcessDeleteOnClose @ 0x1406229CC (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiRemoveWakeListEntry @ 0x14020181C (MiRemoveWakeListEntry.c)
 *     MiDecrementModifiedWriteCount @ 0x140212BE4 (MiDecrementModifiedWriteCount.c)
 *     MmIsWriteErrorFatal @ 0x140212D9C (MmIsWriteErrorFatal.c)
 *     MiDeleteControlArea @ 0x140215028 (MiDeleteControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     MiInsertUnusedSegment @ 0x14034C75C (MiInsertUnusedSegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPreventControlAreaDelete @ 0x14062297C (MiPreventControlAreaDelete.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14075EFA8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14075F248 (FsRtlReleaseFileForCcFlush.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushControlArea(char *P, unsigned __int8 a2, __int64 *a3, struct _FILE_OBJECT **a4)
{
  unsigned __int64 v4; // rdi
  struct _FILE_OBJECT *v6; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _WORK_QUEUE_ITEM *Pool; // rdi
  BOOL v13; // r12d
  unsigned __int64 v14; // rsi
  signed __int64 v15; // rdx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  NTSTATUS v20; // r12d
  KIRQL v21; // al
  __int64 inserted; // r14
  int v23; // r9d
  struct _LIST_ENTRY *v24; // rbx
  __int64 v25; // rbx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  int v33; // eax
  _DWORD *v34; // r8
  volatile LONG *SpinLock; // [rsp+48h] [rbp-31h]
  struct _IO_STATUS_BLOCK v36; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v37; // [rsp+60h] [rbp-19h] BYREF
  __int64 v38; // [rsp+68h] [rbp-11h]
  __int64 v39; // [rsp+70h] [rbp-9h]
  _QWORD v40[11]; // [rsp+78h] [rbp-1h] BYREF
  BOOL v41; // [rsp+E0h] [rbp+67h]

  *((_DWORD *)P + 14) |= 0x100u;
  v40[1] = v40;
  v4 = a2;
  v40[0] = v40;
  v37 = (_QWORD *)*((_QWORD *)P + 10);
  v39 = 393479LL;
  *((_QWORD *)P + 10) = &v37;
  v36 = 0LL;
  *a4 = 0LL;
  *a3 = 0LL;
  v38 = 4LL;
  v6 = (struct _FILE_OBJECT *)MiPreventControlAreaDelete(P);
  SpinLock = (volatile LONG *)(P + 72);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  Pool = 0LL;
  v13 = (int)FsRtlAcquireFileForCcFlushEx(v6) >= 0;
  v41 = v13;
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
  v15 = _InterlockedDecrement64((volatile signed __int64 *)P + 14);
  *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * (*((_WORD *)P + 30) & 0x3FF)) + 1752LL) = 0LL;
  if ( !v13 || (*((_DWORD *)P + 14) & 1) != 0 )
  {
    *((_DWORD *)P + 14) &= ~0x100u;
    HIDWORD(v38) = 1;
    if ( !v15 )
    {
      MiRemoveWakeListEntry((__int64)P, &v37);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
      if ( KiIrqlFlags )
      {
        v31 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v34 = v32->SchedulerAssist;
          v11 = (v33 & v34[5]) == 0;
          v34[5] &= v33;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)v32);
        }
      }
      __writecr8(v14);
      if ( v13 )
        FsRtlReleaseFileForCcFlush(v6);
      MiDeleteControlArea(P);
      ObfDereferenceObjectWithTag(v6, 0x63536D4Du);
      return 0LL;
    }
    v20 = 0;
  }
  else
  {
    ++*((_DWORD *)P + 19);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
    if ( KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v11 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
    __writecr8(v14);
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    v20 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)P + 16, 0LL, 0LL, 2u, &v36);
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    if ( v20 < 0 )
      Pool = (struct _WORK_QUEUE_ITEM *)MiAllocatePool(64, 0x38uLL, 0x70646D4Du);
    v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
    *((_DWORD *)P + 14) &= ~0x100u;
    LOBYTE(v14) = v21;
    *a3 = MiDecrementModifiedWriteCount((__int64)P, 1);
  }
  inserted = 0LL;
  MiRemoveWakeListEntry((__int64)P, &v37);
  if ( *((_QWORD *)P + 3) | *((_QWORD *)P + 5) | *((_DWORD *)P + 14) & 1LL )
    goto LABEL_38;
  if ( !HIDWORD(v38) || !*((_QWORD *)P + 4) )
  {
    if ( v20 >= 0 || !*((_QWORD *)P + 4) )
      goto LABEL_35;
    if ( v20 != -1073740749 && MmIsWriteErrorFatal(1, v23, v20) )
    {
      if ( Pool )
      {
        v24 = (struct _LIST_ENTRY *)(*((_QWORD *)P + 8) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v24 )
          ObfReferenceObjectWithTag(v24, 0x644C6D4Du);
        Pool[1].List.Flink = v24;
        LODWORD(Pool[1].List.Blink) = v20;
        LOBYTE(Pool[1].WorkerRoutine) = 1;
        Pool->List.Flink = 0LL;
        Pool->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        Pool->Parameter = Pool;
        ExQueueWorkItem(Pool, DelayedWorkQueue);
        *a4 = v6;
        return 1LL;
      }
LABEL_35:
      *a4 = v6;
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      return 1LL;
    }
  }
  inserted = MiInsertUnusedSegment((__int64)P);
  if ( !inserted )
LABEL_38:
    v25 = 0LL;
  else
    v25 = *(_QWORD *)(qword_140C67048 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    v27 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v27 >= 2u )
    {
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
      v11 = (v30 & v29[5]) == 0;
      v29[5] &= v30;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)v28);
    }
  }
  __writecr8((unsigned __int8)v14);
  if ( v41 )
    FsRtlReleaseFileForCcFlush(v6);
  ObfDereferenceObjectWithTag(v6, 0x63536D4Du);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v25, 1LL, inserted);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return 0LL;
}
