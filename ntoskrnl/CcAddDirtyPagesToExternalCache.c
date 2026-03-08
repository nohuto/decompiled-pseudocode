/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x1403C9F50
 * Callers:
 *     <none>
 * Callees:
 *     CcChargeDirtyPagesInternal @ 0x1402429A0 (CcChargeDirtyPagesInternal.c)
 *     CcScheduleLazyWriteScan @ 0x140242B0C (CcScheduleLazyWriteScan.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r15
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned int v7; // edi
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(a1 + 56);
  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = (__int64)PspSystemPartition;
  v6 = *((_QWORD *)PspSystemPartition + 1);
  if ( a2 )
  {
    do
    {
      v7 = v3;
      if ( v3 > 0xFFFFFFFF )
        v7 = -1;
      v3 -= v7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
      if ( !*(_QWORD *)(a1 + 8) )
        CcScheduleLazyWriteScan((_BYTE *)v6, (__int64)v2, 0LL, 0);
      *(_QWORD *)(a1 + 8) += v7;
      CcChargeDirtyPagesInternal(0LL, 0LL, 0LL, v7, v6, v2);
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
          v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v11 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
    }
    while ( v3 );
  }
  return result;
}
