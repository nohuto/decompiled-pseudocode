/*
 * XREFs of ?Feature_2923253048__private_IsEnabled@@YAHXZ @ 0x1C015FFCC
 * Callers:
 *     ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02CC220 (-bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z.c)
 *     ?bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z @ 0x1C02CCE70 (-bSrcCopySRLE4D4@@YAHPEAUBLTINFO@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C015AE44 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 Feature_2923253048__private_IsEnabled(void)
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_2923253048__private_featureState,
                                (__int64)&Feature_2923253048__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_2923253048__private_reporting,
    0x30FD175u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Servicing_GdiTelemetry_37785925_logged_traits,
    v1,
    v3);
  return v1;
}
