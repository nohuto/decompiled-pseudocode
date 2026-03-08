/*
 * XREFs of KeResumeClockTimerSafe @ 0x14056D3B4
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140A99280 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9A400 (PnprQuiesceProcessorDpc.c)
 *     PnprWakeProcessors @ 0x140A9AF9C (PnprWakeProcessors.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiResumeClockTimer @ 0x14056D878 (KiResumeClockTimer.c)
 */

__int64 KeResumeClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v2; // rdx
  unsigned __int8 v3; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v5; // r8
  int v6; // eax
  bool v7; // zf
  __int64 result; // rax

  if ( ObGetCurrentIrql() >= 0xDu )
    return KiResumeClockTimer();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 13 )
      LODWORD(v2) = 0x2000;
    else
      v2 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
    SchedulerAssist[5] |= v2;
  }
  KiResumeClockTimer();
  if ( KiIrqlFlags )
  {
    v3 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v3 <= 0xFu && CurrentIrql <= 0xFu && v3 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v7 = (v6 & v5[5]) == 0;
      v5[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
