/*
 * XREFs of CcDeductDirtyPagesFromExternalCache @ 0x1403C9DE0
 * Callers:
 *     CcUnregisterExternalCache @ 0x140534FD0 (CcUnregisterExternalCache.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1403BBEB8 (CcPostDeferredWrites.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcDeductDirtyPagesFromExternalCache(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // r14
  __int64 result; // rax
  _QWORD *v5; // rbp
  __int64 v7; // rsi
  unsigned int v8; // r15d
  unsigned __int64 v9; // rcx
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a2;
  result = (__int64)PspSystemPartition;
  v5 = (_QWORD *)(v2 + 1104);
  v7 = *((_QWORD *)PspSystemPartition + 1);
  if ( !CcEnablePerVolumeLazyWriter )
    v5 = (_QWORD *)(v7 + 1168);
  if ( a2 )
  {
    do
    {
      v8 = v3;
      if ( v3 > 0xFFFFFFFF )
        v8 = -1;
      v3 -= v8;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 768), &LockHandle);
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 < v8 )
        v8 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v9 - v8;
      *(_QWORD *)(v7 + 1056) -= v8;
      if ( v2 )
        *(_QWORD *)(v2 + 992) -= v8;
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
          v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v13 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
    }
    while ( v3 );
  }
  if ( (_QWORD *)*v5 != v5 )
    return CcPostDeferredWrites(v7, v2);
  return result;
}
