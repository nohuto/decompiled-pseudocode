/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0010068
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C000FFE4 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C000FE98 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall_nop @ 0x1C00106A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5)
{
  _DWORD *v7; // rax
  unsigned int v8; // ebx
  int v10; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+34h] [rbp-44h]
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  v7 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v12, a2, a5);
  v8 = 0;
  v13 = *(_OWORD *)v7;
  v14 = *((_QWORD *)v7 + 2);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(
      40765348LL,
      a5,
      1LL,
      &Feature_Servicing_ProtocolCommandTransferLength__private_reporting,
      &v13);
  if ( a3 && a5 != 254 )
  {
    v10 = 40765348;
    v11 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v11) |= 1u;
    RtlNotifyFeatureUsage(&v10);
  }
  LOBYTE(v8) = (_DWORD)v14 == 0;
  return v8;
}
