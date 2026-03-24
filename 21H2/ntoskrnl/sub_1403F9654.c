/*
 * XREFs of sub_1403F9654 @ 0x1403F9654
 * Callers:
 *     sub_1405D7380 @ 0x1405D7380 (sub_1405D7380.c)
 *     sub_1405D7628 @ 0x1405D7628 (sub_1405D7628.c)
 *     sub_1405D78F8 @ 0x1405D78F8 (sub_1405D78F8.c)
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     sub_14064CF94 @ 0x14064CF94 (sub_14064CF94.c)
 *     sub_140686D40 @ 0x140686D40 (sub_140686D40.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140252F20 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1403F0A5C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void sub_1403F9654()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)dword_140CDB458;
  if ( (dword_140CDB458 & 0x10) == 0 )
  {
    LODWORD(v0) = dword_140CDB458 & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&off_1400C8E48, v0, 3, 1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3, (__int64)&off_1400C8E48);
  }
}
