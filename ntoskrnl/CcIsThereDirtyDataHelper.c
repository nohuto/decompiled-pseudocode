/*
 * XREFs of CcIsThereDirtyDataHelper @ 0x14039B220
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcIsThereDirtyDataHelper(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // r13
  _QWORD **v4; // r12
  int v6; // esi
  _QWORD *v7; // r14
  __int64 v8; // rbx
  int v9; // edx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v3 = (KSPIN_LOCK *)(a1 + 768);
  v4 = (_QWORD **)(a1 + 656);
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v7 = *v4;
  v8 = (__int64)(*v4 - 17);
  if ( *v4 == v4 )
  {
LABEL_6:
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 152);
      if ( (v9 & 0x800) == 0
        && *(_QWORD *)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) == *(_QWORD *)a3
        && *(_DWORD *)(v8 + 112)
        && (*(_DWORD *)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0 )
      {
        break;
      }
      if ( (unsigned int)++v6 >= 0x14 && (v9 & 0x820) == 0 )
      {
        *(_DWORD *)(v8 + 152) |= 0x20u;
        ++*(_DWORD *)(v8 + 112);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v13 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          v14 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
          {
            v15 = KeGetCurrentPrcb();
            v16 = v15->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v18 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        __writecr8(v13);
        v6 = 0;
        KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
        *(_DWORD *)(v8 + 152) &= ~0x20u;
        --*(_DWORD *)(v8 + 112);
      }
      v8 = *v7 - 136LL;
      v7 = (_QWORD *)*v7;
      if ( v7 == v4 )
        goto LABEL_6;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v12 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v19 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    __writecr8(v12);
    *(_BYTE *)(a3 + 8) = 1;
    return 0;
  }
}
