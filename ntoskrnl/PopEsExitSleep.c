/*
 * XREFs of PopEsExitSleep @ 0x14099534C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x14085F8B4 (PopEsStartTelemetry.c)
 */

void PopEsExitSleep()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsStartTelemetry();
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
}
