/*
 * XREFs of SeCaptureSubjectContext @ 0x1406CE8F0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140252250 (SeReportSecurityEventWithSubCategory.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140345AC0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     RtlCheckTokenMembershipEx @ 0x140348460 (RtlCheckTokenMembershipEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x1403F09C0 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x1403F0B10 (IoComputeRedirectionTrustLevel.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EC7E8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     RtlCheckTokenCapability @ 0x140586670 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1405A5550 (WdipAccessCheck.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     EtwpRegisterUMGuid @ 0x1405EBAF0 (EtwpRegisterUMGuid.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405ECE20 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     SepAdtTokenRightAdjusted @ 0x140608AA0 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140608B90 (SeAuditingWithTokenForSubcategory.c)
 *     ExpWnfCheckCallerAccess @ 0x14060FF00 (ExpWnfCheckCallerAccess.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406265D0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140627E10 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140627EE0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140627F60 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     RtlIsSandboxedToken @ 0x140652B50 (RtlIsSandboxedToken.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14067BC20 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     PiCMValidateDeviceInstance @ 0x140684800 (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x140684DD8 (PiAuVerifyAccessToObject.c)
 *     NtCloseObjectAuditAlarm @ 0x140684FD0 (NtCloseObjectAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x140686630 (ExIsRestrictedCaller.c)
 *     PspSinglePrivCheck @ 0x140688E8C (PspSinglePrivCheck.c)
 *     PiCMGetDeviceIdList @ 0x140689BD4 (PiCMGetDeviceIdList.c)
 *     NtOpenObjectAuditAlarm @ 0x14068BC10 (NtOpenObjectAuditAlarm.c)
 *     PiDqOpenUserObjectRegKey @ 0x14068C868 (PiDqOpenUserObjectRegKey.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14069A6E0 (NtPrivilegedServiceAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14069F338 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepCheckCreateLowBox @ 0x1406A2224 (SepCheckCreateLowBox.c)
 *     PiDqQueryCreate @ 0x1406A7BF8 (PiDqQueryCreate.c)
 *     IopGetDeviceInterfaces @ 0x1406B32E8 (IopGetDeviceInterfaces.c)
 *     EtwpAccessCheck @ 0x1406BC938 (EtwpAccessCheck.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 *     RtlpSetSecurityObject @ 0x1406D7180 (RtlpSetSecurityObject.c)
 *     CmpNotifyChangeKey @ 0x1406DC890 (CmpNotifyChangeKey.c)
 *     NtSetValueKey @ 0x1406DCBB0 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     NtDeleteValueKey @ 0x1406E1EF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1406E5000 (NtDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406E6CFC (CmpSetKeySecurity.c)
 *     CmpLogHiveFileInaccessible @ 0x1406F00E4 (CmpLogHiveFileInaccessible.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1406F5028 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PspIsContextAdmin @ 0x14070CE38 (PspIsContextAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x14070DED0 (NtImpersonateAnonymousToken.c)
 *     PiUEventHandleRegistration @ 0x140715950 (PiUEventHandleRegistration.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072BED0 (IoGetDeviceInterfaceAlias.c)
 *     PiAuDoesClientHavePrivilege @ 0x14072F800 (PiAuDoesClientHavePrivilege.c)
 *     NtDeleteObjectAuditAlarm @ 0x140734F10 (NtDeleteObjectAuditAlarm.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407464B0 (PiPnpRtlObjectEventWorker.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14078B920 (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x14078DD60 (SeCheckPrivilegedObject.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BC5A4 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407BC844 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407BCD58 (SeAuditProcessCreation.c)
 *     PopBootStatAccessCheck @ 0x1407C1BDC (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407C7220 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x140868C80 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x14086B380 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086B518 (CmUpdateFeatureUsageSubscription.c)
 *     PnpGetCallerSessionId @ 0x1408A1E7C (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1408A3BB8 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x14090CD04 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D39C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091D950 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14091DB1C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14091DD10 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x14091DEC8 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x14091E414 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091E5D0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091E80C (SeOperationAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x140921340 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140921400 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409357A8 (EtwpCoverageUserIsAdmin.c)
 *     CmFcInitSystem2 @ 0x140A38398 (CmFcInitSystem2.c)
 *     WmipInitializeSecurity @ 0x140A69C2C (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1402062F8 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObject @ 0x1403456F0 (ObFastReferenceObject.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406CF720 (PsReferenceImpersonationTokenEx.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rsi
  void *v4; // rax
  unsigned __int64 *v5; // rbp
  _QWORD *v6; // rdi
  struct _KTHREAD *v7; // r15
  signed __int64 *p_Lock; // rsi
  char v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v10 = 0;
  v9 = 0;
  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread )
    v4 = (void *)PsReferenceImpersonationTokenEx(
                   (_DWORD)CurrentThread,
                   0,
                   (unsigned int)&v10,
                   (unsigned int)&v9,
                   (__int64)&SubjectContext->ImpersonationLevel,
                   0LL);
  else
    v4 = 0LL;
  v5 = &Process[1].Affinity.Bitmap[5];
  SubjectContext->ClientToken = v4;
  v6 = (_QWORD *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v6 )
  {
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v6 = (_QWORD *)ObFastReferenceObjectLocked(v5);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v7);
  }
  SubjectContext->PrimaryToken = v6;
  if ( SeTokenLeakTracking )
  {
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6[143] + 284LL));
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
