/*
 * XREFs of PsReferencePrimaryToken @ 0x140706D00
 * Callers:
 *     RtlpQueryLowBoxId @ 0x14025ABE8 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x14027DC90 (SepReferenceTokenUsingPseudoHandle.c)
 *     MiCreateSystemSection @ 0x1403720DC (MiCreateSystemSection.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CF638 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CF6A4 (PspSetRedirectionTrustPolicy.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405DEB24 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x140600F24 (PsQueryProcessAttributes.c)
 *     EtwpBuildProcessEvent @ 0x140602610 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 *     PspReferenceTokenForNewProcess @ 0x14060D2C4 (PspReferenceTokenForNewProcess.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140610354 (ExpWnfQueryCurrentUserSID.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611214 (EtwQueryProcessTelemetryInfo.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406478CC (PspDisablePrimaryTokenExchange.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     SepCreateClientSecurityEx @ 0x14065E160 (SepCreateClientSecurityEx.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406823B8 (AlpcpPortQueryConnectedSidInfo.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140692BA8 (ObSetCurrentProcessDeviceMap.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x140698894 (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspSetQuotaLimits @ 0x1406A5F94 (PspSetQuotaLimits.c)
 *     PsIsProcessAppContainer @ 0x1406AD854 (PsIsProcessAppContainer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406C0098 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406C2928 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PfSnCheckModernApp @ 0x1406CB998 (PfSnCheckModernApp.c)
 *     EtwTraceAppStateChange @ 0x1406CDBB8 (EtwTraceAppStateChange.c)
 *     MmCreateSectionEx @ 0x1406D4704 (MmCreateSectionEx.c)
 *     PspInitializeProcessSecurity @ 0x1406D6400 (PspInitializeProcessSecurity.c)
 *     ExpGetProcessInformation @ 0x1406F1260 (ExpGetProcessInformation.c)
 *     NtOpenThreadTokenEx @ 0x140705F00 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x140707430 (MiCreateSectionCommon.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14070782C (EtwpGetSidExtendedHeaderItem.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     SeIsTokenAssignableToProcess @ 0x14071694C (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x140716B0C (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x140716C00 (SepIsChildTokenByPointer.c)
 *     NtImpersonateAnonymousToken @ 0x140716D30 (NtImpersonateAnonymousToken.c)
 *     SeAuditProcessCreation @ 0x1407BC598 (SeAuditProcessCreation.c)
 *     PsCreateMinimalProcess @ 0x1407C6284 (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x1407C66A4 (CmpCreateRegistryProcessToken.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C9CF0 (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x1408D3098 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D4450 (NtLoadEnclaveData.c)
 *     SeAuditProcessExit @ 0x14091E244 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140933964 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140933B5C (EtwpAcquireTokenAccessInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093EB60 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x14094087C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140206338 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObject @ 0x14027C6E0 (ObFastReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  unsigned __int64 *v1; // rsi
  void *v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *p_Lock; // rdi

  v1 = &Process[1].Affinity.Bitmap[5];
  v3 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v3 = (void *)ObFastReferenceObjectLocked(v1);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v3;
}
