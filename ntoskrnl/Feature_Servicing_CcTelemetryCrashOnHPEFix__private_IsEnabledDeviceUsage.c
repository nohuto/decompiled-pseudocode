/*
 * XREFs of Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage @ 0x140409A2C
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x14087C260 (CcTelemetryPeriodicTimerCallback.c)
 *     CcInitializeTelemetry @ 0x140B31E14 (CcInitializeTelemetry.c)
 *     CcInitializeCacheManager @ 0x140B3EB44 (CcInitializeCacheManager.c)
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledFallback @ 0x140409A64 (Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CcTelemetryCrashOnHPEFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CcTelemetryCrashOnHPEFix__private_featureState & 1;
  else
    return Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CcTelemetryCrashOnHPEFix__private_featureState,
             3LL);
}
