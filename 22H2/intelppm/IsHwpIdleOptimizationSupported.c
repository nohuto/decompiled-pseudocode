/*
 * XREFs of IsHwpIdleOptimizationSupported @ 0x1C0006E84
 * Callers:
 *     GetHwpPerfControlHandler @ 0x1C0006A00 (GetHwpPerfControlHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00047C0 (GetCpuIdInfo.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0007BB4 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

char IsHwpIdleOptimizationSupported()
{
  char v0; // bl
  __int128 v2; // [rsp+40h] [rbp-38h] BYREF
  __int128 v3; // [rsp+50h] [rbp-28h] BYREF

  v2 = 0LL;
  v0 = 0;
  v3 = 0LL;
  GetCpuIdInfo(0, &v2);
  if ( (unsigned int)v2 >= 6 )
  {
    GetCpuIdInfo(6u, &v3);
    if ( (v3 & 0x100080) == 0x100080 )
    {
      v0 = 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (unsigned int)&Feature_HwpAllowQosIdleOptimizations__private_reporting,
        16046509,
        0,
        0,
        (__int64)&Feature_HwpAllowFastMsrOptimizations_logged_traits,
        1);
    }
  }
  return v0;
}
