/*
 * XREFs of Amd64EnableMonitoring @ 0x140526CE0
 * Callers:
 *     <none>
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpGetProfileDescriptor @ 0x1403781E0 (HalpGetProfileDescriptor.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     Amd64AllocateCounter @ 0x140526678 (Amd64AllocateCounter.c)
 *     Amd64ConfigureCounter @ 0x140526AA0 (Amd64ConfigureCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall Amd64EnableMonitoring(signed __int32 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v9; // rbp
  __int64 v10; // rdx
  int ProfileDescriptor; // ebx
  __int64 v12; // rdi
  int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r10d
  int v18; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  char v25[4]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-24h] BYREF
  __int64 v27[4]; // [rsp+38h] [rbp-20h] BYREF

  v26 = 0;
  v27[0] = 0LL;
  v25[0] = 0;
  v9 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a2, v10, v27);
  if ( ProfileDescriptor >= 0 )
  {
    v12 = v27[0];
    if ( !(unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v27[0] + 32), KeGetPcr()->Prcb.Number) )
    {
      ProfileDescriptor = -1073741637;
      goto LABEL_21;
    }
    if ( v12 && *(_DWORD *)v12 == 32 && a1 == 1 )
    {
      *a4 = -1;
      *a5 = -1073741591;
      *a3 = 2;
LABEL_8:
      ProfileDescriptor = 0;
      goto LABEL_21;
    }
    ProfileDescriptor = Amd64AllocateCounter(a1, v12, &v26, v25);
    if ( ProfileDescriptor < 0 )
      goto LABEL_21;
    v13 = Amd64NumberDataFabricCounters;
    v14 = Amd64NumberCoreCounters;
    v15 = Amd64NumberDataFabricCounters + Amd64NumberCoreCounters;
    if ( v25[0] )
    {
      v16 = v26;
      *a4 = v26;
      if ( v16 < v15 )
      {
        if ( v16 >= v14 )
          v16 = v16 - v14 + 6;
      }
      else
      {
        v16 = v16 - v13 - v14 + 10;
      }
      *a5 = v16;
      *a3 = *(_DWORD *)(v12 + 316);
      goto LABEL_8;
    }
    v17 = v26;
    *a4 = v26;
    v18 = v17;
    if ( v17 < v15 )
    {
      if ( v17 >= v14 )
        v18 = v17 - v14 + 6;
    }
    else
    {
      v18 = v17 - v13 - v14 + 10;
    }
    *a5 = v18;
    *a3 = *(_DWORD *)(v12 + 316);
    Amd64ConfigureCounter(v17, 1, *(unsigned int *)(v12 + 24), *(_QWORD *)(v12 + 304), a1 == 0);
  }
LABEL_21:
  KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v23 = (v22 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v22;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  return (unsigned int)ProfileDescriptor;
}
