/*
 * XREFs of VfDriverUnlock @ 0x140ACB860
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405CE288 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CEF30 (VfDriverRemoveAllDifVerification.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B97D8C (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140B97F3C (VfXdvExcludeParseRegistryString.c)
 *     VfTriageAddDrivers @ 0x140B980A8 (VfTriageAddDrivers.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402AFF40 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
