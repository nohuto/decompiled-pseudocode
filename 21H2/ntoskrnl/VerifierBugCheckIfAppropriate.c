/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x1409D1D54
 * Callers:
 *     VfFailDeviceNode @ 0x1403A7320 (VfFailDeviceNode.c)
 *     VfFailDriver @ 0x1405A0A10 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x1405A0A40 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x1405A17D4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405A19C8 (MdlInvariantPreProcessing1.c)
 *     VerifierFreeTrackedPool @ 0x1405A1ED0 (VerifierFreeTrackedPool.c)
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     IovCompleteRequest @ 0x1409C5FA0 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x1409C61D0 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x1409C6280 (IovInitializeTimer.c)
 *     MmCheckMdlPages @ 0x1409C6D9C (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1409C6EA8 (MmCheckMapIoSpace.c)
 *     VfUtilCheckKernelAddress @ 0x1409C758C (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C7B0C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x1409CA350 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x1409CA620 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1409CA680 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x1409CA850 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x1409CA9B4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CAA8C (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x1409CAADC (VfIoCompletionCheckState.c)
 *     VfAllocateCommonBufferEx @ 0x1409CBB20 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409CBCA0 (VfAllocateCommonBufferWithBounds.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409D2888 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409D44D0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409D5D00 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D5E70 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x1409D6288 (ViFreeTrackedPool.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x1409D6F50 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x1409D734C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D74C0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x1409D77A4 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x1409D77D4 (VfRemLockReportBadReleaseTag.c)
 *     VfTargetEtwUnregister @ 0x1409D8054 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409D8580 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x1409D85FC (ViTargetRemovingCheckEtwWmi.c)
 *     ViErrorFinishReport @ 0x1409D925C (ViErrorFinishReport.c)
 *     VfCheckUserHandle @ 0x1409DB184 (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409DB420 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409DB598 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x1409DBB10 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1409DBD90 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409DBFF0 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1409DC0B0 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1409DC180 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409DC440 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409DC4D0 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x1409DC610 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409DCEF0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1409DD138 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409DD27C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x1409DD360 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409DD3D0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x1409DD60C (ViKeWaitSanityChecks.c)
 *     VfPoolCheckForLeaks @ 0x1409E1120 (VfPoolCheckForLeaks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409E170C (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x1409E1F60 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409E21A0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409E22F0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409E2410 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x1409E2518 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409E25B4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E26DC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E2E20 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E3200 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E348C (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x1409E35D0 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x1409E3698 (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1409E5C30 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409E5D84 (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x1409E5DC4 (ViExCheckAPCsDisabled.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409E6DE0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409E6ED0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E6FF0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E7110 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E7270 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E7410 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E7500 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1409E7620 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x1409E79A0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1409E7B10 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E7BF0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1409E7DD0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1409E7EC0 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x1409E8000 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x1409E8140 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x1409E81D0 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1409E8588 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x1409E8680 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x1409E8B40 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x1409E8C60 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x1409E8DF0 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x1409EAE70 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x1409ED7F4 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x1409ED8AC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409ED944 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x1409EDDE4 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x1409EDF50 (ExFreePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierBugCheckIfAppropriate(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 BugCheckParameter4)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned int v11; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0;
  if ( (MmVerifierData & 0x400000) != 0 )
  {
    if ( CurrentIrql > 2u )
      return result;
    if ( ViXdvTipUtils )
    {
      if ( (VfFlightOptions & 1) == 0 || !(*(unsigned int (__fastcall **)(_QWORD))(ViXdvTipUtils + 16))(BugCheckCode) )
        return (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, ULONG_PTR, ULONG_PTR, __int64))(ViXdvTipUtils + 8))(
                 BugCheckCode,
                 BugCheckParameter1,
                 BugCheckParameter2,
                 BugCheckParameter3,
                 BugCheckParameter4);
    }
    else
    {
      result = VfFlightOptions & 1;
      if ( !(_BYTE)result )
        return result;
    }
  }
  v12 = ViVerifierBugcheckAttributes;
  while ( *(_DWORD *)v12 != BugCheckCode || *((_DWORD *)v12 + 1) != BugCheckParameter1 )
  {
    ++v11;
    v12 = (__int64 *)((char *)v12 + 12);
    if ( v11 >= 0xD )
      goto LABEL_13;
  }
  if ( VfVerifyMode >= *((_DWORD *)v12 + 2) )
LABEL_13:
    KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  v13 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
  result = BugCheckParameter4;
  *((_QWORD *)&ViBugcheckLog + v13 + 4) = BugCheckParameter4;
  *((_DWORD *)&ViBugcheckLog + 2 * v13) = BugCheckCode;
  *((_QWORD *)&ViBugcheckLog + v13 + 1) = BugCheckParameter1;
  *((_QWORD *)&ViBugcheckLog + v13 + 2) = BugCheckParameter2;
  *((_QWORD *)&ViBugcheckLog + v13 + 3) = BugCheckParameter3;
  return result;
}
