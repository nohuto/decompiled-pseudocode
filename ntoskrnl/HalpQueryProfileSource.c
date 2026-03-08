/*
 * XREFs of HalpQueryProfileSource @ 0x140505B3C
 * Callers:
 *     HalpQueryProfileInformation @ 0x140861248 (HalpQueryProfileInformation.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpGetProfileDescriptor @ 0x1403781E0 (HalpGetProfileDescriptor.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpQueryProfileSource(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int8 v8; // cl
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v14; // rsi
  int v15; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v19; // edx
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v20 = 0LL;
  if ( a1 < 0x18 )
  {
    v3 = -1073741820;
LABEL_23:
    *a3 = 24;
    return v3;
  }
  v6 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  if ( (int)HalpGetProfileDescriptor(*(_DWORD *)a2, v7, &v20) >= 0 )
  {
    v14 = v20;
    *(_BYTE *)(a2 + 4) = (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v20 + 32)) == 0;
    if ( *(_DWORD *)v14 )
    {
      v15 = *(_DWORD *)(v14 + 24);
    }
    else
    {
      v14 = v20;
      v15 = *(_DWORD *)(32LL * KeGetPcr()->Prcb.Number + HalpProfileData + 24);
    }
    *(_DWORD *)(a2 + 8) = v15;
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v14 + 296);
    KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
    goto LABEL_23;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock);
  if ( KiIrqlFlags )
  {
    v8 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v8 >= 2u )
    {
      v9 = KeGetCurrentPrcb();
      v10 = v9->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v12 = (v11 & v10[5]) == 0;
      v10[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v9);
    }
  }
  __writecr8(v6);
  *a3 = 0;
  return 3221225659LL;
}
