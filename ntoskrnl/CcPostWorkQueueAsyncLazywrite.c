/*
 * XREFs of CcPostWorkQueueAsyncLazywrite @ 0x140537D14
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140218810 (CcLazyWriteScanVolume.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x1405392F4 (CcQueueAsyncLazywriteCompletion.c)
 * Callees:
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x14021511C (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140391D54 (CcPerfLogWorkItemEnqueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcPostWorkQueueAsyncLazywrite(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // r14
  int v8; // eax
  __int64 *v9; // rcx
  _QWORD *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 OldIrql; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  bool v22; // zf
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 144);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, a1, 0, 1);
  v8 = *(_DWORD *)(a1 + 128);
  if ( v8 == 7 || v8 == 4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
    v13 = *(__int64 **)(a2 + 8);
    if ( *v13 != a2 )
      goto LABEL_28;
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = v13;
    *v13 = a1;
    *(_QWORD *)(a2 + 8) = a1;
    if ( !*(_BYTE *)(v3 + 196) )
    {
      v14 = (_QWORD *)(v3 + 288);
      v15 = *(__int64 **)(v3 + 288);
      if ( v15 != (__int64 *)(v3 + 288) )
      {
        v4 = *(_QWORD **)(v3 + 288);
        v16 = *v15;
        if ( (_QWORD *)v4[1] != v14 || *(_QWORD **)(v16 + 8) != v4 )
          goto LABEL_28;
        *v14 = v16;
        *(_QWORD *)(v16 + 8) = v14;
        ++*(_DWORD *)(v3 + 304);
        CcReferencePartitionAndPrivateVolumeCacheMap(v2, v5);
      }
    }
    if ( (*(_DWORD *)(v5 + 1600) & 2) != 0 )
      KeSetEvent((PRKEVENT)(v3 + 328), 0, 0);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
    v9 = *(__int64 **)(v3 + 432);
    if ( *v9 != v3 + 424 )
      goto LABEL_28;
    *(_QWORD *)a1 = v3 + 424;
    *(_QWORD *)(a1 + 8) = v9;
    *v9 = a1;
    *(_QWORD *)(v3 + 432) = a1;
    v10 = (_QWORD *)(v3 + 400);
    v11 = *(__int64 **)(v3 + 400);
    if ( v11 != (__int64 *)(v3 + 400) )
    {
      v4 = *(_QWORD **)(v3 + 400);
      v12 = *v11;
      if ( (_QWORD *)v4[1] == v10 && *(_QWORD **)(v12 + 8) == v4 )
      {
        *v10 = v12;
        *(_QWORD *)(v12 + 8) = v10;
        ++*(_DWORD *)(v3 + 416);
        CcReferencePartitionAndPrivateVolumeCacheMap(v2, v5);
        goto LABEL_18;
      }
LABEL_28:
      __fastfail(3u);
    }
  }
LABEL_18:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v22 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = OldIrql;
  __writecr8(OldIrql);
  if ( v4 )
  {
    *v4 = 0LL;
    return ExQueueWorkItemToPartition(v4, 0, *(_DWORD *)(v3 + 24), *(_QWORD *)(v2 + 8));
  }
  return result;
}
