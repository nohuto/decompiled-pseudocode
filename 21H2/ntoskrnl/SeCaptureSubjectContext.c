/*
 * XREFs of SeCaptureSubjectContext @ 0x140655B30
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1402529F0 (SeReportSecurityEventWithSubCategory.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14027CAB0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     RtlCheckTokenMembershipEx @ 0x14027F450 (RtlCheckTokenMembershipEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x1403F13B0 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x1403F1500 (IoComputeRedirectionTrustLevel.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EC8A8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     RtlCheckTokenCapability @ 0x140586730 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1405A5610 (WdipAccessCheck.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     EtwpRegisterUMGuid @ 0x1405EBAF0 (EtwpRegisterUMGuid.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405ECE20 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     SepAdtTokenRightAdjusted @ 0x140608640 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140608730 (SeAuditingWithTokenForSubcategory.c)
 *     ExpWnfCheckCallerAccess @ 0x14060FAA0 (ExpWnfCheckCallerAccess.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406261B0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1406279F0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140627AC0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140627B40 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     PiDqQueryCreate @ 0x14062EE18 (PiDqQueryCreate.c)
 *     IopGetDeviceInterfaces @ 0x14063A508 (IopGetDeviceInterfaces.c)
 *     EtwpAccessCheck @ 0x140643B58 (EtwpAccessCheck.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406556B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     RtlpSetSecurityObject @ 0x14065E3C0 (RtlpSetSecurityObject.c)
 *     CmpNotifyChangeKey @ 0x140663AA0 (CmpNotifyChangeKey.c)
 *     NtSetValueKey @ 0x140663DC0 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     NtDeleteValueKey @ 0x140669100 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14066C210 (NtDeleteKey.c)
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmpLogHiveFileInaccessible @ 0x1406772F4 (CmpLogHiveFileInaccessible.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14067C238 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140697800 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     PiCMValidateDeviceInstance @ 0x14069FF40 (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x1406A0518 (PiAuVerifyAccessToObject.c)
 *     NtCloseObjectAuditAlarm @ 0x1406A0710 (NtCloseObjectAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x1406A18B0 (ExIsRestrictedCaller.c)
 *     PspSinglePrivCheck @ 0x1406A63AC (PspSinglePrivCheck.c)
 *     PiCMGetDeviceIdList @ 0x1406A6D64 (PiCMGetDeviceIdList.c)
 *     NtOpenObjectAuditAlarm @ 0x1406A8C60 (NtOpenObjectAuditAlarm.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406A98B8 (PiDqOpenUserObjectRegKey.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406B7670 (NtPrivilegedServiceAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406BC308 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepCheckCreateLowBox @ 0x1406BF634 (SepCheckCreateLowBox.c)
 *     PiUEventHandleRegistration @ 0x1406E20B0 (PiUEventHandleRegistration.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 *     RtlIsSandboxedToken @ 0x1407054C0 (RtlIsSandboxedToken.c)
 *     PspIsContextAdmin @ 0x140715EE0 (PspIsContextAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x140716D30 (NtImpersonateAnonymousToken.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072B010 (IoGetDeviceInterfaceAlias.c)
 *     PiAuDoesClientHavePrivilege @ 0x14072F34C (PiAuDoesClientHavePrivilege.c)
 *     NtDeleteObjectAuditAlarm @ 0x140734BC0 (NtDeleteObjectAuditAlarm.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A010 (PiPnpRtlObjectEventWorker.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14078BA20 (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x14078DE60 (SeCheckPrivilegedObject.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BBDE4 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407BC084 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407BC598 (SeAuditProcessCreation.c)
 *     PopBootStatAccessCheck @ 0x1407C141C (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407C7300 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x140868C30 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x14086B330 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086B4C8 (CmUpdateFeatureUsageSubscription.c)
 *     PnpGetCallerSessionId @ 0x1408A1E2C (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1408A3B68 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x14090CCB4 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D34C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091D900 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14091DACC (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14091DCC0 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x14091DE78 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x14091E3C4 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091E580 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091E7BC (SeOperationAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1409212F0 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409213B0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x140935758 (EtwpCoverageUserIsAdmin.c)
 *     CmFcInitSystem2 @ 0x140A38398 (CmFcInitSystem2.c)
 *     WmipInitializeSecurity @ 0x140A69C2C (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140206338 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObject @ 0x14027C6E0 (ObFastReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     PsReferenceImpersonationTokenEx @ 0x140656960 (PsReferenceImpersonationTokenEx.c)
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
