/*
 * XREFs of ObFastDereferenceObject @ 0x140245F50
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1402980AC (SepDesktopAppxSubProcessToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140302D18 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlpQueryLowBoxId @ 0x140354AA4 (RtlpQueryLowBoxId.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B5FAC (SeSetLearningModeObjectInformation.c)
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     NtOpenThreadTokenEx @ 0x1406D2730 (NtOpenThreadTokenEx.c)
 *     PsQueryProcessAttributes @ 0x1406D3448 (PsQueryProcessAttributes.c)
 *     PsImpersonateClient @ 0x1406DA310 (PsImpersonateClient.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14070364C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspInitializeProcessSecurity @ 0x140709ED0 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x1407125C8 (AlpcpCheckConnectionSecurity.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140718888 (ExpWnfQueryCurrentUserSID.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14071D7DC (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x14071DE28 (EtwpBuildProcessEvent.c)
 *     PspMapSystemDll @ 0x140727ACC (PspMapSystemDll.c)
 *     NtImpersonateAnonymousToken @ 0x1407390D0 (NtImpersonateAnonymousToken.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407512E4 (PspAllocateAndQueryNotificationChannel.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407569CC (AlpcpPortQueryConnectedSidInfo.c)
 *     SeIsTokenAssignableToProcess @ 0x140776104 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x1407762B8 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140776354 (SepIsSiblingTokenByPointer.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14078194C (MiIsUserQueryVmCallerTrusted.c)
 *     PspSetRedirectionTrustPolicy @ 0x14078E980 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x14078F55C (PspGetRedirectionTrustPolicy.c)
 *     PspSetQuotaLimits @ 0x140794940 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407998F0 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14079B490 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     PfSnCheckModernApp @ 0x1407E49F8 (PfSnCheckModernApp.c)
 *     EtwTraceAppStateChange @ 0x1407E8520 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1407E8D90 (EtwpPsProvTraceProcess.c)
 *     DbgkCreateThread @ 0x1407ED96C (DbgkCreateThread.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C63C0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E4364 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409ECC80 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F2138 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140B720A8 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140B9391C (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

signed __int64 __fastcall ObFastDereferenceObject(signed __int64 *a1, unsigned __int64 a2, ULONG a3)
{
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  _m_prefetchw(a1);
  result = *a1;
  if ( (a2 ^ *a1) >= 0xF )
    return ObfDereferenceObjectWithTag((PVOID)a2, a3);
  while ( 1 )
  {
    v4 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v4 == result )
      break;
    if ( (a2 ^ result) >= 0xF )
      return ObfDereferenceObjectWithTag((PVOID)a2, a3);
  }
  if ( ObpTraceFlags )
    return ObpPushStackInfo((int)a2 - 48);
  return result;
}
