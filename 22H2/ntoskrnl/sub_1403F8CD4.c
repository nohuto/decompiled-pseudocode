/*
 * XREFs of sub_1403F8CD4 @ 0x1403F8CD4
 * Callers:
 *     sub_1405D7380 @ 0x1405D7380 (sub_1405D7380.c)
 *     sub_1405D7628 @ 0x1405D7628 (sub_1405D7628.c)
 *     sub_1405D78F8 @ 0x1405D78F8 (sub_1405D78F8.c)
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     sub_140666A00 @ 0x140666A00 (sub_140666A00.c)
 *     sub_1406C5D54 @ 0x1406C5D54 (sub_1406C5D54.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140252780 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1403F13E0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void sub_1403F8CD4()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)dword_140CDB438;
  if ( (dword_140CDB438 & 0x10) == 0 )
  {
    LODWORD(v0) = dword_140CDB438 & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&off_1400C8DC8, v0, 3, 1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3, (__int64)&off_1400C8DC8);
  }
}
