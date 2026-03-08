/*
 * XREFs of VfDriverLock @ 0x140AC773C
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1405CBDD8 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CCA80 (VfDriverRemoveAllDifVerification.c)
 *     MmIsDriverSuspectForVerifier @ 0x140ABF060 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140AC72D8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140AC7498 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140AC7618 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140AC7778 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140AC7934 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140AD7288 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140AD744C (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x140AD7704 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140AD7A14 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140AD7AB4 (VfSuspectDriversUnloadCallback.c)
 *     VfThunkAddDriverThunks @ 0x140AD7F7C (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140AD8020 (VfThunkAddSpecialDriverThunks.c)
 *     VfAddVerifierEntry @ 0x140ADA630 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140ADA7E8 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140ADA920 (VfSetVerifierInformationEx.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B93B7C (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140B93D2C (VfXdvExcludeParseRegistryString.c)
 *     VfTriageAddDrivers @ 0x140B93E98 (VfTriageAddDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
