/*
 * XREFs of KeGetCurrentNode @ 0x1403A4DB4
 * Callers:
 *     ExpPartitionCreatePool @ 0x14084A758 (ExpPartitionCreatePool.c)
 * Callees:
 *     <none>
 */

__int64 KeGetCurrentNode()
{
  return KeNodeBlock[KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]];
}
