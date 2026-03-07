bool WheaIsCriticalState()
{
  return ObGetCurrentIrql() >= 2u && WheapCriticalStateRefCount > 0;
}
