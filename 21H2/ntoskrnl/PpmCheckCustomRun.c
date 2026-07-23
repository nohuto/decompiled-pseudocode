/*
 * XREFs of PpmCheckCustomRun @ 0x14037CC28
 * Callers:
 *     PoLatencySensitivityHint @ 0x14037D7B0 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140381C80 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x1403C1650 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x1403C2478 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x140576E40 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x14057DC54 (PpmParkSetLpiCap.c)
 *     PpmPerfReApplyStates @ 0x14077A510 (PpmPerfReApplyStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x14077B4DC (PpmCheckApplyPerfConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14078B79C (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmCheckStart @ 0x1402CED00 (PpmCheckStart.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PpmCheckCustomRun(int a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf

  PpmPerfPolicyLock = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  PpmCheckStart(a1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v4 = KeGetCurrentIrql();
      if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = CurrentPrcb->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v7 & v6[5]) == 0;
        v6[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
