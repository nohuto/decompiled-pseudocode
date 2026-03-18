/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x140A8C924
 * Callers:
 *     VfFailDeviceNode @ 0x1403B6480 (VfFailDeviceNode.c)
 *     VfFailDriver @ 0x1405FE0A0 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x1405FE0D0 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x1405FF19C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405FF390 (MdlInvariantPreProcessing1.c)
 *     VerifierFreeTrackedPool @ 0x1405FF880 (VerifierFreeTrackedPool.c)
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 *     VerifierKeEnterCriticalRegion @ 0x140A7F340 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x140A7F3D0 (VerifierKeLeaveCriticalRegion.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140A7FA0C (VfIrpDatabaseCheckExFreePool.c)
 *     IovCompleteRequest @ 0x140A805EC (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x140A80820 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x140A808D0 (IovInitializeTimer.c)
 *     MmCheckMdlPages @ 0x140A814F8 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140A815FC (MmCheckMapIoSpace.c)
 *     VfAllocateCommonBufferEx @ 0x140A846E0 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140A84860 (VfAllocateCommonBufferWithBounds.c)
 *     VerifierIoAllocateIrp @ 0x140A8A3D0 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateIrpEx @ 0x140A8A4C0 (VerifierIoAllocateIrpEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140A8A770 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140A8A9AC (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x140A8A9FC (VfIoCompletionCheckState.c)
 *     VfTargetEtwUnregister @ 0x140A8AE08 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140A8B320 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140A8B39C (ViTargetRemovingCheckEtwWmi.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140A8D4A4 (ViIrpCheckKernelAddressForIrp.c)
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140A90A7C (ViFreeTrackedPool.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140A91630 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140A91AD0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140A91C30 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140A91E7C (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140A91EAC (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x140A92D34 (ViErrorFinishReport.c)
 *     VfCheckUserHandle @ 0x140A9466C (VfCheckUserHandle.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140A95230 (VfZwNotifyChangeKey_Entry.c)
 *     ViZwCheckApcRequirement @ 0x140A95858 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140A95904 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140A9598C (ViZwCheckVirtualAddress.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140A95A80 (ViShutdownWatchdogExecuteDpc.c)
 *     VfPoolCheckForLeaks @ 0x140A9A25C (VfPoolCheckForLeaks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140A9C4E0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViWdIrpTimedOut @ 0x140A9D340 (ViWdIrpTimedOut.c)
 *     VfCheckForLookaside @ 0x140A9EFF8 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140A9F0C0 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140A9F1DC (VfLookasideDelete.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140A9F2C0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140A9F440 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140A9F580 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140A9F6A0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140A9F7F0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140A9F970 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140A9FA80 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmMapIoSpace @ 0x140A9FE70 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140AA0000 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AA00D0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140AA02D0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140AA03C0 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140AA0500 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140AA0640 (VerifierMmUnmapIoSpace.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140AA08D8 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x140AA09D0 (ViMmValidateIrql.c)
 *     VfCheckForResource @ 0x140AA144C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AA1590 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AA16A4 (VfTrackResource.c)
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140AA3CA0 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140AA3D10 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140AA3E60 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140AA3EB0 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140AA3F40 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140AA41A0 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140AA41F0 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeReleaseSpinLock_Entry @ 0x140AA42B0 (VfMiscKeReleaseSpinLock_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AA4380 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140AA44A0 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140AA44E0 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140AA4550 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VfMiscObReferenceObjectByHandle_Exit @ 0x140AA4700 (VfMiscObReferenceObjectByHandle_Exit.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140AA47B0 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObject_Exit @ 0x140AA4820 (VfMiscObfReferenceObject_Exit.c)
 *     ViMiscCheckKeLowerIrql @ 0x140AA55E8 (ViMiscCheckKeLowerIrql.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140AA568C (ViMiscCheckKeRaiseIrql.c)
 *     ViMiscCheckResourceAcquire @ 0x140AA56FC (ViMiscCheckResourceAcquire.c)
 *     ViMiscCheckResourceRelease @ 0x140AA579C (ViMiscCheckResourceRelease.c)
 *     ViMiscEnforceRule @ 0x140AA5808 (ViMiscEnforceRule.c)
 *     ViMiscExCheckAPCsDisabled @ 0x140AA5854 (ViMiscExCheckAPCsDisabled.c)
 *     ViMiscValidateKeWaitUsage @ 0x140AA58C0 (ViMiscValidateKeWaitUsage.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AA59E0 (ViMiscValidateSynchronizationObject.c)
 *     ExAllocatePoolSanityChecks @ 0x140AA6EAC (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x140AA7018 (ExFreePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CarInitializeRuleViolationDetails @ 0x1406039D0 (CarInitializeRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x140603BD0 (CarQueryReportActionForTriage.c)
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
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
