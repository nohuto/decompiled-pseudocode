/*
 * XREFs of VfDriverLock @ 0x140A89D58
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405FDEC0 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405FEBA0 (VfDriverRemoveAllDifVerification.c)
 *     MmIsDriverSuspectForVerifier @ 0x140A816C0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140A898F0 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140A89AB0 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140A89C30 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140A89D94 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140A89FE0 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140A932F4 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140A93398 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140A9A468 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140A9A640 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x140A9A8F8 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140A9AC40 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140A9ACE0 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x140A9C668 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140A9C820 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140A9C958 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x140B53724 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B53B88 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140B53D38 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
