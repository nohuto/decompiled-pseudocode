/*
 * XREFs of KiGenericCallDpcInitiatorDpc @ 0x1403C1750
 * Callers:
 *     <none>
 * Callees:
 *     KiInitiateGenericCallDpc @ 0x1402DC9E4 (KiInitiateGenericCallDpc.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiGenericCallDpcInitiatorDpc(__int64 a1, _QWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  int DpcWatchdogCount; // esi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  KiInitiateGenericCallDpc((__int64)CurrentPrcb, a2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 13 )
      LODWORD(v8) = 0x2000;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
    SchedulerAssist[5] |= v8;
  }
  if ( DpcWatchdogCount < CurrentPrcb->DpcWatchdogCount )
    CurrentPrcb->DpcWatchdogCount = DpcWatchdogCount;
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  __writecr8(CurrentIrql);
  return KeSignalGate((__int64)(a2 + 10), 0);
}
