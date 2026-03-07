char __fastcall CcReapPrivateVolumeCachemapWorkerThread(_QWORD *a1)
{
  __int64 v1; // rdi
  _QWORD **v3; // r14
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r15
  _QWORD *v7; // rcx
  unsigned __int64 OldIrql; // rbp
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = a1[7];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (_QWORD **)(v1 + 80);
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    v5 = *v4;
    v6 = v4 - 72;
    v7 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v7 != v4 )
      goto LABEL_16;
    *v7 = v5;
    *(_QWORD *)(v5 + 8) = v7;
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
    CcReapPrivateVolumeCachemap(v6);
  }
  v9 = *(_QWORD **)(v1 + 104);
  if ( *v9 != v1 + 96 )
LABEL_16:
    __fastfail(3u);
  a1[1] = v9;
  *a1 = v1 + 96;
  *v9 = a1;
  *(_QWORD *)(v1 + 104) = a1;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v10 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v16 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  __writecr8(v10);
  return CcDereferencePartition(v1);
}
