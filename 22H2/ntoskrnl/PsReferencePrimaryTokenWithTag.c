/*
 * XREFs of PsReferencePrimaryTokenWithTag @ 0x1402329A0
 * Callers:
 *     RtlpQueryLowBoxId @ 0x1402979F8 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1402B2E40 (SepReferenceTokenUsingPseudoHandle.c)
 *     PspInitializeProcessSecurity @ 0x1406B64F0 (PspInitializeProcessSecurity.c)
 *     PspReferenceTokenForNewProcess @ 0x1406B9204 (PspReferenceTokenForNewProcess.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA488 (SeIsTokenAssignableToProcess.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByNameEx @ 0x1406ED090 (ObOpenObjectByNameEx.c)
 *     PsReferencePrimaryToken @ 0x1406EF4D0 (PsReferencePrimaryToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140714AE0 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A70 (AlpcpCheckConnectionSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14071D220 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x14071D3C0 (SeCreateClientSecurity.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D550 (EtwpGetSidExtendedHeaderItem.c)
 *     PsReferenceEffectiveToken @ 0x14071D75C (PsReferenceEffectiveToken.c)
 *     SepCreateClientSecurityEx @ 0x14071D960 (SepCreateClientSecurityEx.c)
 *     PsQueryProcessAttributes @ 0x14071DE84 (PsQueryProcessAttributes.c)
 *     NtOpenThreadTokenEx @ 0x14071DF70 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x140722780 (MiCreateSectionCommon.c)
 *     RtlpSetSecurityObject @ 0x14072BDE0 (RtlpSetSecurityObject.c)
 *     PsImpersonateClient @ 0x140734F30 (PsImpersonateClient.c)
 *     NtDuplicateToken @ 0x1407358C0 (NtDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     NtOpenProcessTokenEx @ 0x140737BD0 (NtOpenProcessTokenEx.c)
 *     SeCaptureSubjectContextEx @ 0x1407380F0 (SeCaptureSubjectContextEx.c)
 *     ExpGetProcessInformation @ 0x1407432D0 (ExpGetProcessInformation.c)
 *     EtwTraceAppStateChange @ 0x140751F08 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1407528E0 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140754A38 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754D60 (EtwQueryProcessTelemetryInfo.c)
 *     MmCreateSectionEx @ 0x14076CBB8 (MmCreateSectionEx.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     PspDisablePrimaryTokenExchange @ 0x14076FDF0 (PspDisablePrimaryTokenExchange.c)
 *     PsIsProcessAppContainer @ 0x14077F59C (PsIsProcessAppContainer.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB5FC (AlpcpPortQueryConnectedSidInfo.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x1407AFB64 (ObpSetCurrentProcessDeviceMap.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B366C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x1407C2F34 (PfSnCheckModernApp.c)
 *     SepIsSiblingTokenByPointer @ 0x1407C7544 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1407DD4A0 (SepIsChildTokenByPointer.c)
 *     PspSetRedirectionTrustPolicy @ 0x1407DDAA4 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x1407DE628 (PspGetRedirectionTrustPolicy.c)
 *     PspSetQuotaLimits @ 0x1407E3E94 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407E8AF0 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1407EA400 (PspGetNoChildProcessRestrictedPolicy.c)
 *     SepFilterToken @ 0x1407F2180 (SepFilterToken.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5620 (NtImpersonateAnonymousToken.c)
 *     CmpCreateRegistryProcessToken @ 0x14080D218 (CmpCreateRegistryProcessToken.c)
 *     SeAuditProcessCreation @ 0x140842A54 (SeAuditProcessCreation.c)
 *     PsCreateMinimalProcess @ 0x140853DBC (PsCreateMinimalProcess.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140854370 (EtwpAcquireTokenAccessInformation.c)
 *     SeAuditProcessExit @ 0x1409CAFC4 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E7204 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EFB10 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4FC8 (EtwpApplyPackageIdFilter.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A36D7C (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x140A3E010 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x140A3F2E0 (NtLoadEnclaveData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 */

ULONG_PTR __fastcall PsReferencePrimaryTokenWithTag(__int64 a1, ULONG a2)
{
  signed __int64 v4; // r8
  signed __int64 v5; // rax
  signed __int64 v6; // rbx
  unsigned int v7; // r8d
  ULONG_PTR v8; // rbx
  __int64 v10; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  struct _KTHREAD *CurrentThread; // r14

  _m_prefetchw((const void *)(a1 + 1208));
  v4 = *(_QWORD *)(a1 + 1208);
  if ( (v4 & 0xF) != 0 )
  {
    do
    {
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1208), v4 - 1, v4);
      if ( v4 == v5 )
        break;
      v4 = v5;
    }
    while ( (v5 & 0xF) != 0 );
  }
  v6 = v4;
  v7 = v4 & 0xF;
  v8 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v7 <= 1 )
  {
    if ( !v7 )
    {
LABEL_17:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
      v8 = *(_QWORD *)(a1 + 1208) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v8 )
        ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 1208) & 0xFFFFFFFFFFFFFFF0uLL), a2);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1080), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 1080);
      KeAbPostRelease(a1 + 1080);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return v8;
    }
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 48), 0xFuLL);
    if ( v10 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v8, 0x10uLL, v10 + 15);
    _m_prefetchw((const void *)(a1 + 1208));
    v11 = *(_QWORD *)(a1 + 1208);
    if ( (unsigned __int64)(v11 & 0xF) + 15 <= 0xF )
    {
      do
      {
        if ( v8 != (v11 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1208), v11 + 15, v11);
        if ( v12 == v11 )
          goto LABEL_4;
      }
      while ( (v11 & 0xF) == 0 );
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 48), 0xFFFFFFFFFFFFFFF1uLL);
  }
LABEL_4:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v8 - 48);
  if ( !v8 )
    goto LABEL_17;
  return v8;
}
