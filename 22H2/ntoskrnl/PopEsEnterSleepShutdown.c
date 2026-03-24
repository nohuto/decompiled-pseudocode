/*
 * XREFs of PopEsEnterSleepShutdown @ 0x1407790DC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PopCurrentPowerState @ 0x1406F1B8C (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x140779130 (PopEsSnapTelemetry.c)
 */

void PopEsEnterSleepShutdown()
{
  __int64 v0; // rdx
  _OWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v1, 0, sizeof(v1));
  PopCurrentPowerState(v1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsSnapTelemetry(v1, v0);
  PopEsLastStateChangeTimeStamp = 0LL;
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
}
