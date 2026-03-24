/*
 * XREFs of PsReferencePrimaryToken @ 0x140654390
 * Callers:
 *     RtlpQueryLowBoxId @ 0x14025A448 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x140346CA0 (SepReferenceTokenUsingPseudoHandle.c)
 *     MiCreateSystemSection @ 0x1403728BC (MiCreateSystemSection.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CF638 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CF6A4 (PspSetRedirectionTrustPolicy.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405DEB24 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x140600F24 (PsQueryProcessAttributes.c)
 *     EtwpBuildProcessEvent @ 0x140602610 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 *     PspReferenceTokenForNewProcess @ 0x14060D724 (PspReferenceTokenForNewProcess.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406107B4 (ExpWnfQueryCurrentUserSID.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611674 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x14062B3BC (EtwTraceAppStateChange.c)
 *     PfSnCheckModernApp @ 0x1406308A8 (PfSnCheckModernApp.c)
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 *     NtOpenThreadTokenEx @ 0x140653590 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x140654AC0 (MiCreateSectionCommon.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140654EBC (EtwpGetSidExtendedHeaderItem.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406616E8 (AlpcpPortQueryConnectedSidInfo.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140676FE8 (ObSetCurrentProcessDeviceMap.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14067CCB4 (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspSetQuotaLimits @ 0x140688A74 (PspSetQuotaLimits.c)
 *     PsIsProcessAppContainer @ 0x140690804 (PsIsProcessAppContainer.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406A2C88 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406A5360 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406C068C (PspDisablePrimaryTokenExchange.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     SepCreateClientSecurityEx @ 0x1406D6F20 (SepCreateClientSecurityEx.c)
 *     MmCreateSectionEx @ 0x140701FD4 (MmCreateSectionEx.c)
 *     PspInitializeProcessSecurity @ 0x140703CD0 (PspInitializeProcessSecurity.c)
 *     SeIsTokenAssignableToProcess @ 0x14070DAF4 (SeIsTokenAssignableToProcess.c)
 *     SepIsSiblingTokenByPointer @ 0x14070DCB4 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x14070DDA8 (SepIsChildTokenByPointer.c)
 *     NtImpersonateAnonymousToken @ 0x14070DED0 (NtImpersonateAnonymousToken.c)
 *     CmpCreateRegistryProcessToken @ 0x140798BF0 (CmpCreateRegistryProcessToken.c)
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 *     SeAuditProcessCreation @ 0x1407BCD58 (SeAuditProcessCreation.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C9D40 (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x1408D30E8 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D44A0 (NtLoadEnclaveData.c)
 *     SeAuditProcessExit @ 0x14091E294 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409339B4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140933BAC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093EBB0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409408CC (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1402062F8 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObject @ 0x1403456F0 (ObFastReferenceObject.c)
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
