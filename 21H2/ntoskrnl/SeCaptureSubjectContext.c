/*
 * XREFs of SeCaptureSubjectContext @ 0x14064A950
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     RtlCheckTokenMembershipEx @ 0x14026D700 (RtlCheckTokenMembershipEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1402858A0 (SeReportSecurityEventWithSubCategory.c)
 *     IoCheckRedirectionTrustLevel @ 0x1403F1280 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x1403F13D0 (IoComputeRedirectionTrustLevel.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404ECAE8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     RtlCheckTokenCapability @ 0x140586960 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1405A5840 (WdipAccessCheck.c)
 *     PiCMValidateDeviceInstance @ 0x1405FF280 (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x1405FF858 (PiAuVerifyAccessToObject.c)
 *     NtCloseObjectAuditAlarm @ 0x1405FFA50 (NtCloseObjectAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x1406017E4 (ExIsRestrictedCaller.c)
 *     PspSinglePrivCheck @ 0x140603FDC (PspSinglePrivCheck.c)
 *     PiCMGetDeviceIdList @ 0x140604994 (PiCMGetDeviceIdList.c)
 *     NtOpenObjectAuditAlarm @ 0x140606BE0 (NtOpenObjectAuditAlarm.c)
 *     PiDqOpenUserObjectRegKey @ 0x140607838 (PiDqOpenUserObjectRegKey.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140616B80 (NtPrivilegedServiceAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14061B478 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepCheckCreateLowBox @ 0x14061E544 (SepCheckCreateLowBox.c)
 *     PiDqQueryCreate @ 0x140623E98 (PiDqQueryCreate.c)
 *     IopGetDeviceInterfaces @ 0x14062F318 (IopGetDeviceInterfaces.c)
 *     EtwpAccessCheck @ 0x140638968 (EtwpAccessCheck.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     RtlpSetSecurityObject @ 0x1406531E0 (RtlpSetSecurityObject.c)
 *     CmpNotifyChangeKey @ 0x1406588C0 (CmpNotifyChangeKey.c)
 *     NtSetValueKey @ 0x140658BE0 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     NtDeleteValueKey @ 0x14065DF20 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140661030 (NtDeleteKey.c)
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 *     CmpLogHiveFileInaccessible @ 0x14066A9C4 (CmpLogHiveFileInaccessible.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14066F978 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140693B00 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140693BD0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140693C50 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406941A8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x1406980F4 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406981E0 (SeAuditingWithTokenForSubcategory.c)
 *     ExpWnfCheckCallerAccess @ 0x14069F550 (ExpWnfCheckCallerAccess.c)
 *     PiUEventHandleRegistration @ 0x1406B9390 (PiUEventHandleRegistration.c)
 *     PspIsContextAdmin @ 0x1406C4530 (PspIsContextAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x1406C5380 (NtImpersonateAnonymousToken.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     EtwpRegisterUMGuid @ 0x1406DB250 (EtwpRegisterUMGuid.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406DC580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     NtSetInformationKey @ 0x1406E3160 (NtSetInformationKey.c)
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     RtlIsSandboxedToken @ 0x14071C8A0 (RtlIsSandboxedToken.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072B4C0 (IoGetDeviceInterfaceAlias.c)
 *     PiAuDoesClientHavePrivilege @ 0x14072F518 (PiAuDoesClientHavePrivilege.c)
 *     NtDeleteObjectAuditAlarm @ 0x140734D80 (NtDeleteObjectAuditAlarm.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A1D0 (PiPnpRtlObjectEventWorker.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14078BBE0 (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x14078E020 (SeCheckPrivilegedObject.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BC574 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407BC814 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407BCD28 (SeAuditProcessCreation.c)
 *     PopBootStatAccessCheck @ 0x1407C193C (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407C7620 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x140868D90 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x14086B490 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086B628 (CmUpdateFeatureUsageSubscription.c)
 *     PnpGetCallerSessionId @ 0x1408A1F8C (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1408A3CC8 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x14090CE14 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D4AC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091DA60 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14091DC2C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14091DE20 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x14091DFD8 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x14091E524 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091E6E0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091E91C (SeOperationAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x140921450 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140921510 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x140935928 (EtwpCoverageUserIsAdmin.c)
 *     CmFcInitSystem2 @ 0x140A39398 (CmFcInitSystem2.c)
 *     WmipInitializeSecurity @ 0x140A6AC2C (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     PsReferenceImpersonationTokenEx @ 0x14064B780 (PsReferenceImpersonationTokenEx.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // [rsp+60h] [rbp+8h] BYREF
  char v13; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v13 = 0;
  v12 = 0;
  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread )
    v4 = (void *)PsReferenceImpersonationTokenEx(
                   (_DWORD)CurrentThread,
                   0,
                   (unsigned int)&v13,
                   (unsigned int)&v12,
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
    KeLeaveCriticalRegionThread((__int64)v7, v9, v10, v11);
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
