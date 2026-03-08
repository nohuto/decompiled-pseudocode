/*
 * XREFs of CcPostPVCMForDeleteToPartition @ 0x1403BE4F0
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140217A10 (CcDeleteSharedCacheMap.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403CB270 (CcForEachPrivateVolumeCacheMap.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcPostPVCMForDeleteToPartition(__int64 a1, char a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 OldIrql; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  memset(&v15, 0, sizeof(v15));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &v15);
  v6 = *(_QWORD **)(v2 + 88);
  v7 = (_QWORD *)(a1 + 576);
  if ( *v6 != v2 + 80 )
    goto LABEL_21;
  *(_QWORD *)(a1 + 584) = v6;
  *v7 = v2 + 80;
  *v6 = v7;
  v8 = (_QWORD *)(v2 + 96);
  *(_QWORD *)(v2 + 88) = v7;
  *(_DWORD *)(a1 + 1600) |= 4u;
  result = *(_QWORD *)(v2 + 96);
  if ( result == v2 + 96 )
    goto LABEL_8;
  v3 = *(_QWORD **)(v2 + 96);
  v10 = *(_QWORD *)result;
  if ( (_QWORD *)v3[1] != v8 || *(_QWORD **)(v10 + 8) != v3 )
LABEL_21:
    __fastfail(3u);
  *v8 = v10;
  *(_QWORD *)(v10 + 8) = v8;
  result = _InterlockedIncrement64((volatile signed __int64 *)(v2 + 1296));
  if ( result <= 1 )
    __fastfail(0xEu);
LABEL_8:
  if ( !a2 )
  {
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v15);
    OldIrql = v15.OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && v15.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (v15.OldIrql + 1));
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  if ( v3 )
  {
    *v3 = 0LL;
    return ExQueueWorkItemToPartition(v3, 0, 0xFFFFFFFF, *(_QWORD *)(v2 + 8));
  }
  return result;
}
