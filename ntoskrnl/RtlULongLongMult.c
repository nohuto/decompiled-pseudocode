/*
 * XREFs of RtlULongLongMult @ 0x14024789C
 * Callers:
 *     EmpEvaluateNodeLink @ 0x140245FF4 (EmpEvaluateNodeLink.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x140246650 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140247720 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     SepCaptureTokenSecurityOperations @ 0x1402BE564 (SepCaptureTokenSecurityOperations.c)
 *     HalpSetTimer @ 0x1402CBEE0 (HalpSetTimer.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1402D5E70 (AuthzBasepCopyoutSecurityAttributes.c)
 *     RtlCreateAtomTableEx @ 0x140355EB0 (RtlCreateAtomTableEx.c)
 *     RtlpHpVaMgrCtxStart @ 0x140375148 (RtlpHpVaMgrCtxStart.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403AE654 (HalpTimerSchedulePeriodicQueries.c)
 *     EtwpGetDurationSince @ 0x14045F42A (EtwpGetDurationSince.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404FC324 (HalpTimerConvertAuxiliaryCounter.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404FC420 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404FC550 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpSetResumeTime @ 0x14051A258 (HalpSetResumeTime.c)
 *     ExPoolQueryLimits @ 0x140604FE0 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140605324 (ExPoolSetLimit.c)
 *     PnpConcatPWSTR @ 0x14069EE54 (PnpConcatPWSTR.c)
 *     PnpAllocatePWSTR @ 0x1406CD7F4 (PnpAllocatePWSTR.c)
 *     AslStringDuplicate @ 0x1406D51D8 (AslStringDuplicate.c)
 *     SeCaptureUnicodeStringStructures @ 0x1406D52BC (SeCaptureUnicodeStringStructures.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1407282D0 (MiCaptureAllocateMapExtendedParameters.c)
 *     PopBootStatGet @ 0x14073D308 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x14073D9E0 (PopBootStatSet.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x1407D0550 (MiCaptureSectionCreateExtendedParameters.c)
 *     PnpAllocateMultiSZ @ 0x14080706C (PnpAllocateMultiSZ.c)
 *     PnpCopyDevPropertyArray @ 0x140807540 (PnpCopyDevPropertyArray.c)
 *     PopFxConvertV1Components @ 0x140836BD8 (PopFxConvertV1Components.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x140844538 (RtlpMuiRegGetOrAddStringToPool.c)
 *     PpmRegisterProfiles @ 0x140848708 (PpmRegisterProfiles.c)
 *     PopBootStatCheckIntegrity @ 0x14084B00C (PopBootStatCheckIntegrity.c)
 *     WmipBuildInstanceSet @ 0x140867C6C (WmipBuildInstanceSet.c)
 *     PopFxPepPerfInfoQuery @ 0x140982744 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x140982948 (PopFxRegisterComponentPerfStates.c)
 *     PopReadResumeContext @ 0x140985D88 (PopReadResumeContext.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x1409BFEF0 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x1409C0054 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1409C07F0 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1409C08B4 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     SdbpResolveMatchingFile @ 0x140A4EB00 (SdbpResolveMatchingFile.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140A57408 (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A57590 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A57774 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     PopQpcTimeInMs @ 0x140A84A40 (PopQpcTimeInMs.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA4A40 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AE90B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AEF1E0 (AnFwpBackgroundUpdateTimer.c)
 *     GetBootSystemTime @ 0x140B70018 (GetBootSystemTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
  }
  else
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  return v3;
}
