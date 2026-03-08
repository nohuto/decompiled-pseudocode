/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x14097EB2C
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x14097EDD0 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14097F410 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x140587D90 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
}
