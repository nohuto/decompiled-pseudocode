/*
 * XREFs of KiDpcWatchdogCounterReset @ 0x1402DAE78
 * Callers:
 *     KeAccumulateTicks @ 0x14022F310 (KeAccumulateTicks.c)
 *     KiDpcWatchdog @ 0x14057A100 (KiDpcWatchdog.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x1405FA514 (EtwTraceCumulativeDpcSoftTimeout.c)
 */

__int64 __fastcall KiDpcWatchdogCounterReset(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  int v3; // r9d
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 13 )
      LODWORD(v6) = 0x2000;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
    SchedulerAssist[5] |= v6;
  }
  v3 = *(_DWORD *)(a1 + 13272);
  if ( v3 && *(_DWORD *)(a1 + 32428) >= v3 )
    EtwTraceCumulativeDpcSoftTimeout(*(_QWORD *)(a1 + 8), a1);
  *(_DWORD *)(a1 + 32428) = 0;
  if ( KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v10 & v9[5]) == 0;
      v9[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
