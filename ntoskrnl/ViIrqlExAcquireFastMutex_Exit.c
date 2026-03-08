/*
 * XREFs of ViIrqlExAcquireFastMutex_Exit @ 0x140AE5440
 * Callers:
 *     <none>
 * Callees:
 *     VfKeIrqlLogRaise @ 0x140AD2CB0 (VfKeIrqlLogRaise.c)
 */

char *ViIrqlExAcquireFastMutex_Exit()
{
  return VfKeIrqlLogRaise(KeGetCurrentIrql(), 1);
}
