/*
 * XREFs of VfDriverUnlock @ 0x1409C88FC
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405A05F8 (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x140A93974 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A93DD8 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A93F94 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x14035F9C0 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
}
