/*
 * XREFs of MiGetSubsectionCrossPartitionReferences @ 0x14025BF24
 * Callers:
 *     MiChargeSegmentCommit @ 0x1406202F0 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14025BF44 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 */

__int64 MiGetSubsectionCrossPartitionReferences()
{
  return *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences() + 48) & 0x3FFFFFFF;
}
