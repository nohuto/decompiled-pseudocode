/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x1402BACC8
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x140204C14 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiStartDebugAccumulation @ 0x14020E480 (KiStartDebugAccumulation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 *     KiCompleteDirectSwitchThread @ 0x1402B9B78 (KiCompleteDirectSwitchThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140349554 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x1403CD7B4 (KiReduceByEffectiveIdleSmtSet.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x1402B2C60 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1402B2D10 (KiStartThreadCycleAccumulation.c)
 */

unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3, 0);
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v5;
}
