/*
 * XREFs of RtlULongLongMult @ 0x14024ED98
 * Callers:
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14024D7D0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     HalpSetTimer @ 0x14024E37C (HalpSetTimer.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14024E940 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x14024ECBC (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     RtlCreateAtomTableEx @ 0x140264090 (RtlCreateAtomTableEx.c)
 *     PpmConvertTime @ 0x14027C22C (PpmConvertTime.c)
 *     SepCaptureTokenSecurityOperations @ 0x14027F304 (SepCaptureTokenSecurityOperations.c)
 *     EmpEvaluateNodeLink @ 0x14037411C (EmpEvaluateNodeLink.c)
 *     HalpSetResumeTime @ 0x140386740 (HalpSetResumeTime.c)
 *     RtlpHpVaMgrCtxStart @ 0x14039D858 (RtlpHpVaMgrCtxStart.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CE86C (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404B6614 (HalpTimerConvertAuxiliaryCounter.c)
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404B6710 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404B6840 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 *     HalpArtQueryCounter @ 0x1404D5D20 (HalpArtQueryCounter.c)
 *     EtwpGetDurationSince @ 0x1405A8A74 (EtwpGetDurationSince.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1405CFC30 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1405CFCFC (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1405F9738 (MiCaptureAllocateMapExtendedParameters.c)
 *     PnpAllocatePWSTR @ 0x140638128 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x1406A9C64 (PnpConcatPWSTR.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14070775C (MiCaptureSectionCreateExtendedParameters.c)
 *     PnpCopyDevPropertyArray @ 0x14074DF9C (PnpCopyDevPropertyArray.c)
 *     PnpAllocateMultiSZ @ 0x14074E1DC (PnpAllocateMultiSZ.c)
 *     SdbpResolveMatchingFile @ 0x1407539DC (SdbpResolveMatchingFile.c)
 *     WmipBuildInstanceSet @ 0x140756BD8 (WmipBuildInstanceSet.c)
 *     AslStringDuplicate @ 0x14075A8A4 (AslStringDuplicate.c)
 *     PopBootStatSet @ 0x14077F268 (PopBootStatSet.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1407934B4 (RtlpMuiRegGetOrAddStringToPool.c)
 *     PopFxConvertV1Components @ 0x1407B61E0 (PopFxConvertV1Components.c)
 *     PopBootStatGet @ 0x1407C1130 (PopBootStatGet.c)
 *     PpmRegisterProfiles @ 0x1407C5768 (PpmRegisterProfiles.c)
 *     PopFxPepPerfInfoQuery @ 0x1408E516C (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E5384 (PopFxRegisterComponentPerfStates.c)
 *     PopReadResumeContext @ 0x1408E7148 (PopReadResumeContext.c)
 *     PopBootStatCheckIntegrity @ 0x1408F22F4 (PopBootStatCheckIntegrity.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140919D28 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140919E90 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x14096CA4C (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x14096CBE4 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x14096CDD0 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     PopQpcTimeInMs @ 0x140990634 (PopQpcTimeInMs.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409B2134 (PopDiagTraceFirmwareS3Stats.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F4784 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F71B0 (AnFwpBackgroundUpdateTimer.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
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
