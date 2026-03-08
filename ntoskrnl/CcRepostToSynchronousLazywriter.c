/*
 * XREFs of CcRepostToSynchronousLazywriter @ 0x140537F48
 * Callers:
 *     CcAsyncLazywriteWorker @ 0x14053741C (CcAsyncLazywriteWorker.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1405387F4 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcPostWorkQueue @ 0x1402191C4 (CcPostWorkQueue.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcRepostToSynchronousLazywriter(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 152);
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 136);
  memset(&v14, 0, sizeof(v14));
  v4 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v2 + 16) = v4;
  *(_DWORD *)(v2 + 128) = 2;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 768), &v14);
  if ( (*(_DWORD *)(v4 + 152) & 0x10000) != 0 )
  {
    v7 = (_QWORD *)v2;
    v8 = 72LL;
    v2 |= 1uLL;
  }
  else
  {
    if ( *(_DWORD *)(v4 + 4) || (v8 = 120LL, *(_DWORD *)(v4 + 112)) )
      v8 = 104LL;
    v7 = (_QWORD *)v2;
  }
  *(_QWORD *)(v4 + 504) = v2;
  CcPostWorkQueue(v7, v1 + v8, v5, v6);
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v14);
  OldIrql = v14.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v14.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v14.OldIrql + 1));
      v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v13 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
