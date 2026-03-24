/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x1409D0D54
 * Callers:
 *     VfFailDeviceNode @ 0x1403A71D0 (VfFailDeviceNode.c)
 *     VfFailDriver @ 0x1405A07E0 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x1405A0810 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x1405A15A4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405A1798 (MdlInvariantPreProcessing1.c)
 *     VerifierFreeTrackedPool @ 0x1405A1CA0 (VerifierFreeTrackedPool.c)
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     IovCompleteRequest @ 0x1409C4FA0 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x1409C51D0 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x1409C5280 (IovInitializeTimer.c)
 *     MmCheckMdlPages @ 0x1409C5D9C (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1409C5EA8 (MmCheckMapIoSpace.c)
 *     VfUtilCheckKernelAddress @ 0x1409C658C (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C6B0C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x1409C9350 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x1409C9620 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1409C9680 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x1409C9850 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x1409C99B4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C9A8C (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x1409C9ADC (VfIoCompletionCheckState.c)
 *     VfAllocateCommonBufferEx @ 0x1409CAB20 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409CACA0 (VfAllocateCommonBufferWithBounds.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409D1888 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409D34D0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D45D0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409D4D00 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D4E70 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x1409D5288 (ViFreeTrackedPool.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x1409D5F50 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x1409D634C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D64C0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x1409D67A4 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x1409D67D4 (VfRemLockReportBadReleaseTag.c)
 *     VfTargetEtwUnregister @ 0x1409D7054 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409D7580 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x1409D75FC (ViTargetRemovingCheckEtwWmi.c)
 *     ViErrorFinishReport @ 0x1409D825C (ViErrorFinishReport.c)
 *     VfCheckUserHandle @ 0x1409DA184 (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409DA420 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409DA598 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x1409DAB10 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1409DAD90 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409DAFF0 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1409DB0B0 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1409DB180 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409DB440 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409DB4D0 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x1409DB610 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409DBEF0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1409DC138 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409DC27C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x1409DC360 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409DC3D0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x1409DC60C (ViKeWaitSanityChecks.c)
 *     VfPoolCheckForLeaks @ 0x1409E0120 (VfPoolCheckForLeaks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409E070C (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x1409E0F60 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409E11A0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409E12F0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409E1410 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x1409E1518 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409E15B4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E16DC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E1E20 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E2200 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E248C (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x1409E25D0 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x1409E2698 (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1409E4C30 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409E4D84 (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x1409E4DC4 (ViExCheckAPCsDisabled.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409E5DE0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409E5ED0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E5FF0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E6110 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E6270 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E6410 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E6500 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1409E6620 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x1409E69A0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1409E6B10 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E6BF0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1409E6DD0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1409E6EC0 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x1409E7000 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x1409E7140 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x1409E71D0 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1409E7588 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x1409E7680 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x1409E7B40 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x1409E7C60 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x1409E7DF0 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x1409E9E70 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x1409EC7F4 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x1409EC8AC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409EC944 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x1409ECDE4 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x1409ECF50 (ExFreePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
