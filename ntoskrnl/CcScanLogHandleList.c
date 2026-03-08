/*
 * XREFs of CcScanLogHandleList @ 0x1402175F8
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140218810 (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x140533B4C (CcLazyWriteScan.c)
 * Callees:
 *     CcCalculatePagesToWrite @ 0x140217524 (CcCalculatePagesToWrite.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x14021782C (CcDecrementVolumeUseCountWithDelete.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcScanLogHandleList(__int64 a1, _DWORD *a2, int a3, __int64 *a4)
{
  __int64 *v7; // r14
  KSPIN_LOCK *v8; // r13
  __int64 *v9; // rbx
  unsigned __int64 OldIrql; // rdi
  __int64 v11; // rcx
  unsigned int *v12; // rdi
  unsigned int *v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 result; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int16 v38; // [rsp+C8h] [rbp+60h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *a2 = 0;
  *(_QWORD *)&v35.OldIrql = 0LL;
  v38 = 0;
  *a4 = 0x7FFFFFFFFFFFFFFFLL;
  LockHandle.LockQueue = 0LL;
  v35.LockQueue = 0LL;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v7 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    v8 = (KSPIN_LOCK *)(a1 + 768);
    do
    {
      v9 = v7 - 2;
      ++*((_DWORD *)v7 - 3);
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      v11 = v9[5];
      if ( v11 )
        ((void (__fastcall *)(__int64, unsigned __int16 *))v9[7])(v11, &v38);
      KeAcquireInStackQueuedSpinLock(v8, &v35);
      if ( !v9[5] )
        goto LABEL_13;
      v12 = (unsigned int *)(v9 + 8);
      v13 = (unsigned int *)(v9 + 14);
      if ( (unsigned __int64)v9[8] >= 0xFFFFFFFF )
      {
        ++CcDbgForcedLogPercentFull;
        v38 = 0;
      }
      else
      {
        v14 = *v12;
        *v13 = *v12;
        if ( v38 )
        {
          v15 = 100 * v14;
          *v13 = v15;
          v16 = v15 / v38;
          goto LABEL_10;
        }
      }
      v16 = *((_DWORD *)v9 + 37);
LABEL_10:
      *v13 = (3 * v16) >> 2;
      v9[13] = v16;
      v9[12] = v16;
      v9[11] = v16;
      v17 = CcCalculatePagesToWrite(a1, a3, (__int64)(v9 + 8), (unsigned __int64 *)v9 + 11, 1);
      v18 = *(_QWORD *)v12;
      v9[9] = *(_QWORD *)v12;
      if ( v17 > v18 >> 3 )
      {
        *a2 += v17;
        ++CcDbgAdditionalPagesQueuedCount;
      }
      else
      {
        v17 = 0;
      }
      *((_DWORD *)v9 + 36) = v17;
      *((_DWORD *)v9 + 20) = v17;
      if ( v9[4] )
      {
        v22 = v9[22];
        if ( v22 < *a4 )
          *a4 = v22;
      }
LABEL_13:
      KxReleaseQueuedSpinLock(&v35);
      v19 = v35.OldIrql;
      if ( KiIrqlFlags )
      {
        v28 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && v35.OldIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (v35.OldIrql + 1));
          v27 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      __writecr8(v19);
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      v7 = (__int64 *)*v7;
      CcDecrementVolumeUseCountWithDelete(v9);
    }
    while ( v7 != &CcVolumeCacheMapList );
  }
  result = KxReleaseQueuedSpinLock(&LockHandle);
  v21 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v27 = ((unsigned int)result & v33[5]) == 0;
      v33[5] &= result;
      if ( v27 )
        result = KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  __writecr8(v21);
  return result;
}
