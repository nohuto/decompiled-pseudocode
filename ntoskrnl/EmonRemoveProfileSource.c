/*
 * XREFs of EmonRemoveProfileSource @ 0x14051BF80
 * Callers:
 *     <none>
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpRemoveProfileSourceFromList @ 0x140505E80 (HalpRemoveProfileSourceFromList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EmonRemoveProfileSource(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // edi
  ULONG ActiveProcessorCount; // r14d
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)a1;
  v2 = 0;
  v20 = 0LL;
  if ( v1 <= 0x24 )
    return 3221225659LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v6 = 0;
  if ( ActiveProcessorCount )
  {
    while ( 1 )
    {
      if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(a1 + 8), v6) )
      {
        v7 = HalpCounterStatus;
        if ( HalpProfileInterface != &DefaultProfileInterface )
          v7 = HalpCounterStatus + 8LL * (unsigned int)(HalpNumberOfCounters * v6);
        v8 = 0;
        if ( EmonNumberCounters )
          break;
      }
LABEL_11:
      if ( ++v6 >= ActiveProcessorCount )
        goto LABEL_12;
    }
    while ( *(_DWORD *)(*(_QWORD *)v7 + 24LL) == 3 || *(_DWORD *)(*(_QWORD *)v7 + 32LL) != v1 )
    {
      ++v8;
      v7 += 8LL;
      if ( v8 >= EmonNumberCounters )
        goto LABEL_11;
    }
    return 2147483665LL;
  }
  else
  {
LABEL_12:
    v9 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
    v11 = HalpRemoveProfileSourceFromList((int *)a1, v10, &v20);
    KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
    v12 = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = (unsigned int)(v9 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v9);
    if ( v11 )
    {
      v18 = v20;
      HalpMmAllocCtxFree(v12, *(_QWORD *)(v20 + 296));
      HalpMmAllocCtxFree(v19, v18);
      --HalpProfileSourceDescriptorCount;
    }
    else if ( !v20 )
    {
      return (unsigned int)-1073741823;
    }
    return v2;
  }
}
