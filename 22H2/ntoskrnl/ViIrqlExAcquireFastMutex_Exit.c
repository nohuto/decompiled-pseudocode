/*
 * XREFs of ViIrqlExAcquireFastMutex_Exit @ 0x140AE9440
 * Callers:
 *     <none>
 * Callees:
 *     VfKeIrqlLogRaise @ 0x140AD6CB0 (VfKeIrqlLogRaise.c)
 */

char *ViIrqlExAcquireFastMutex_Exit()
{
  return VfKeIrqlLogRaise(KeGetCurrentIrql(), 1);
}
