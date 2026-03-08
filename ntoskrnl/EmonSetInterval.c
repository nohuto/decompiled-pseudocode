/*
 * XREFs of EmonSetInterval @ 0x140378050
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpGetProfileDescriptor @ 0x1403781E0 (HalpGetProfileDescriptor.c)
 *     HalpTimerSetProfilingTarget @ 0x140378214 (HalpTimerSetProfilingTarget.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EmonSetInterval(unsigned int a1, unsigned int *a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  int ProfileDescriptor; // esi
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int64 i; // rcx
  __int64 v14; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax
  __int64 v25; // [rsp+40h] [rbp+18h] BYREF

  v25 = 0LL;
  v4 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a1, v5, &v25);
  if ( ProfileDescriptor < 0 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
    return (unsigned int)ProfileDescriptor;
  }
  else
  {
    v7 = v25;
    v8 = *a2;
    v9 = *(unsigned __int8 *)(v25 + 28);
    v10 = HIDWORD(EmonProfileIntervalLimits[v9]);
    if ( *a2 < v10 )
    {
      *a2 = v10;
      v8 = v10;
    }
    v11 = EmonProfileIntervalLimits[v9];
    if ( v8 > v11 )
    {
      *a2 = v11;
      v8 = v11;
    }
    *(_DWORD *)(v7 + 24) = v8;
    KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      v21 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v20 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    __writecr8(v4);
    if ( !a1 )
      HalpTimerSetProfilingTarget(*a2, *a2 * (unsigned __int64)KeGetCurrentPrcb()->MHz / 0xA);
    if ( HalpProfileInterface == &DefaultProfileInterface )
      v12 = HalpCounterStatus;
    else
      v12 = HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number;
    for ( i = 0LL; (unsigned int)i < EmonNumberCounters; i = (unsigned int)(i + 1) )
    {
      v14 = *(_QWORD *)(v12 + 8 * i);
      if ( *(_DWORD *)(v14 + 32) == a1 && !*(_DWORD *)(v14 + 24) )
        *(_QWORD *)v14 = *a2;
    }
    return 0LL;
  }
}
