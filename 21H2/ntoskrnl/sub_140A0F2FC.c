/*
 * XREFs of sub_140A0F2FC @ 0x140A0F2FC
 * Callers:
 *     sub_140A0F208 @ 0x140A0F208 (sub_140A0F208.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140361540 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     sub_140A0F4D4 @ 0x140A0F4D4 (sub_140A0F4D4.c)
 *     sub_140A0F68C @ 0x140A0F68C (sub_140A0F68C.c)
 */

__int64 __fastcall sub_140A0F2FC(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // r14d
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  int v10; // eax
  int v12; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  if ( v1 != -1 )
  {
    v4 = v1 + 1;
    *(_QWORD *)(a1 + 64) = v4;
    if ( v4 == 1 )
    {
      if ( *(_DWORD *)(a1 + 48) == 1 )
      {
        v5 = *(_QWORD *)(a1 + 56);
      }
      else
      {
        v12 = 3;
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
            (const enum wil_ReportingKind *)&v12,
            0LL,
            0,
            1uLL);
        }
        if ( *(_DWORD *)(a1 + 48) )
          return (unsigned int)-1073741811;
        v5 = *(_QWORD *)(a1 + 56);
      }
      v6 = *(_DWORD *)(v5 + 240);
      v7 = *(_DWORD *)(a1 + 72);
      if ( v7 < v6 )
      {
        v8 = *(_DWORD *)(a1 + 76);
        while ( 1 )
        {
          v9 = v7 >= v8;
          if ( *(_DWORD *)(a1 + 48) == 1 )
          {
            v10 = sub_140A0F68C(a1, v7 >= v8, 16LL * v7 + *(_QWORD *)(a1 + 56) + 248LL);
          }
          else
          {
            v12 = 3;
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
                (const enum wil_ReportingKind *)&v12,
                0LL,
                0,
                1uLL);
            }
            if ( *(_DWORD *)(a1 + 48) )
              return (unsigned int)-1073741811;
            v10 = sub_140A0F4D4(a1, v9, *(_QWORD *)(a1 + 56) + 4 * (3LL * v7 + 61));
          }
          v2 = v10;
          if ( v10 >= 0 )
          {
            *(_DWORD *)(a1 + 76) += v9;
            ++v7;
            ++*(_DWORD *)(a1 + 72);
            v8 = *(_DWORD *)(a1 + 76);
            if ( v7 < v6 )
              continue;
          }
          return v2;
        }
      }
    }
  }
  return v2;
}
