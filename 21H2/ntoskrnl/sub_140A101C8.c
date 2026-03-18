/*
 * XREFs of sub_140A101C8 @ 0x140A101C8
 * Callers:
 *     sub_140A100D4 @ 0x140A100D4 (sub_140A100D4.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140361540 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     sub_140A102DC @ 0x140A102DC (sub_140A102DC.c)
 *     sub_140A103F4 @ 0x140A103F4 (sub_140A103F4.c)
 */

__int64 __fastcall sub_140A101C8(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // edi
  int v6; // eax
  int v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_QWORD *)(a1 + 64) = v4;
    if ( !v4 )
    {
      v5 = *(_DWORD *)(a1 + 72);
      while ( --v5 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 48) == 1 )
        {
          v6 = sub_140A103F4(a1, 16LL * v5 + *(_QWORD *)(a1 + 56) + 248LL);
        }
        else
        {
          v8 = 3;
          if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                               &stru_140CE21C8,
                               0xE67B5Au,
                               0,
                               0,
                               wil_details_ServiceReportingKind_PotentialDeviceUsage)
            && g_wil_details_pfnFeatureLoggingHook )
          {
            g_wil_details_pfnFeatureLoggingHook(
              0xE67B5Au,
              &Feature_PdttSupport_logged_traits,
              0LL,
              0,
              (const enum wil_ReportingKind *)&v8,
              0LL,
              0,
              1uLL);
          }
          if ( *(_DWORD *)(a1 + 48) )
            return (unsigned int)-1073741811;
          v6 = sub_140A102DC(a1, *(_QWORD *)(a1 + 56) + 4 * (3LL * v5 + 61));
        }
        v2 = v6;
        if ( v6 < 0 )
          return v2;
        --*(_DWORD *)(a1 + 72);
      }
    }
  }
  return v2;
}
