/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x140ACE284
 * Callers:
 *     VfFailDeviceNode @ 0x1403B3A20 (VfFailDeviceNode.c)
 *     VfFailDriver @ 0x1405CE460 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x1405CE490 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CF524 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405CF708 (MdlInvariantPreProcessing1.c)
 *     VerifierFreeTrackedPool @ 0x1405CFBF0 (VerifierFreeTrackedPool.c)
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     VfMiscCheckKernelAddress @ 0x1405D2528 (VfMiscCheckKernelAddress.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140AC1876 (VfIrpDatabaseCheckExFreePool.c)
 *     IovCompleteRequest @ 0x140AC248C (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x140AC26D0 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x140AC2780 (IovInitializeTimer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC6110 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC6280 (VfAllocateCommonBufferWithBounds.c)
 *     VerifierIoAllocateIrp @ 0x140ACBD00 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateIrpEx @ 0x140ACBDF0 (VerifierIoAllocateIrpEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140ACC0A0 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x140ACC204 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACC2DC (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x140ACC32C (VfIoCompletionCheckState.c)
 *     VfTargetEtwUnregister @ 0x140ACC734 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140ACCC50 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140ACCCCC (ViTargetRemovingCheckEtwWmi.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140ACEDD0 (ViIrpCheckKernelAddressForIrp.c)
 *     VfHandlePoolAlloc @ 0x140AD1FB0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140AD23FC (ViFreeTrackedPool.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140AD3020 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140AD34C0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140AD3620 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140AD386C (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140AD389C (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x140AD4724 (ViErrorFinishReport.c)
 *     VfCheckUserHandle @ 0x140AD4CE4 (VfCheckUserHandle.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140AD58B0 (VfZwNotifyChangeKey_Entry.c)
 *     ViZwCheckApcRequirement @ 0x140AD5ED8 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140AD5F84 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140AD600C (ViZwCheckVirtualAddress.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140AD6100 (ViShutdownWatchdogExecuteDpc.c)
 *     VfPoolCheckForLeaks @ 0x140ADB08C (VfPoolCheckForLeaks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140ADE380 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViWdIrpTimedOut @ 0x140ADF3EC (ViWdIrpTimedOut.c)
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140AE0B10 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140AE0B80 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140AE0CB0 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140AE0D00 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140AE0D90 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140AE0F00 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140AE0F50 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140AE1010 (VfMiscKeReleaseSpinLock_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AE10E0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140AE1200 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140AE1240 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140AE12B0 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VfMiscObReferenceObjectByHandle_Exit @ 0x140AE1530 (VfMiscObReferenceObjectByHandle_Exit.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140AE15E0 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObject_Exit @ 0x140AE1650 (VfMiscObfReferenceObject_Exit.c)
 *     ViMiscCheckKeLowerIrql @ 0x140AE2308 (ViMiscCheckKeLowerIrql.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140AE23AC (ViMiscCheckKeRaiseIrql.c)
 *     ViMiscCheckResourceAcquire @ 0x140AE241C (ViMiscCheckResourceAcquire.c)
 *     ViMiscCheckResourceRelease @ 0x140AE24BC (ViMiscCheckResourceRelease.c)
 *     ViMiscEnforceRule @ 0x140AE2528 (ViMiscEnforceRule.c)
 *     ViMiscExCheckAPCsDisabled @ 0x140AE2574 (ViMiscExCheckAPCsDisabled.c)
 *     ViMiscValidateKeWaitUsage @ 0x140AE25E0 (ViMiscValidateKeWaitUsage.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AE2700 (ViMiscValidateSynchronizationObject.c)
 *     VfCheckForLookaside @ 0x140AE3178 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140AE3240 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE335C (VfLookasideDelete.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140AE3440 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140AE35C0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140AE3700 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140AE3820 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140AE3970 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140AE3AF0 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140AE3C00 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmMapIoSpace @ 0x140AE3FF0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140AE4180 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE4250 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140AE4450 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140AE4540 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140AE4680 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140AE47C0 (VerifierMmUnmapIoSpace.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140AE4A58 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x140AE4B50 (ViMmValidateIrql.c)
 *     VfCheckForResource @ 0x140AE538C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE54D0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE55E4 (VfTrackResource.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AE5B58 (ViCtxCheckAndReleaseIsrState.c)
 *     ExAllocatePoolSanityChecks @ 0x140AE8C7C (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x140AE8DFC (ExFreePoolSanityChecks.c)
 *     MmCheckMdlPages @ 0x140AE9264 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140AE936C (MmCheckMapIoSpace.c)
 *     ViIrqlKeLeaveCriticalRegion_Entry @ 0x140AE9550 (ViIrqlKeLeaveCriticalRegion_Entry.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     CarInitializeRuleViolationDetails @ 0x1405D3DF0 (CarInitializeRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x1405D3FF0 (CarQueryReportActionForTriage.c)
 *     CarReportRuleViolationForTriage @ 0x1405D4450 (CarReportRuleViolationForTriage.c)
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
