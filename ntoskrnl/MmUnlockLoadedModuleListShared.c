/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x1402824A4
 * Callers:
 *     MiAddWorkingSetEntries @ 0x14026D700 (MiAddWorkingSetEntries.c)
 *     RtlpxLookupFunctionTable @ 0x1402CB3A0 (RtlpxLookupFunctionTable.c)
 *     MiIsDriverPage @ 0x1402D38C0 (MiIsDriverPage.c)
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     RtlPcToFileName @ 0x1403A4E70 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x140631A9C (MiIsAddressInDriverView.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf

  v1 = a1;
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( (unsigned __int8)v1 < 0xFu )
  {
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v6 = (v5 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v5;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v1);
  }
}
