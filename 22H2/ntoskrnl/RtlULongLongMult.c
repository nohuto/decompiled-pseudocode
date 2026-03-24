/*
 * XREFs of RtlULongLongMult @ 0x14024E708
 * Callers:
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14024D140 (AuthzBasepCopyoutSecurityAttributes.c)
 *     HalpSetTimer @ 0x14024DCEC (HalpSetTimer.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14024E2B0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x14024E62C (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     RtlCreateAtomTableEx @ 0x14032D350 (RtlCreateAtomTableEx.c)
 *     PpmConvertTime @ 0x14034523C (PpmConvertTime.c)
 *     SepCaptureTokenSecurityOperations @ 0x140348314 (SepCaptureTokenSecurityOperations.c)
 *     EmpEvaluateNodeLink @ 0x1403748FC (EmpEvaluateNodeLink.c)
 *     HalpSetResumeTime @ 0x140386040 (HalpSetResumeTime.c)
 *     RtlpHpVaMgrCtxStart @ 0x14039D158 (RtlpHpVaMgrCtxStart.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CE16C (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404B6564 (HalpTimerConvertAuxiliaryCounter.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404B6660 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404B6790 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpArtQueryCounter @ 0x1404D5C60 (HalpArtQueryCounter.c)
 *     EtwpGetDurationSince @ 0x1405A89B4 (EtwpGetDurationSince.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1405CFC30 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1405CFCFC (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1405F9738 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x140654DEC (MiCaptureSectionCreateExtendedParameters.c)
 *     PnpConcatPWSTR @ 0x14068CC14 (PnpConcatPWSTR.c)
 *     PnpAllocatePWSTR @ 0x1406B0F08 (PnpAllocatePWSTR.c)
 *     PnpCopyDevPropertyArray @ 0x14074D2EC (PnpCopyDevPropertyArray.c)
 *     PnpAllocateMultiSZ @ 0x14074D52C (PnpAllocateMultiSZ.c)
 *     SdbpResolveMatchingFile @ 0x1407531CC (SdbpResolveMatchingFile.c)
 *     WmipBuildInstanceSet @ 0x1407563C8 (WmipBuildInstanceSet.c)
 *     AslStringDuplicate @ 0x14075A094 (AslStringDuplicate.c)
 *     PopBootStatSet @ 0x14077F168 (PopBootStatSet.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14078EF94 (RtlpMuiRegGetOrAddStringToPool.c)
 *     PopFxConvertV1Components @ 0x1407B5F3C (PopFxConvertV1Components.c)
 *     PopBootStatGet @ 0x1407C18F0 (PopBootStatGet.c)
 *     PpmRegisterProfiles @ 0x1407C5F28 (PpmRegisterProfiles.c)
 *     PopFxPepPerfInfoQuery @ 0x1408E51BC (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E53D4 (PopFxRegisterComponentPerfStates.c)
 *     PopReadResumeContext @ 0x1408E7198 (PopReadResumeContext.c)
 *     PopBootStatCheckIntegrity @ 0x1408F2344 (PopBootStatCheckIntegrity.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140919D78 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140919EE0 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x14096CA9C (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x14096CC34 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x14096CE20 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     PopQpcTimeInMs @ 0x140990E18 (PopQpcTimeInMs.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409B2274 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F4784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F71B0 (AnFwpBackgroundUpdateTimer.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     GetBootSystemTime @ 0x140A7182C (GetBootSystemTime.c)
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
