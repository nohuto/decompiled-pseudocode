/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x14036A030
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402AF3E4 (KiRemoveThreadFromSchedulingGroup.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     KiStartDebugAccumulation @ 0x1403694D0 (KiStartDebugAccumulation.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140369DE4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiCompleteDirectSwitchThread @ 0x140369F84 (KiCompleteDirectSwitchThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x1403C8C94 (KiReduceByEffectiveIdleSmtSet.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140227260 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140227310 (KiStartThreadCycleAccumulation.c)
 */

unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3, 0LL);
  KiStartThreadCycleAccumulation(a1, a2, 0);
  return v5;
}
