/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C00024C4
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C00023A8 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C00025B4 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // bx
  __int64 v5; // rax
  unsigned int v6; // edi
  int v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+34h] [rbp-3Ch]
  char v10; // [rsp+38h] [rbp-38h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h]

  v3 = a2;
  v5 = wil_details_FeatureReporting_RecordUsageInCache(
         (unsigned int)&v10,
         (unsigned int)&Feature_Pldr_Ignore_Vetoes__private_reporting,
         a3,
         HIDWORD(a2));
  v6 = 0;
  v11 = *(_OWORD *)v5;
  v12 = *(_QWORD *)(v5 + 16);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(17000235LL, a3, 1LL, &Feature_Pldr_Ignore_Vetoes__private_reporting, &v11);
  if ( (v3 & 0x400) != 0 && a3 != 254 )
  {
    v8 = 17000235;
    v9 = (unsigned __int16)a3;
    if ( (v3 & 0x800) != 0 )
      HIWORD(v9) |= 1u;
    RtlNotifyFeatureUsage(&v8);
  }
  LOBYTE(v6) = (_DWORD)v12 == 0;
  return v6;
}
