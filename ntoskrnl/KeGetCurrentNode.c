/*
 * XREFs of KeGetCurrentNode @ 0x14039F7D4
 * Callers:
 *     ExpPartitionCreatePool @ 0x1408480E8 (ExpPartitionCreatePool.c)
 * Callees:
 *     <none>
 */

__int64 KeGetCurrentNode()
{
  return KeNodeBlock[KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]];
}
