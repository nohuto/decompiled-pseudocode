/*
 * XREFs of ExAcquireResourceSharedLite @ 0x1402CC670
 * Callers:
 *     IopCreateSecurityCheck @ 0x140201880 (IopCreateSecurityCheck.c)
 *     SepCanTokenMatchAllPackageSid @ 0x14024DF44 (SepCanTokenMatchAllPackageSid.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140251258 (SeTokenGetNoChildProcessRestricted.c)
 *     SepFilterCheck @ 0x1402CF460 (SepFilterCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x1403018A0 (LdrpKrnGetDataTableEntry.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140345AC0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x140347320 (SepTrustLevelCheck.c)
 *     MiLookupDataTableEntry @ 0x140358CCC (MiLookupDataTableEntry.c)
 *     SepAcquireOrderedReadLocks @ 0x14035F408 (SepAcquireOrderedReadLocks.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403AF0C0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiDeleteBootRange @ 0x1403B4B18 (MiDeleteBootRange.c)
 *     McGenControlCallbackV2 @ 0x1403C5D70 (McGenControlCallbackV2.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1403F8600 (SeTokenGetRedirectionTrustPolicy.c)
 *     IoFillTriageDumpBuffer @ 0x140501A40 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x140504CC0 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x140596E68 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140597198 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140597720 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     AlpcpExposeTokenAttribute @ 0x1405E8850 (AlpcpExposeTokenAttribute.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     SeQuerySecurityAttributesToken @ 0x140600F90 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x1406011C0 (NtQuerySecurityAttributesToken.c)
 *     SepValidLabelSubjectContext @ 0x140607E9C (SepValidLabelSubjectContext.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140617BCC (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x140618278 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x140618BFC (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x140618CD4 (PspLockRootJobShared.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406265D0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeLockSubjectContext @ 0x140643550 (SeLockSubjectContext.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     RtlpNewSecurityObject @ 0x14064CD10 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     SepDuplicateToken @ 0x140651490 (SepDuplicateToken.c)
 *     NtDuplicateToken @ 0x1406527E0 (NtDuplicateToken.c)
 *     SeQueryUserSidToken @ 0x1406544B4 (SeQueryUserSidToken.c)
 *     IopMountVolume @ 0x14065E0D0 (IopMountVolume.c)
 *     WmipGetSMBiosTableData @ 0x14065FBBC (WmipGetSMBiosTableData.c)
 *     SeQuerySessionIdToken @ 0x1406773C0 (SeQuerySessionIdToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406816CC (SepValidOwnerSubjectContext.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14069061C (ExpGetSystemFirmwareTableInformation.c)
 *     PiGetRelatedDevice @ 0x140691104 (PiGetRelatedDevice.c)
 *     SeQueryServerSiloToken @ 0x140693660 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x140696F40 (PspSetProcessPriorityClass.c)
 *     PspValidateJobAffinityState @ 0x1406998FC (PspValidateJobAffinityState.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A7660 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlEndOperation @ 0x1406ACCB8 (PiPnpRtlEndOperation.c)
 *     SeQuerySessionIdTokenEx @ 0x1406AD220 (SeQuerySessionIdTokenEx.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406ADEC8 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1406AF84C (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1406B004C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1406B015C (PiPnpRtlGetCurrentOperation.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406B29FC (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1406B2A34 (PpDevNodeLockTree.c)
 *     PnpGetDevicePropertyData @ 0x1406B2EF8 (PnpGetDevicePropertyData.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1406BFFC4 (FsRtlAcquireFileForCcFlushEx.c)
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     IopGetSetSecurityObject @ 0x1406C8520 (IopGetSetSecurityObject.c)
 *     SeQueryInformationToken @ 0x1406CF990 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1406D0BB0 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 *     SeIsTokenAssignableToProcess @ 0x14070DAF4 (SeIsTokenAssignableToProcess.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     PiUpdateDevicePanel @ 0x140744734 (PiUpdateDevicePanel.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407464B0 (PiPnpRtlObjectEventWorker.c)
 *     PipProcessStartPhase3 @ 0x140747010 (PipProcessStartPhase3.c)
 *     PiCreateDeviceInstanceKey @ 0x140748FB4 (PiCreateDeviceInstanceKey.c)
 *     IopReleaseDeviceResources @ 0x14074B5CC (IopReleaseDeviceResources.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14074EE3C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x14074FA7C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140750384 (PiQueryResourceRequirements.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14076A88C (IopSetDeviceSecurityDescriptor.c)
 *     PipMakeGloballyUniqueId @ 0x14076BBCC (PipMakeGloballyUniqueId.c)
 *     PipGenerateContainerID @ 0x14076DBF8 (PipGenerateContainerID.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B720 (IopInvalidateVolumesForDevice.c)
 *     MmEnumerateSystemImages @ 0x140792C70 (MmEnumerateSystemImages.c)
 *     IoCreateDriver @ 0x1407A5330 (IoCreateDriver.c)
 *     MiLogPinDriverAddress @ 0x1407B6A44 (MiLogPinDriverAddress.c)
 *     SepGetLogonSessionAccountInfo @ 0x1407B95BC (SepGetLogonSessionAccountInfo.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407D2AF0 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x1407D2B70 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x14088A660 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088A8E0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088B0A0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B300 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140891768 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x14089B99C (PnpShutdownDevices.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1408A0D80 (PnpGetDeviceInstancePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A29B0 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A31CC (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x1408A34DC (PiDmGetObjectCount.c)
 *     KiTraceLogNmiCallback @ 0x1408BB2CC (KiTraceLogNmiCallback.c)
 *     MmGetSectionRange @ 0x1408C8238 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x140907A30 (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x140908614 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x140919250 (RtlPcToFilePath.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14091C990 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x140921118 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x140922B34 (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x140924A68 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140924B88 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140924C40 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x140931848 (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x140959B70 (NtMapCMFModule.c)
 *     VfDriverEnableVerifier @ 0x1409C8630 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C87C8 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x1402CC770 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14038EC80 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038F46C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  PERESOURCE v2; // rbx
  __int16 v4; // ax
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // r8
  void *OwnerEntryForLegacyShim; // rsi
  BOOLEAN v9; // bl

  v2 = Resource;
  LOBYTE(Resource) = (Wait == 0) + 1;
  if ( (v2->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v2, 0LL, 0LL);
  v4 = v2->Flag & 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > (unsigned __int8)Resource )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, (unsigned __int8)Resource, 0LL);
    if ( CurrentIrql >= 2u )
    {
      LODWORD(Resource) = KeGetPcr()->Prcb.DpcRequestSummary;
      if ( ((unsigned int)Resource & 0x10001) != 0 )
        KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v4 )
    return ExpAcquireResourceSharedLite(v2, Wait);
  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(Resource);
  v9 = ExAcquireFastResourceShared((ULONG_PTR)v2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v9 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v9;
}
