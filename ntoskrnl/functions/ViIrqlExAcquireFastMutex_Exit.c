char *ViIrqlExAcquireFastMutex_Exit()
{
  return VfKeIrqlLogRaise(KeGetCurrentIrql(), 1);
}
