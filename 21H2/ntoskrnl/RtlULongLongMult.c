/*
 * XREFs of RtlULongLongMult @ 0x1402F35E8
 * Callers:
 *     SepCaptureTokenSecurityOperations @ 0x14023B028 (SepCaptureTokenSecurityOperations.c)
 *     RtlCreateAtomTableEx @ 0x1402522D0 (RtlCreateAtomTableEx.c)
 *     PpmConvertTime @ 0x14026A1CC (PpmConvertTime.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1402F2020 (AuthzBasepCopyoutSecurityAttributes.c)
 *     HalpSetTimer @ 0x1402F2BCC (HalpSetTimer.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x1402F3190 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1402F350C (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     EmpEvaluateNodeLink @ 0x140373C6C (EmpEvaluateNodeLink.c)
 *     HalpSetResumeTime @ 0x140386890 (HalpSetResumeTime.c)
 *     RtlpHpVaMgrCtxStart @ 0x14039D9A8 (RtlpHpVaMgrCtxStart.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CE9DC (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404B6854 (HalpTimerConvertAuxiliaryCounter.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404B6950 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404B6A80 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpArtQueryCounter @ 0x1404D5F60 (HalpArtQueryCounter.c)
 *     EtwpGetDurationSince @ 0x1405A8CA4 (EtwpGetDurationSince.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1405CFC30 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1405CFCFC (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     PnpConcatPWSTR @ 0x140607BE4 (PnpConcatPWSTR.c)
 *     PnpAllocatePWSTR @ 0x14062CF38 (PnpAllocatePWSTR.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1406E8E98 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14071EB3C (MiCaptureSectionCreateExtendedParameters.c)
 *     PnpCopyDevPropertyArray @ 0x14074E15C (PnpCopyDevPropertyArray.c)
 *     PnpAllocateMultiSZ @ 0x14074E39C (PnpAllocateMultiSZ.c)
 *     SdbpResolveMatchingFile @ 0x140753B9C (SdbpResolveMatchingFile.c)
 *     WmipBuildInstanceSet @ 0x140756D98 (WmipBuildInstanceSet.c)
 *     AslStringDuplicate @ 0x14075AA64 (AslStringDuplicate.c)
 *     PopBootStatSet @ 0x14077F428 (PopBootStatSet.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14078F254 (RtlpMuiRegGetOrAddStringToPool.c)
 *     PopFxConvertV1Components @ 0x1407B5C9C (PopFxConvertV1Components.c)
 *     PopBootStatGet @ 0x1407C1650 (PopBootStatGet.c)
 *     PpmRegisterProfiles @ 0x1407C5C88 (PpmRegisterProfiles.c)
 *     PopFxPepPerfInfoQuery @ 0x1408E52CC (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E54E4 (PopFxRegisterComponentPerfStates.c)
 *     PopReadResumeContext @ 0x1408E72A8 (PopReadResumeContext.c)
 *     PopBootStatCheckIntegrity @ 0x1408F2454 (PopBootStatCheckIntegrity.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140919E88 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140919FF0 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x14096CC2C (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x14096CDC4 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x14096CFB0 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     PopQpcTimeInMs @ 0x140991634 (PopQpcTimeInMs.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409B3064 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F5784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F81B0 (AnFwpBackgroundUpdateTimer.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     GetBootSystemTime @ 0x140A7282C (GetBootSystemTime.c)
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
