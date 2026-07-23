/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x18009C048
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009BFCC (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18009BE68 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlNotifyFeatureUsage @ 0x1801019C0 (RtlNotifyFeatureUsage.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // bx
  unsigned int v4; // esi
  int *v5; // rax
  unsigned int v6; // edi
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v9[24]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v10; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h]

  v3 = a2;
  v4 = a3;
  v5 = wil_details_FeatureReporting_RecordUsageInCache(
         (__int64)v9,
         (volatile signed __int32 *)&Feature_SearchPackagePaths__private_reporting,
         a3,
         SHIDWORD(a2));
  v6 = 0;
  v10 = *(_OWORD *)v5;
  v11 = *((_QWORD *)v5 + 2);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(24394929LL, v4, 1LL, &Feature_SearchPackagePaths__private_reporting, &v10);
  if ( (v3 & 0x400) != 0 && v4 != 254 )
  {
    FeatureUsageReport.ReportingOptions = 0;
    FeatureUsageReport.FeatureId = 24394929;
    FeatureUsageReport.ReportingKind = v4;
    if ( (v3 & 0x800) != 0 )
      FeatureUsageReport.ReportingOptions |= 1u;
    RtlNotifyFeatureUsage(&FeatureUsageReport);
  }
  LOBYTE(v6) = (_DWORD)v11 == 0;
  return v6;
}
