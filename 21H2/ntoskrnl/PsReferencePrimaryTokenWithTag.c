/*
 * XREFs of PsReferencePrimaryTokenWithTag @ 0x140347920
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14023B484 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x1402EF324 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenByHandle @ 0x1402F8F70 (SepReferenceTokenByHandle.c)
 *     AlpcpCheckConnectionSecurity @ 0x140668294 (AlpcpCheckConnectionSecurity.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14066A21C (EtwpGetSidExtendedHeaderItem.c)
 *     ExpWnfQueryCurrentUserSID @ 0x14066A57C (ExpWnfQueryCurrentUserSID.c)
 *     MmCreateSectionEx @ 0x14066BFB8 (MmCreateSectionEx.c)
 *     PspReferenceTokenForNewProcess @ 0x14066F864 (PspReferenceTokenForNewProcess.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406745EC (PopEtGetProcessSidAndPackageIdentity.c)
 *     SeIsTokenAssignableToProcess @ 0x140695160 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x14069532C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1406953C8 (SepIsSiblingTokenByPointer.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14069B030 (AlpcpPortQueryConnectedSidInfo.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14069CAE8 (ObpSetCurrentProcessDeviceMap.c)
 *     PsIsProcessAppContainer @ 0x1406C9928 (PsIsProcessAppContainer.c)
 *     PspSetRedirectionTrustPolicy @ 0x1406DD598 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x1406DEAEC (PspGetRedirectionTrustPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406E71BC (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406E9BE0 (PspGetNoChildProcessRestrictedPolicy.c)
 *     MiCreateSectionCommon @ 0x1406FD140 (MiCreateSectionCommon.c)
 *     EtwpPsProvTraceProcess @ 0x14070AFEC (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14070B610 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x14070BA00 (PsQueryProcessAttributes.c)
 *     PspInitializeProcessSecurity @ 0x14070F0D8 (PspInitializeProcessSecurity.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140711F48 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x140712868 (EtwTraceAppStateChange.c)
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     SepCreateClientSecurityEx @ 0x140727350 (SepCreateClientSecurityEx.c)
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 *     NtOpenProcessTokenEx @ 0x1407279B0 (NtOpenProcessTokenEx.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     PfQuerySuperfetchInformation @ 0x14072ACC0 (PfQuerySuperfetchInformation.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 *     PsReferencePrimaryToken @ 0x1407AFED0 (PsReferencePrimaryToken.c)
 *     PsReferenceEffectiveToken @ 0x1407B3B60 (PsReferenceEffectiveToken.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     PfSnCheckModernApp @ 0x1407DCA0C (PfSnCheckModernApp.c)
 *     PspSetQuotaLimits @ 0x1407F2DBC (PspSetQuotaLimits.c)
 *     CmpCreateRegistryProcessToken @ 0x1408315A4 (CmpCreateRegistryProcessToken.c)
 *     SeAuditProcessCreation @ 0x140847BB4 (SeAuditProcessCreation.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140857B98 (EtwpAcquireTokenAccessInformation.c)
 *     MiFindProcessImageHotPatchRecord @ 0x14097323C (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x14097A228 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x14097B500 (NtLoadEnclaveData.c)
 *     SeAuditProcessExit @ 0x1409C7C84 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E4114 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EB400 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4DA0 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObpFastReplenishReference @ 0x1402F339C (ObpFastReplenishReference.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall PsReferencePrimaryTokenWithTag(__int64 a1, ULONG a2)
{
  volatile signed __int64 *v3; // rdi
  signed __int64 v5; // r9
  signed __int64 v6; // rax
  signed __int64 v7; // rbx
  unsigned int v8; // r9d
  unsigned __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v12; // rsi

  v3 = (volatile signed __int64 *)(a1 + 1208);
  _m_prefetchw((const void *)(a1 + 1208));
  v5 = *(_QWORD *)(a1 + 1208);
  if ( (v5 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64(v3, v5 - 1, v5);
      if ( v5 == v6 )
        break;
      v5 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  v7 = v5;
  v8 = v5 & 0xF;
  v9 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v8 <= 1 )
  {
    if ( !v8 )
    {
LABEL_12:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v12 = (volatile signed __int64 *)(a1 + 1080);
      ExAcquirePushLockSharedEx((ULONG_PTR)v12, 0LL);
      v9 = *v3 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v9 )
        ObfReferenceObjectWithTag((PVOID)(*v3 & 0xFFFFFFFFFFFFFFF0uLL), a2);
      if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return v9;
    }
    ObpFastReplenishReference((signed __int64 *)v3, v9);
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v9 - 48);
  if ( !v9 )
    goto LABEL_12;
  return v9;
}
