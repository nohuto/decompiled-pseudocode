/*
 * XREFs of SeReleaseSubjectContext @ 0x1407C9D40
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140204B90 (RtlCheckTokenMembershipEx.c)
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     SeReportSecurityEventWithSubCategory @ 0x140299040 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenCapability @ 0x1402BE920 (RtlCheckTokenCapability.c)
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     FsRtlCancelNotify @ 0x1402F2B70 (FsRtlCancelNotify.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403AB15C (ExCpuSetResourceManagerAccessCheck.c)
 *     IoCheckRedirectionTrustLevel @ 0x1403CB430 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x140556740 (IoComputeRedirectionTrustLevel.c)
 *     WdipAccessCheck @ 0x1405F93F8 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140613F58 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     PiDqQueryRelease @ 0x140689C8C (PiDqQueryRelease.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140690144 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpAccessCheck @ 0x140692ED0 (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140694E30 (EtwpFindOrCreateGuidEntry.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     ObReferenceObjectByName @ 0x140698F90 (ObReferenceObjectByName.c)
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140699890 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14069A700 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     WmipCreateGuidObject @ 0x14069AA20 (WmipCreateGuidObject.c)
 *     PsOpenProcess @ 0x1406ABCC0 (PsOpenProcess.c)
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x1406C78A0 (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x1406CBD38 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlObjectEventRelease @ 0x1406CCCF8 (PiPnpRtlObjectEventRelease.c)
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14070C414 (PspOneDirectionSecurityDomainCombine.c)
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     PspInsertProcess @ 0x14070E514 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x14070F51C (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14070F610 (SeAuditingWithTokenForSubcategory.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     AlpcpCheckConnectionSecurity @ 0x1407125C8 (AlpcpCheckConnectionSecurity.c)
 *     ExpWnfCheckCallerAccess @ 0x14071A9D4 (ExpWnfCheckCallerAccess.c)
 *     NtImpersonateAnonymousToken @ 0x1407390D0 (NtImpersonateAnonymousToken.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14073AC00 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     ObpGetIntegrityLevel @ 0x140741374 (ObpGetIntegrityLevel.c)
 *     RtlIsSandboxedToken @ 0x140741410 (RtlIsSandboxedToken.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140741CB8 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140743538 (ObpCaptureBoundaryDescriptor.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140743F0C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PiDqOpenUserObjectRegKey @ 0x140747298 (PiDqOpenUserObjectRegKey.c)
 *     CmpFlushNotify @ 0x14074B6C4 (CmpFlushNotify.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14074CA68 (CmpCheckKeySecurityDescriptorAccess.c)
 *     NtSetInformationKey @ 0x1407590A0 (NtSetInformationKey.c)
 *     CmpIsSystemEntity @ 0x140768CB8 (CmpIsSystemEntity.c)
 *     PsOpenThread @ 0x14076A000 (PsOpenThread.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14076AA40 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1407742A0 (NtCloseObjectAuditAlarm.c)
 *     FsRtlNotifyCleanup @ 0x140775C10 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140775CA0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     PiCMGetDeviceIdList @ 0x14077813C (PiCMGetDeviceIdList.c)
 *     PspCombineSecurityDomains @ 0x140778A04 (PspCombineSecurityDomains.c)
 *     PspIsContextAdmin @ 0x140781848 (PspIsContextAdmin.c)
 *     NtGetNextProcess @ 0x140784C70 (NtGetNextProcess.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140788B50 (NtPrivilegedServiceAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x14078A078 (ExIsRestrictedCaller.c)
 *     CmpLogHiveFileInaccessible @ 0x14078B330 (CmpLogHiveFileInaccessible.c)
 *     SeDeleteAccessState @ 0x14078C5D0 (SeDeleteAccessState.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14078DA7C (PiUEventFreeClientRegistrationContext.c)
 *     IoGetDeviceInterfaceAlias @ 0x14078E260 (IoGetDeviceInterfaceAlias.c)
 *     NtGetNextThread @ 0x140790200 (NtGetNextThread.c)
 *     NtOpenObjectAuditAlarm @ 0x140790670 (NtOpenObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x1407913D4 (SeCheckPrivilegedObject.c)
 *     ExCheckFullProcessInformationAccess @ 0x140791A18 (ExCheckFullProcessInformationAccess.c)
 *     PspSetQuotaLimits @ 0x140794940 (PspSetQuotaLimits.c)
 *     PopBootStatAccessCheck @ 0x140798D98 (PopBootStatAccessCheck.c)
 *     SepCheckCreateLowBox @ 0x140799F04 (SepCheckCreateLowBox.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExpCheckWakeTimerAccess @ 0x1407F8F28 (ExpCheckWakeTimerAccess.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 *     SeAuditBootConfiguration @ 0x14083FCC8 (SeAuditBootConfiguration.c)
 *     SepAuditAssignPrimaryToken @ 0x1408401DC (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140840400 (SeAuditProcessCreation.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140843210 (NtPrivilegeObjectAuditAlarm.c)
 *     NtSetUuidSeed @ 0x14084E2E0 (NtSetUuidSeed.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x14084F730 (FsRtlNotifyFilterChangeDirectory.c)
 *     PspCreateProcess @ 0x140858F60 (PspCreateProcess.c)
 *     FsRtlNotifyCleanupAll @ 0x14093D030 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x140955A70 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1409587A0 (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x140958948 (PiAuDoesClientHavePrivilege.c)
 *     PspIumVerifyParentSd @ 0x1409B3464 (PspIumVerifyParentSd.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C63C0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C7074 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7630 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1409C77FC (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409C79F0 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1409C7BA8 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x1409C80F8 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409C82C0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409C84FC (SeOperationAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1409CB0D0 (NtDeleteObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CB1E0 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CB2A0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E5B48 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x1409FECA4 (CMFCheckAccess.c)
 *     NtRenameKey @ 0x140A0B350 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x140A0F190 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A0F4A0 (CmUpdateFeatureUsageSubscription.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A152D4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A1628C (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140A1641C (CmpDoBuildVirtualStack.c)
 *     VfUtilIsLocalSystem @ 0x140ABF724 (VfUtilIsLocalSystem.c)
 *     CmFcInitSystem2 @ 0x140B51DC0 (CmFcInitSystem2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

void __stdcall SeReleaseSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  signed __int64 v2; // r8
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
  v2 = (signed __int64)SubjectContext->PrimaryToken;
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&Process[1].Affinity.StaticBitmap[5]);
  v4 = Process[1].Affinity.StaticBitmap[5];
  if ( (v2 ^ (unsigned __int64)v4) >= 0xF )
  {
LABEL_10:
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
      if ( (v2 ^ (unsigned __int64)v4) >= 0xF )
        goto LABEL_10;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo(v2 - 48, 0, 1u, 0x75536553u);
  }
  ClientToken = SubjectContext->ClientToken;
  SubjectContext->PrimaryToken = 0LL;
  if ( ClientToken )
    ObfDereferenceObjectWithTag(ClientToken, 0x75536553u);
  SubjectContext->ClientToken = 0LL;
}
