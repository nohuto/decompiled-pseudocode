/*
 * XREFs of PsReferencePrimaryTokenWithTag @ 0x1402666A0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140247AA0 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x140354AA4 (RtlpQueryLowBoxId.c)
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     NtOpenThreadTokenEx @ 0x1406D2730 (NtOpenThreadTokenEx.c)
 *     PsQueryProcessAttributes @ 0x1406D3448 (PsQueryProcessAttributes.c)
 *     SeCreateClientSecurityEx @ 0x1406D5D70 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1406D5F10 (SepCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x1406D61E0 (SeCreateClientSecurity.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1406D6370 (EtwpGetSidExtendedHeaderItem.c)
 *     PsReferenceEffectiveToken @ 0x1406D657C (PsReferenceEffectiveToken.c)
 *     PsImpersonateClient @ 0x1406DA310 (PsImpersonateClient.c)
 *     NtDuplicateToken @ 0x1406DAB50 (NtDuplicateToken.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     PsReferencePrimaryToken @ 0x1406EA370 (PsReferencePrimaryToken.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14070364C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspInitializeProcessSecurity @ 0x140709ED0 (PspInitializeProcessSecurity.c)
 *     PspReferenceTokenForNewProcess @ 0x14070D774 (PspReferenceTokenForNewProcess.c)
 *     MmCreateSectionEx @ 0x140711E48 (MmCreateSectionEx.c)
 *     AlpcpCheckConnectionSecurity @ 0x1407125C8 (AlpcpCheckConnectionSecurity.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140718888 (ExpWnfQueryCurrentUserSID.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14071D7DC (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x14071DE28 (EtwpBuildProcessEvent.c)
 *     NtImpersonateAnonymousToken @ 0x1407390D0 (NtImpersonateAnonymousToken.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407569CC (AlpcpPortQueryConnectedSidInfo.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14075D6E0 (ObpSetCurrentProcessDeviceMap.c)
 *     SeIsTokenAssignableToProcess @ 0x140776104 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x1407762B8 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140776354 (SepIsSiblingTokenByPointer.c)
 *     PsIsProcessAppContainer @ 0x140781158 (PsIsProcessAppContainer.c)
 *     PspSetRedirectionTrustPolicy @ 0x14078E980 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x14078F55C (PspGetRedirectionTrustPolicy.c)
 *     PspSetQuotaLimits @ 0x140794940 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407998F0 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14079B490 (PspGetNoChildProcessRestrictedPolicy.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 *     NtOpenProcessTokenEx @ 0x1407C95D0 (NtOpenProcessTokenEx.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     MiCreateSectionCommon @ 0x1407D01E0 (MiCreateSectionCommon.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     PfSnCheckModernApp @ 0x1407E49F8 (PfSnCheckModernApp.c)
 *     EtwTraceAppStateChange @ 0x1407E8520 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1407E8D90 (EtwpPsProvTraceProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1407ED630 (PspDisablePrimaryTokenExchange.c)
 *     CmpCreateRegistryProcessToken @ 0x14081796C (CmpCreateRegistryProcessToken.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 *     SeAuditProcessCreation @ 0x140840400 (SeAuditProcessCreation.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140850B00 (EtwpAcquireTokenAccessInformation.c)
 *     SeAuditProcessExit @ 0x1409C7F74 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E4364 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409ECC80 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F2138 (EtwpApplyPackageIdFilter.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A3404C (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x140A3B328 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x140A3C600 (NtLoadEnclaveData.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
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
        ExfReleasePushLockShared((signed __int64 *)(a1 + 1080));
      KeAbPostRelease(a1 + 1080);
      KeLeaveCriticalRegionThread(CurrentThread);
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
