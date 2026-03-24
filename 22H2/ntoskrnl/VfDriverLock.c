/*
 * XREFs of VfDriverLock @ 0x1409C25C8
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405A05F8 (VfIsVerificationEnabledForImage.c)
 *     VfIsDriverSuspect @ 0x1409C2534 (VfIsDriverSuspect.c)
 *     MmIsDriverSuspectForVerifier @ 0x1409C5F80 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409C8630 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C87C8 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409C8B18 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x1409D8840 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409D88C4 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409D98F0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1409D9BA8 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x1409D9F40 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409D9FCC (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x1409EC9E8 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409ECBFC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1409ECD04 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x140A93974 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A93DD8 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A93F94 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
