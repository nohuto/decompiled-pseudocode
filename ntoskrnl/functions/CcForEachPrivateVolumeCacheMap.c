char __fastcall CcForEachPrivateVolumeCacheMap(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, __int64),
        __int64 a3)
{
  char v4; // r14
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  unsigned __int64 OldIrql; // rdi
  int v9; // eax
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int128 v26; // [rsp+38h] [rbp-18h]
  __int64 v27; // [rsp+48h] [rbp-8h]

  v27 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v26 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v5 = *(_QWORD **)(a1 + 32);
  do
  {
    if ( v5 == (_QWORD *)(a1 + 32) )
      break;
    v6 = (__int64)(v5 - 72);
    v7 = v5;
    ++*((_DWORD *)v5 - 143);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    v4 = a2(a1, v6, a3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    v9 = CcDecrementPrivateVolumeUseCount(v6);
    v5 = (_QWORD *)*v7;
    if ( !v9 )
    {
      v17 = *(_QWORD *)(v6 + 592);
      v18 = *(_QWORD **)(v6 + 600);
      if ( *(_QWORD *)(v17 + 8) != v6 + 592
        || *v18 != v6 + 592
        || (*v18 = v17,
            *(_QWORD *)(v17 + 8) = v18,
            v19 = (_QWORD *)*v7,
            v20 = (_QWORD *)v7[1],
            *(_QWORD **)(*v7 + 8LL) != v7)
        || (_QWORD *)*v20 != v7 )
      {
        __fastfail(3u);
      }
      *v20 = v19;
      v19[1] = v20;
      CcPostPVCMForDeleteToPartition(v6, 1);
    }
  }
  while ( v4 );
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v10 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v16 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  __writecr8(v10);
  return v4;
}
