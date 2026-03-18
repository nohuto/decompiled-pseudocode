/*
 * XREFs of PpmCheckCustomRun @ 0x14022475C
 * Callers:
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140224690 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckDelayedPeriodicStart @ 0x140389D50 (PpmCheckDelayedPeriodicStart.c)
 *     PpmCheckApplyParkConstraints @ 0x1403CF1A0 (PpmCheckApplyParkConstraints.c)
 *     PopIntSteerSetMode @ 0x1403DEC60 (PopIntSteerSetMode.c)
 *     PpmCheckApplyResetNotification @ 0x14045E84A (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x1405DD354 (PpmParkSetLpiCap.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14069DDE8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmPerfReApplyStates @ 0x140808958 (PpmPerfReApplyStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x14099786C (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     PpmCheckStart @ 0x140224A24 (PpmCheckStart.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KiStartThreadCycleAccumulation @ 0x140345B70 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PpmCheckCustomRun(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _KTHREAD *CurrentThread; // rdx
  struct _KPRCB *v5; // rcx
  _KTHREAD *v6; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  PpmPerfPolicyLock = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  _disable();
  KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL, 0LL);
  _enable();
  PpmCheckStart(a1);
  v5 = KeGetCurrentPrcb();
  v6 = v5->CurrentThread;
  _disable();
  KiStartThreadCycleAccumulation(v5, v6, 0LL);
  _enable();
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
  }
  __writecr8(CurrentIrql);
  KeLeaveCriticalRegion();
}
