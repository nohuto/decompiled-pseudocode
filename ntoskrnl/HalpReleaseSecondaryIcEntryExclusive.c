/*
 * XREFs of HalpReleaseSecondaryIcEntryExclusive @ 0x140518028
 * Callers:
 *     HalpDeleteSecondaryIcEntry @ 0x14051787C (HalpDeleteSecondaryIcEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall HalpReleaseSecondaryIcEntryExclusive(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v6; // eax
  _DWORD *SchedulerAssist; // r8
  bool v8; // zf

  v2 = a2;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF);
  KxReleaseSpinLock((volatile signed __int64 *)&SecondaryIcListSpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return KeSetEvent((PRKEVENT)(a1 + 120), 0, 0);
}
