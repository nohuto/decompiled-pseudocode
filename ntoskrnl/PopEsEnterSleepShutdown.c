/*
 * XREFs of PopEsEnterSleepShutdown @ 0x1409952F8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopCurrentPowerState @ 0x14078F3D0 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x140995498 (PopEsSnapTelemetry.c)
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
