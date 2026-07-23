/*
 * XREFs of VfDriverUnlock @ 0x1409C98EC
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405A08E8 (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x140A94974 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A94DD8 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A94F94 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
