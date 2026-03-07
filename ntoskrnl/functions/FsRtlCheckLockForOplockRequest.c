char __fastcall FsRtlCheckLockForOplockRequest(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rsi
  char v4; // di
  unsigned __int64 v5; // rbx
  KIRQL v6; // al
  volatile signed __int64 *v7; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v17; // eax

  v2 = *(unsigned __int64 **)(a1 + 24);
  if ( !v2 || !v2[4] && !v2[5] || !*a2 )
    return 1;
  if ( *(_DWORD *)(a1 + 88) )
    return 0;
  v4 = 1;
  v5 = *a2 - 1LL;
  v6 = KeAcquireSpinLockRaiseToDpc(v2 + 3);
  v7 = (volatile signed __int64 *)(v2 + 3);
  v8 = v6;
  if ( v5 >= *v2 )
  {
    KxReleaseSpinLock(v7);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    v4 = 0;
  }
  else
  {
    KxReleaseSpinLock(v7);
    if ( KiIrqlFlags )
    {
      v9 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = v10->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
  }
  __writecr8(v8);
  return v4;
}
