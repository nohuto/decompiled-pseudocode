/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0003AE8
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0003A6C (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C00038FC (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004200 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // bx
  unsigned int v4; // esi
  _DWORD *v5; // rax
  unsigned int v6; // edi
  int v8; // [rsp+30h] [rbp-58h] BYREF
  int v9; // [rsp+34h] [rbp-54h]
  _BYTE v10[24]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF
  __int64 v12; // [rsp+60h] [rbp-28h]

  v3 = a2;
  v4 = a3;
  v5 = wil_details_FeatureReporting_RecordUsageInCache(
         (__int64)v10,
         (volatile signed __int32 *)&Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_reporting,
         a3,
         SHIDWORD(a2));
  v6 = 0;
  v11 = *(_OWORD *)v5;
  v12 = *((_QWORD *)v5 + 2);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(
      48310951LL,
      v4,
      1LL,
      &Feature_Servicing_Huawei22H2BluescreenAfterSleep__private_reporting,
      &v11);
  if ( (v3 & 0x400) != 0 && v4 != 254 )
  {
    v8 = 48310951;
    v9 = (unsigned __int16)v4;
    if ( (v3 & 0x800) != 0 )
      HIWORD(v9) |= 1u;
    RtlNotifyFeatureUsage(&v8);
  }
  LOBYTE(v6) = (_DWORD)v12 == 0;
  return v6;
}
