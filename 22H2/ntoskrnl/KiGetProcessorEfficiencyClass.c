/*
 * XREFs of KiGetProcessorEfficiencyClass @ 0x14020E8F4
 * Callers:
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KiEndDebugAccumulation @ 0x14020E610 (KiEndDebugAccumulation.c)
 *     KiAccumulateCycleStats @ 0x14020E7E0 (KiAccumulateCycleStats.c)
 *     KiAccumulateProcessorCycleStats @ 0x14020E8B0 (KiAccumulateProcessorCycleStats.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiSetQuantumTargetThread @ 0x1402B2AC0 (KiSetQuantumTargetThread.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x1402BF080 (KeRemovePriQueue.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305E80 (KeQueryLogicalProcessorRelationship.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403831E0 (KiConfigureCpuSetSchedulingInformation.c)
 *     IntPartGetProcessorEfficiencyClass @ 0x140387714 (IntPartGetProcessorEfficiencyClass.c)
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
