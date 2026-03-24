/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14025304C
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140252F20 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x140253124 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     RtlNotifyFeatureUsage @ 0x14058E130 (RtlNotifyFeatureUsage.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int16 v5; // bx
  __int64 v8; // rax
  unsigned int v9; // edi
  int v11; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+34h] [rbp-44h]
  char v13; // [rsp+38h] [rbp-40h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]

  v5 = a2;
  v8 = wil_details_FeatureReporting_RecordUsageInCache((unsigned int)&v13, *(_QWORD *)(a1 + 8), a3, HIDWORD(a2), a4);
  v9 = 0;
  v14 = *(_OWORD *)v8;
  v15 = *(_QWORD *)(v8 + 16);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(*(unsigned int *)(a1 + 24), a3, a4, *(_QWORD *)(a1 + 8), &v14);
  if ( (v5 & 0x400) != 0 && a3 != 254 )
  {
    v11 = *(_DWORD *)(a1 + 24);
    v12 = (unsigned __int16)a3;
    if ( (v5 & 0x800) != 0 )
      HIWORD(v12) |= 1u;
    RtlNotifyFeatureUsage(&v11);
  }
  LOBYTE(v9) = (_DWORD)v15 == 0;
  return v9;
}
