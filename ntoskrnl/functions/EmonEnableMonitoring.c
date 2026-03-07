__int64 __fastcall EmonEnableMonitoring(int a1, int a2, _DWORD *a3, unsigned int *a4, int *a5)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  int ProfileDescriptor; // edi
  __int64 v13; // rbx
  __int64 v14; // r10
  unsigned int v15; // ecx
  int v16; // edx
  __int64 v17; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned int v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+38h] [rbp-30h] BYREF
  __int64 v26; // [rsp+40h] [rbp-28h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v24 = 0;
  v9 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a2, v10, &v25);
  if ( ProfileDescriptor >= 0 )
  {
    v13 = v25;
    v14 = v25;
    if ( *(_DWORD *)(v25 + 312) != 37 && (int)HalpGetProfileDescriptor(*(_DWORD *)(v25 + 312), v11, &v26) >= 0 )
    {
      v13 = v26;
      v25 = v26;
      v14 = v26;
    }
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v14 + 32), KeGetPcr()->Prcb.Number) )
    {
      ProfileDescriptor = EmonAllocateCounter(a1, v13, a2, (int *)&v24);
      if ( ProfileDescriptor >= 0 )
      {
        v15 = v24;
        v16 = v24;
        if ( v24 >= EmonNumberArchCounters )
          v16 = (v24 - EmonNumberArchCounters) | 0x40000000;
        *a5 = v16;
        v17 = v25;
        *a4 = v15;
        *a3 = 1;
        EmonConfigureCounter(v15, 1, *(unsigned int *)(v17 + 24), *(_DWORD *)(v13 + 304), a1 == 0);
      }
    }
    else
    {
      ProfileDescriptor = -1073741637;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v22 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  return (unsigned int)ProfileDescriptor;
}
