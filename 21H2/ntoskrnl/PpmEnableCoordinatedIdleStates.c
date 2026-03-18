/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x14098A28C
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x14098A510 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14098AAF0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x1405CC1E0 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
}
