/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x140228820
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x1402288B0 (KeQueryTotalCycleTimeThread.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140789FC0 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x140971DE0 (KeEnableProfiling.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140227260 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140227310 (KiStartThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, unsigned __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v4; // rsi
  struct _KPRCB *v5; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, a2, 0LL);
  KiStartThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0);
  v5 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v5->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v7 = *SchedulerAssist;
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
    }
    while ( v8 != v7 );
    if ( (v7 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v5);
  }
  _enable();
  return v4;
}
