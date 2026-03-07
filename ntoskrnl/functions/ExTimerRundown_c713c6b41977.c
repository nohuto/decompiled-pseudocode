__int64 ExTimerRundown()
{
  struct _KTHREAD *CurrentThread; // r13
  KIRQL v1; // al
  void **p_StackBase; // r12
  KIRQL v3; // bl
  _QWORD *v4; // rax
  __int64 result; // rax
  ULONG_PTR v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  int v12; // ebx
  unsigned __int64 v13; // r15
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax

  CurrentThread = KeGetCurrentThread();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  p_StackBase = &CurrentThread[1].StackBase;
  while ( 1 )
  {
    v3 = v1;
    v4 = *p_StackBase;
    if ( *p_StackBase == p_StackBase )
      break;
    v6 = (ULONG_PTR)(v4 - 28);
    ObfReferenceObjectWithTag(v4 - 28, 0x746C6644u);
    KxReleaseSpinLock((volatile signed __int64 *)&CurrentThread[1].StackLimit);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (v3 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v3);
    v12 = 1;
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 64));
    if ( (*(_BYTE *)(v6 + 304) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v6 + 80) )
      v12 = ExpCancelTimer((PKTIMER)v6) + 1;
    KxReleaseSpinLock((volatile signed __int64 *)(v6 + 64));
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v11 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    __writecr8(v13);
    ObDereferenceObjectExWithTag(v6, v12);
    v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&CurrentThread[1].StackLimit);
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && v3 <= 0xFu && v18 >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      v20 = v19->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (v3 + 1));
      v11 = (v21 & v20[5]) == 0;
      v20[5] &= v21;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
  }
  result = v3;
  __writecr8(v3);
  return result;
}
