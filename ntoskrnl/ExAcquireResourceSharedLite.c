/*
 * XREFs of ExAcquireResourceSharedLite @ 0x14025D790
 * Callers:
 *     SeSecurityAttributePresent @ 0x1402464F0 (SeSecurityAttributePresent.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140247208 (SepCanTokenMatchAllPackageSid.c)
 *     SepFilterCheck @ 0x140263850 (SepFilterCheck.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x14029894C (SeTokenGetNoChildProcessRestricted.c)
 *     SepAcquireOrderedReadLocks @ 0x1402E9D68 (SepAcquireOrderedReadLocks.c)
 *     IopCreateSecurityCheck @ 0x1402ED19C (IopCreateSecurityCheck.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1402EF41C (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1402FA04C (SeTokenGetRedirectionTrustPolicy.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SepTrustLevelCheck @ 0x14033DC28 (SepTrustLevelCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x14035CF08 (LdrpKrnGetDataTableEntry.c)
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140388FBC (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiDeleteBootRange @ 0x14038BEB8 (MiDeleteBootRange.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x14053CAE0 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x14053CDA0 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x14054DAD0 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x140551EC0 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x1405B6A9C (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1405B6DD8 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     VfDriverRemoveAllDifVerification @ 0x1405CCA80 (VfDriverRemoveAllDifVerification.c)
 *     DifExAcquireResourceSharedLiteWrapper @ 0x1405D4DB0 (DifExAcquireResourceSharedLiteWrapper.c)
 *     MmLockRegistryRecoverySections @ 0x140618448 (MmLockRegistryRecoverySections.c)
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x140683D74 (PiUpdateDevicePanel.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     SeLockSubjectContext @ 0x1406994B0 (SeLockSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x14069D3EC (SepValidOwnerSubjectContext.c)
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     PiGetRelatedDevice @ 0x1406C8018 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406CC6A0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     SeQuerySessionIdTokenEx @ 0x1406CDD00 (SeQuerySessionIdTokenEx.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406CE130 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1406D0C78 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1406D0D80 (PiPnpRtlGetCurrentOperation.c)
 *     NtQuerySecurityAttributesToken @ 0x1406D5B30 (NtQuerySecurityAttributesToken.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1406D6370 (EtwpGetSidExtendedHeaderItem.c)
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtDuplicateToken @ 0x1406DAB50 (NtDuplicateToken.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     PiQueryAndAllocateBootResources @ 0x1406F6240 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406F6B60 (PiQueryResourceRequirements.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406FAE20 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x1406FBDC4 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x1406FBFC0 (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x1406FBFEC (PspLockRootJobShared.c)
 *     SeQuerySecurityAttributesToken @ 0x14070BAA0 (SeQuerySecurityAttributesToken.c)
 *     SeQueryUserSidToken @ 0x1407187E4 (SeQueryUserSidToken.c)
 *     WmipGetSMBiosTableData @ 0x140725AEC (WmipGetSMBiosTableData.c)
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 *     PipGenerateContainerID @ 0x140733C8C (PipGenerateContainerID.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140750F44 (IopSetDeviceSecurityDescriptor.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14075EFA8 (FsRtlAcquireFileForCcFlushEx.c)
 *     SeQuerySessionIdToken @ 0x140770F90 (SeQuerySessionIdToken.c)
 *     IoOpenDeviceRegistryKey @ 0x140771B00 (IoOpenDeviceRegistryKey.c)
 *     SeIsTokenAssignableToProcess @ 0x140776104 (SeIsTokenAssignableToProcess.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x140780E98 (ExpGetSystemFirmwareTableInformation.c)
 *     PiCreateDeviceInstanceKey @ 0x1407891CC (PiCreateDeviceInstanceKey.c)
 *     SeQueryServerSiloToken @ 0x14078FCB0 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x14079488C (PspSetProcessPriorityClass.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     AlpcpExposeTokenAttribute @ 0x1407CE140 (AlpcpExposeTokenAttribute.c)
 *     MiLogPinDriverAddress @ 0x1407EB808 (MiLogPinDriverAddress.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407ECEE0 (MmIsDriverVerifyingByAddress.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140803B38 (IopWriteAllocatedResourcesToRegistry.c)
 *     MmEnumerateSystemImages @ 0x14080E4B0 (MmEnumerateSystemImages.c)
 *     IoCreateDriver @ 0x14081AF70 (IoCreateDriver.c)
 *     SepGetLogonSessionAccountInfo @ 0x14083DF34 (SepGetLogonSessionAccountInfo.c)
 *     FsRtlCopyWrite @ 0x14084D5B0 (FsRtlCopyWrite.c)
 *     PnpDriverLoadingFailed @ 0x14085EEA4 (PnpDriverLoadingFailed.c)
 *     IopReleaseDeviceResources @ 0x140866C4C (IopReleaseDeviceResources.c)
 *     PipMakeGloballyUniqueId @ 0x14086E9D0 (PipMakeGloballyUniqueId.c)
 *     IopInvalidateVolumesForDevice @ 0x14087D588 (IopInvalidateVolumesForDevice.c)
 *     PspValidateJobAffinityState @ 0x140880118 (PspValidateJobAffinityState.c)
 *     RtlPcToFilePath @ 0x1408A16F0 (RtlPcToFilePath.c)
 *     SepRmGlobalSaclFind @ 0x1408A1C12 (SepRmGlobalSaclFind.c)
 *     SeExamineGlobalSacl @ 0x1408A1D6A (SeExamineGlobalSacl.c)
 *     FsRtlCopyRead @ 0x140939DF0 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093A3E0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093A640 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140941EE0 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x14094F28C (PnpShutdownDevices.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140957214 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x140957DA0 (PiDmGetObjectCount.c)
 *     PsSwapProcessWorkingSet @ 0x1409AB6DC (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x1409AC928 (PspSetProcessAffinitySafe.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C66C0 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x1409CAEA4 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x1409CC400 (SeGetTokenControlInformation.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1409CF634 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     WmipFindSMBiosStructure @ 0x1409DC91C (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x140A005D0 (NtMapCMFModule.c)
 *     MmGetSectionRange @ 0x140A2D9B8 (MmGetSectionRange.c)
 *     VfDriverApplyDifVerification @ 0x140AC72D8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140AC7498 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140AC7618 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140AC7778 (VfDriverRemoveDifVerification.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     VslRegisterBootDrivers @ 0x140B6F694 (VslRegisterBootDrivers.c)
 *     ExpPrmInitialization @ 0x140B7157C (ExpPrmInitialization.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14025DED0 (ExpAcquireResourceSharedLite.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C33D4 (ExpFastResourceLegacyAcquireShared.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  __int64 Flag; // r8
  unsigned __int8 v5; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v9; // cl
  struct _KTHREAD *v10; // rdx

  Flag = Resource->Flag;
  v5 = (Wait == 0) + 1;
  if ( FeatureFastResource2 )
  {
    if ( (Flag & 0x41) != 1 )
    {
      if ( (Flag & 1) == 0 )
        return ExpAcquireResourceSharedLite(Resource, Wait, Flag, v5);
      CurrentIrql = KeGetCurrentIrql();
      CurrentThread = KeGetCurrentThread();
      if ( CurrentIrql > v5 )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v5, 0LL);
      if ( CurrentIrql < 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        if ( (CurrentThread->ApcState.InProgressFlags & 2) == 0 )
        {
          if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
          {
            Flag = Resource->Flag;
            goto LABEL_12;
          }
LABEL_30:
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
LABEL_29:
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      }
LABEL_28:
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
LABEL_26:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( (Flag & 0x41) == 1 )
    goto LABEL_26;
  Flag = (unsigned __int16)Flag;
  if ( (Flag & 1) != 0 )
  {
    v9 = KeGetCurrentIrql();
    v10 = KeGetCurrentThread();
    if ( v9 > v5 )
      KeBugCheckEx(0x1C6u, 0LL, v9, v5, 0LL);
    if ( v9 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      goto LABEL_28;
    if ( (v10->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_29;
    if ( !v9 && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
      goto LABEL_30;
  }
LABEL_12:
  if ( (Flag & 1) != 0 )
    return ExpFastResourceLegacyAcquireShared((ULONG_PTR)Resource);
  return ExpAcquireResourceSharedLite(Resource, Wait, Flag, v5);
}
