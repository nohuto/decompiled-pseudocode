/*
 * XREFs of SeCaptureSubjectContext @ 0x14072A600
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     IoComputeRedirectionTrustLevel @ 0x140201F40 (IoComputeRedirectionTrustLevel.c)
 *     IoCheckRedirectionTrustLevel @ 0x140252BD0 (IoCheckRedirectionTrustLevel.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1402EC620 (SeReportSecurityEventWithSubCategory.c)
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14053EFBC (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     WdipAccessCheck @ 0x14062C598 (WdipAccessCheck.c)
 *     PiAuDoesClientHavePrivilege @ 0x14065FC74 (PiAuDoesClientHavePrivilege.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     NtDeleteKey @ 0x14067DE90 (NtDeleteKey.c)
 *     PspIsContextAdmin @ 0x1406950FC (PspIsContextAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x140695570 (NtImpersonateAnonymousToken.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406998CC (PiDqOpenUserObjectRegKey.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406B5B9C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1406BC4A0 (NtCloseObjectAuditAlarm.c)
 *     ObpGetIntegrityLevel @ 0x1406C5404 (ObpGetIntegrityLevel.c)
 *     ExIsRestrictedCaller @ 0x1406C5900 (ExIsRestrictedCaller.c)
 *     NtOpenObjectAuditAlarm @ 0x1406C5CA0 (NtOpenObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x1406CFE50 (PiCMGetDeviceIdList.c)
 *     CmpLogHiveFileInaccessible @ 0x1406D2D00 (CmpLogHiveFileInaccessible.c)
 *     PopBootStatAccessCheck @ 0x1406D6C24 (PopBootStatAccessCheck.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406D7990 (NtPrivilegedServiceAuditAlarm.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     SepCheckCreateLowBox @ 0x1406E6DFC (SepCheckCreateLowBox.c)
 *     SeCheckPrivilegedObject @ 0x1406E856C (SeCheckPrivilegedObject.c)
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140724320 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1407243A0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     RtlpSetSecurityObject @ 0x140726700 (RtlpSetSecurityObject.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140753358 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PiDqQueryCreate @ 0x140776C38 (PiDqQueryCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x140778830 (PiPnpRtlObjectEventWorker.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x140789AEC (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x14078A644 (PiAuVerifyAccessToObject.c)
 *     PiUEventHandleRegistration @ 0x14078D764 (PiUEventHandleRegistration.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 *     EtwpAccessCheck @ 0x140794404 (EtwpAccessCheck.c)
 *     ExpWnfCheckCallerAccess @ 0x140794654 (ExpWnfCheckCallerAccess.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140796798 (EtwpFindOrCreateGuidEntry.c)
 *     SepAdtTokenRightAdjusted @ 0x14079D470 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     NtSetInformationKey @ 0x1407C0160 (NtSetInformationKey.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     CmpNotifyChangeKey @ 0x1407E5F70 (CmpNotifyChangeKey.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407EF848 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PspSinglePrivCheck @ 0x1407F3230 (PspSinglePrivCheck.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14081A150 (NtPrivilegeObjectAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140847400 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1408476A0 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x140847BB4 (SeAuditProcessCreation.c)
 *     NtSetUuidSeed @ 0x140855FA0 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x1409113B4 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140911544 (CmUpdateFeatureUsageSubscription.c)
 *     PnpGetCallerSessionId @ 0x140946F98 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140949950 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x1409B3230 (PspIumVerifyParentSd.c)
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
 *     CmFcInitSystem2 @ 0x140B152D4 (CmFcInitSystem2.c)
 *     WmipInitializeSecurity @ 0x140B22DD4 (WmipInitializeSecurity.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     PsReferenceImpersonationTokenEx @ 0x14072A6B0 (PsReferenceImpersonationTokenEx.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rcx
  void *v3; // rdx
  __int64 Process; // rdi
  _QWORD *v5; // rax
  char v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v7 = 0;
  v6 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  SubjectContext->ProcessAuditId = *(PVOID *)(Process + 1088);
  if ( CurrentThread )
    v3 = (void *)PsReferenceImpersonationTokenEx(
                   CurrentThread,
                   0LL,
                   1968399699LL,
                   &v7,
                   &v6,
                   &SubjectContext->ImpersonationLevel,
                   0LL);
  SubjectContext->ClientToken = v3;
  v5 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
  SubjectContext->PrimaryToken = v5;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}
