/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x140981BDC
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x140981E80 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1409824C0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x14058A2C0 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((__int64 *)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
}
