/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x14022F230
 * Callers:
 *     PspRevertContainerImpersonation @ 0x14021FAA0 (PspRevertContainerImpersonation.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x140241B40 (KeRemovePriQueue.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     KeSetPriorityThread @ 0x140257340 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1402586C0 (KeSetBasePriorityThread.c)
 *     KiCompleteDirectSwitchThread @ 0x140262A58 (KiCompleteDirectSwitchThread.c)
 *     KeYieldExecution @ 0x1402F64D0 (KeYieldExecution.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402FFA40 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x14030DBC4 (KiReduceByEffectiveIdleSmtSet.c)
 *     KeBoostPriorityThread @ 0x140353A70 (KeBoostPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14035AEA4 (KeSetPriorityAndQuantumProcess.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035D718 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x140513408 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiStartDebugAccumulation @ 0x14051E3AC (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x140230BD0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x140230CF0 (KiEndThreadAccountingPeriod.c)
 */

unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  bool v10; // zf

  *(_BYTE *)(a1 + 32) = 1;
  v6 = __rdtsc();
  v7 = v6 - *(_QWORD *)(a1 + 32448);
  v8 = v7 + *(_QWORD *)(a2 + 72);
  v9 = v7 + *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v8;
  if ( v9 > 0xFFFFFFFF )
    LODWORD(v9) = -1;
  *(_QWORD *)(a1 + 32448) = v6;
  v10 = (*(_BYTE *)(a2 + 2) & 0x3E) == 0;
  *(_DWORD *)(a2 + 80) = v9;
  if ( !v10 )
    KiEndThreadAccountingPeriod(a1, a2);
  if ( a3 )
    *a3 = v6;
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v8;
}
