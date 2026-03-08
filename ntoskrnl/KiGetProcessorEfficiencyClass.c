/*
 * XREFs of KiGetProcessorEfficiencyClass @ 0x14036A2D4
 * Callers:
 *     KiSetQuantumTargetThread @ 0x1402270C0 (KiSetQuantumTargetThread.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1402AA2C0 (KeQueryLogicalProcessorRelationship.c)
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KiEndDebugAccumulation @ 0x14036A1E0 (KiEndDebugAccumulation.c)
 *     KiAccumulateProcessorCycleStats @ 0x14036A290 (KiAccumulateProcessorCycleStats.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14037F6F0 (KiConfigureCpuSetSchedulingInformation.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x14037FFF4 (IntPartGetProcessorEfficiencyClass.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiGetProcessorEfficiencyClass(__int64 a1)
{
  char v1; // al

  if ( KeHeteroSystem )
    v1 = *(_BYTE *)(a1 + 34056);
  else
    v1 = *(_BYTE *)(a1 + 34059);
  return v1 != 0;
}
