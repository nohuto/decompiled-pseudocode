/*
 * XREFs of SeReleaseSubjectContext @ 0x1407CA9B0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     IoComputeRedirectionTrustLevel @ 0x140201F40 (IoComputeRedirectionTrustLevel.c)
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     FsRtlCancelNotify @ 0x14024CCD0 (FsRtlCancelNotify.c)
 *     IoCheckRedirectionTrustLevel @ 0x140252BD0 (IoCheckRedirectionTrustLevel.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140258040 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1402EC620 (SeReportSecurityEventWithSubCategory.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14053EFBC (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     WdipAccessCheck @ 0x14062C598 (WdipAccessCheck.c)
 *     PiAuDoesClientHavePrivilege @ 0x14065FC74 (PiAuDoesClientHavePrivilege.c)
 *     PsOpenThread @ 0x1406634A0 (PsOpenThread.c)
 *     AlpcpCheckConnectionSecurity @ 0x140668294 (AlpcpCheckConnectionSecurity.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeDeleteAccessState @ 0x14066C150 (SeDeleteAccessState.c)
 *     PspInsertProcess @ 0x14066D0AC (PspInsertProcess.c)
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     NtDeleteKey @ 0x14067DE90 (NtDeleteKey.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspIsContextAdmin @ 0x1406950FC (PspIsContextAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x140695570 (NtImpersonateAnonymousToken.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406998CC (PiDqOpenUserObjectRegKey.c)
 *     CmpFlushNotify @ 0x14069F668 (CmpFlushNotify.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406AAE50 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1406AB5E0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406ABE00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406B5158 (CmpCheckKeySecurityDescriptorAccess.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406B5B9C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     CmpIsSystemEntity @ 0x1406B67A0 (CmpIsSystemEntity.c)
 *     NtCloseObjectAuditAlarm @ 0x1406BC4A0 (NtCloseObjectAuditAlarm.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406C0B60 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1406C0D00 (ObpCaptureBoundaryDescriptor.c)
 *     ObpGetIntegrityLevel @ 0x1406C5404 (ObpGetIntegrityLevel.c)
 *     ExIsRestrictedCaller @ 0x1406C5900 (ExIsRestrictedCaller.c)
 *     NtOpenObjectAuditAlarm @ 0x1406C5CA0 (NtOpenObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x1406CFE50 (PiCMGetDeviceIdList.c)
 *     NtGetNextProcess @ 0x1406D2920 (NtGetNextProcess.c)
 *     CmpLogHiveFileInaccessible @ 0x1406D2D00 (CmpLogHiveFileInaccessible.c)
 *     PopBootStatAccessCheck @ 0x1406D6C24 (PopBootStatAccessCheck.c)
 *     NtGetNextThread @ 0x1406D7150 (NtGetNextThread.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406D75F4 (ExCheckFullProcessInformationAccess.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406D7990 (NtPrivilegedServiceAuditAlarm.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406DD8D0 (PiUEventFreeClientRegistrationContext.c)
 *     SepCheckCreateLowBox @ 0x1406E6DFC (SepCheckCreateLowBox.c)
 *     SeCheckPrivilegedObject @ 0x1406E856C (SeCheckPrivilegedObject.c)
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140724320 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1407243A0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     RtlpSetSecurityObject @ 0x140726700 (RtlpSetSecurityObject.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     PsOpenProcess @ 0x1407292A0 (PsOpenProcess.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     PfQuerySuperfetchInformation @ 0x14072ACC0 (PfQuerySuperfetchInformation.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     PspCombineSecurityDomains @ 0x1407527F4 (PspCombineSecurityDomains.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140753358 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PiDqQueryRelease @ 0x140775854 (PiDqQueryRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x140779B80 (PiPnpRtlObjectEventRelease.c)
 *     WmipCreateGuidObject @ 0x140782F2C (WmipCreateGuidObject.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x140789AEC (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x14078A644 (PiAuVerifyAccessToObject.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140790C44 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpAccessCheck @ 0x140794404 (EtwpAccessCheck.c)
 *     ExpWnfCheckCallerAccess @ 0x140794654 (ExpWnfCheckCallerAccess.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140796798 (EtwpFindOrCreateGuidEntry.c)
 *     SepAdtTokenRightAdjusted @ 0x14079D470 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     NtSetInformationKey @ 0x1407C0160 (NtSetInformationKey.c)
 *     CmQueryKey @ 0x1407C1B70 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407EF848 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PspSetQuotaLimits @ 0x1407F2DBC (PspSetQuotaLimits.c)
 *     ExpCheckWakeTimerAccess @ 0x1407F4160 (ExpCheckWakeTimerAccess.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14081A150 (NtPrivilegeObjectAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140847400 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1408476A0 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x140847BB4 (SeAuditProcessCreation.c)
 *     NtSetUuidSeed @ 0x140855FA0 (NtSetUuidSeed.c)
 *     PspDeleteObjectAccessState @ 0x140882484 (PspDeleteObjectAccessState.c)
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x1409113B4 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140911544 (CmUpdateFeatureUsageSubscription.c)
 *     CmKeyBodyRemapToVirtual @ 0x140915DB8 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoAccessCheckOnKCB @ 0x140916788 (CmpDoAccessCheckOnKCB.c)
 *     FsRtlNotifyCleanupAll @ 0x14092FFC0 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x140946F98 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140949950 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x1409B3230 (PspIumVerifyParentSd.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C6000 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C6D8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7340 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1409C750C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409C7700 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1409C78B8 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x1409C7E08 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409C7FD0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409C820C (SeOperationAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1409CAC10 (NtDeleteObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CAD20 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CADE0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E57B8 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140A03FB4 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x140A81DB4 (VfUtilIsLocalSystem.c)
 *     CmFcInitSystem2 @ 0x140B152D4 (CmFcInitSystem2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 */

void __stdcall SeReleaseSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  unsigned __int64 v2; // r8
  _KPROCESS *Process; // rdx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  PACCESS_TOKEN ClientToken; // rcx
  _QWORD *PrimaryToken; // rax

  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    PrimaryToken = SubjectContext->PrimaryToken;
    if ( PrimaryToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v2 = (unsigned __int64)SubjectContext->PrimaryToken;
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&Process[1].Affinity.StaticBitmap[5]);
  v4 = Process[1].Affinity.StaticBitmap[5];
  if ( (v2 ^ v4) >= 0xF )
  {
LABEL_9:
    ObfDereferenceObjectWithTag((PVOID)v2, 0x75536553u);
  }
  else
  {
    while ( 1 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[5], v4 + 1, v4);
      if ( v5 == v4 )
        break;
      if ( (v2 ^ v4) >= 0xF )
        goto LABEL_9;
    }
    ObpTraceObjectDereferenceIfActive(v2 - 48);
  }
  ClientToken = SubjectContext->ClientToken;
  SubjectContext->PrimaryToken = 0LL;
  if ( ClientToken )
    ObfDereferenceObjectWithTag(ClientToken, 0x75536553u);
  SubjectContext->ClientToken = 0LL;
}
