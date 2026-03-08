/*
 * XREFs of HalpVpptInitializePhysicalTimer @ 0x1405079F4
 * Callers:
 *     HalpTimerInitializeVpptClockTimer @ 0x140506B84 (HalpTimerInitializeVpptClockTimer.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140379818 (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExtEnvCriticalFailure @ 0x14051D068 (ExtEnvCriticalFailure.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 HalpVpptInitializePhysicalTimer()
{
  int v0; // ecx
  __int64 InternalData; // rax
  __int64 v2; // rdx
  unsigned int v3; // eax
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  byte_140C62498 = HalpAcquireHighLevelLock(&qword_140C62490);
  if ( *(int **)&HalpVpptQueue != &HalpVpptQueue )
    ExtEnvCriticalFailure(v0, 277, HalpVpptPhysicalTimer, (int)&HalpVpptQueue, 0LL);
  HalpVpptPhysicalTimerTarget = -1;
  InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
  v3 = (*(__int64 (__fastcall **)(__int64))(v2 + 104))(InternalData);
  v4 = (unsigned __int8)byte_140C62498;
  v5 = v3;
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C62490);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return v5;
}
