/*
 * XREFs of VfDriverUnlock @ 0x140AC7860
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405CBDD8 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CCA80 (VfDriverRemoveAllDifVerification.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B93B7C (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140B93D2C (VfXdvExcludeParseRegistryString.c)
 *     VfTriageAddDrivers @ 0x140B93E98 (VfTriageAddDrivers.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
