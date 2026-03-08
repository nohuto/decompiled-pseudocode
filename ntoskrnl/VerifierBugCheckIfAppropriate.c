/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x140ACA284
 * Callers:
 *     VfFailDeviceNode @ 0x1403AED30 (VfFailDeviceNode.c)
 *     VfFailDriver @ 0x1405CBFB0 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x1405CBFE0 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CD074 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405CD258 (MdlInvariantPreProcessing1.c)
 *     VerifierFreeTrackedPool @ 0x1405CD740 (VerifierFreeTrackedPool.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140ABD876 (VfIrpDatabaseCheckExFreePool.c)
 *     IovCompleteRequest @ 0x140ABE48C (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x140ABE6D0 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x140ABE780 (IovInitializeTimer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC2110 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC2280 (VfAllocateCommonBufferWithBounds.c)
 *     VerifierIoAllocateIrp @ 0x140AC7D00 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateIrpEx @ 0x140AC7DF0 (VerifierIoAllocateIrpEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140AC80A0 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x140AC8204 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140AC82DC (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x140AC832C (VfIoCompletionCheckState.c)
 *     VfTargetEtwUnregister @ 0x140AC8734 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140AC8C50 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140AC8CCC (ViTargetRemovingCheckEtwWmi.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140ACADD0 (ViIrpCheckKernelAddressForIrp.c)
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140ACE3FC (ViFreeTrackedPool.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140ACF020 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140ACF4C0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140ACF620 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140ACF86C (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140ACF89C (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x140AD0724 (ViErrorFinishReport.c)
 *     VfCheckUserHandle @ 0x140AD0CE4 (VfCheckUserHandle.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140AD18B0 (VfZwNotifyChangeKey_Entry.c)
 *     ViZwCheckApcRequirement @ 0x140AD1ED8 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140AD1F84 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140AD200C (ViZwCheckVirtualAddress.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140AD2100 (ViShutdownWatchdogExecuteDpc.c)
 *     VfPoolCheckForLeaks @ 0x140AD708C (VfPoolCheckForLeaks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140ADA380 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViWdIrpTimedOut @ 0x140ADB3EC (ViWdIrpTimedOut.c)
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140ADCB10 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140ADCB80 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140ADCCB0 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140ADCD00 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140ADCD90 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140ADCF00 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140ADCF50 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140ADD010 (VfMiscKeReleaseSpinLock_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140ADD0E0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140ADD200 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140ADD240 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140ADD2B0 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VfMiscObReferenceObjectByHandle_Exit @ 0x140ADD530 (VfMiscObReferenceObjectByHandle_Exit.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140ADD5E0 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObject_Exit @ 0x140ADD650 (VfMiscObfReferenceObject_Exit.c)
 *     ViMiscCheckKeLowerIrql @ 0x140ADE308 (ViMiscCheckKeLowerIrql.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140ADE3AC (ViMiscCheckKeRaiseIrql.c)
 *     ViMiscCheckResourceAcquire @ 0x140ADE41C (ViMiscCheckResourceAcquire.c)
 *     ViMiscCheckResourceRelease @ 0x140ADE4BC (ViMiscCheckResourceRelease.c)
 *     ViMiscEnforceRule @ 0x140ADE528 (ViMiscEnforceRule.c)
 *     ViMiscExCheckAPCsDisabled @ 0x140ADE574 (ViMiscExCheckAPCsDisabled.c)
 *     ViMiscValidateKeWaitUsage @ 0x140ADE5E0 (ViMiscValidateKeWaitUsage.c)
 *     ViMiscValidateSynchronizationObject @ 0x140ADE700 (ViMiscValidateSynchronizationObject.c)
 *     VfCheckForLookaside @ 0x140ADF178 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140ADF240 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140ADF35C (VfLookasideDelete.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140ADF440 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140ADF5C0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140ADF700 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140ADF820 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140ADF970 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140ADFAF0 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140ADFC00 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmMapIoSpace @ 0x140ADFFF0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140AE0180 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE0250 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140AE0450 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140AE0540 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140AE0680 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140AE07C0 (VerifierMmUnmapIoSpace.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140AE0A58 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x140AE0B50 (ViMmValidateIrql.c)
 *     VfCheckForResource @ 0x140AE138C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE14D0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE15E4 (VfTrackResource.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AE1B58 (ViCtxCheckAndReleaseIsrState.c)
 *     ExAllocatePoolSanityChecks @ 0x140AE4C7C (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x140AE4DFC (ExFreePoolSanityChecks.c)
 *     MmCheckMdlPages @ 0x140AE5264 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140AE536C (MmCheckMapIoSpace.c)
 *     ViIrqlKeLeaveCriticalRegion_Entry @ 0x140AE5550 (ViIrqlKeLeaveCriticalRegion_Entry.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CarInitializeRuleViolationDetails @ 0x1405D1940 (CarInitializeRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x1405D1B40 (CarQueryReportActionForTriage.c)
 *     CarReportRuleViolationForTriage @ 0x1405D1FA0 (CarReportRuleViolationForTriage.c)
 */

__int64 __fastcall VerifierBugCheckIfAppropriate(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 BugCheckParameter4)
{
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  unsigned int v11; // edx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  _DWORD v14[4]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v15[10]; // [rsp+40h] [rbp-58h] BYREF

  memset(v15, 0, 0x48uLL);
  CurrentIrql = KeGetCurrentIrql();
  result = CarInitializeRuleViolationDetails(v15);
  if ( (VfRuleClasses & 0x400000) == 0 || CurrentIrql <= 2u )
  {
    v11 = 0;
    v12 = ViVerifierBugcheckAttributes;
    while ( *(_DWORD *)v12 != BugCheckCode || *((_DWORD *)v12 + 1) != BugCheckParameter1 )
    {
      ++v11;
      v12 = (__int64 *)((char *)v12 + 12);
      if ( v11 >= 0xD )
        goto LABEL_7;
    }
    if ( VfVerifyMode < *((_DWORD *)v12 + 2) )
    {
      v13 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
      result = BugCheckParameter4;
      *((_QWORD *)&ViBugcheckLog + v13 + 4) = BugCheckParameter4;
      *((_DWORD *)&ViBugcheckLog + 2 * v13) = BugCheckCode;
      *((_QWORD *)&ViBugcheckLog + v13 + 1) = BugCheckParameter1;
      *((_QWORD *)&ViBugcheckLog + v13 + 2) = BugCheckParameter2;
      *((_QWORD *)&ViBugcheckLog + v13 + 3) = BugCheckParameter3;
      return result;
    }
LABEL_7:
    if ( CurrentIrql > 2u
      || ViLegacyVolatile
      || (int)CarQueryReportActionForTriage(BugCheckCode, BugCheckParameter1, v14) < 0 )
    {
      KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
    }
    v15[2] = BugCheckParameter4;
    v15[0] = BugCheckParameter2;
    v15[1] = BugCheckParameter3;
    return CarReportRuleViolationForTriage(BugCheckCode, (unsigned int)BugCheckParameter1, (__int64)v15);
  }
  return result;
}
