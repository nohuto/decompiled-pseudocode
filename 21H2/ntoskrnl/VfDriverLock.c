/*
 * XREFs of VfDriverLock @ 0x1409C35B8
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405A08E8 (VfIsVerificationEnabledForImage.c)
 *     VfIsDriverSuspect @ 0x1409C3524 (VfIsDriverSuspect.c)
 *     MmIsDriverSuspectForVerifier @ 0x1409C6F70 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409C9620 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C97B8 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409C9B08 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x1409D9830 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409D98B4 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409DA8E0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1409DAB98 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x1409DAF30 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409DAFBC (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x1409ED9D8 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409EDBEC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1409EDCF4 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x140A94974 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A94DD8 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A94F94 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
