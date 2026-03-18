/*
 * XREFs of GreLockDynamicModeChange @ 0x1C00C4D90
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreLockDynamicModeChange()
{
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
}
