/*
 * XREFs of PopEsExitSleep @ 0x1409983FC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x140863BD4 (PopEsStartTelemetry.c)
 */

void PopEsExitSleep()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsStartTelemetry();
  PopReleaseRwLock(&PopEsLock);
}
