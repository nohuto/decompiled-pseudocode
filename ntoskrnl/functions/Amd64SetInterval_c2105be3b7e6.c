__int64 __fastcall Amd64SetInterval(int a1, int *a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  int ProfileDescriptor; // esi
  unsigned __int8 v7; // cl
  struct _KPRCB *v8; // r10
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  __int64 v22; // r8
  __int64 i; // rcx
  __int64 v24; // rdx
  __int64 v25; // [rsp+40h] [rbp+18h] BYREF

  v25 = 0LL;
  v4 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a1, v5, &v25);
  if ( ProfileDescriptor >= 0 )
  {
    v13 = v25;
    v14 = *a2;
    v15 = *(unsigned __int8 *)(v25 + 28);
    v16 = HIDWORD(Amd64ProfileIntervalLimits[v15]);
    if ( *a2 < v16 )
    {
      *a2 = v16;
      v14 = v16;
    }
    v17 = Amd64ProfileIntervalLimits[v15];
    if ( v14 > v17 )
    {
      *a2 = v17;
      v14 = v17;
    }
    *(_DWORD *)(v13 + 24) = v14;
    KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
    if ( !a1 )
      HalpTimerSetProfilingTarget(*a2, (unsigned int)*a2 * (unsigned __int64)KeGetCurrentPrcb()->MHz / 0xA);
    if ( HalpProfileInterface == &DefaultProfileInterface )
      v22 = HalpCounterStatus;
    else
      v22 = HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number;
    for ( i = 0LL; (unsigned int)i < Amd64NumberCounters; i = (unsigned int)(i + 1) )
    {
      v24 = *(_QWORD *)(v22 + 8 * i);
      if ( *(_DWORD *)(v24 + 32) == a1 && !*(_DWORD *)(v24 + 24) )
        *(_QWORD *)v24 = (unsigned int)*a2;
    }
    return 0LL;
  }
  else
  {
    KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      v7 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v7 >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = v8->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    __writecr8(v4);
    return (unsigned int)ProfileDescriptor;
  }
}
