/*
 * XREFs of VfDriverLock @ 0x1409C25B8
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405A06B8 (VfIsVerificationEnabledForImage.c)
 *     VfIsDriverSuspect @ 0x1409C2524 (VfIsDriverSuspect.c)
 *     MmIsDriverSuspectForVerifier @ 0x1409C5F70 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409C8620 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C87B8 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409C8B08 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x1409D8830 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409D88B4 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409D98E0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1409D9B98 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x1409D9F30 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409D9FBC (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x1409EC9D8 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409ECBEC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1409ECCF4 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x140A93974 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A93DD8 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A93F94 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
