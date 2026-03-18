/*
 * XREFs of sub_140A0FC24 @ 0x140A0FC24
 * Callers:
 *     sub_140A0F914 @ 0x140A0F914 (sub_140A0F914.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140361540 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407E2020 @ 0x1407E2020 (sub_1407E2020.c)
 *     WbAlloc @ 0x1407E3010 (WbAlloc.c)
 *     WbVerifyVirtualAddressSignature @ 0x1407E4008 (WbVerifyVirtualAddressSignature.c)
 */

__int64 __fastcall sub_140A0FC24(int *a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  unsigned __int64 v6; // r9
  unsigned int v7; // ecx
  signed int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r14d
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  void **v15; // r15
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  SIZE_T v19; // rax
  void *v20; // rdx
  enum wil_ReportingKind v21; // ecx
  int v22; // eax
  unsigned int v23; // eax
  const void *v24; // r15
  void *v25; // rax
  unsigned int v26; // r14d
  unsigned __int64 v27; // rcx
  enum wil_ReportingKind v29[4]; // [rsp+58h] [rbp-50h] BYREF
  void *Source1; // [rsp+68h] [rbp-40h]
  const void *v31; // [rsp+78h] [rbp-30h]
  int v32; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+10h]
  __int64 v34; // [rsp+C0h] [rbp+18h]
  SIZE_T Length; // [rsp+C8h] [rbp+20h] BYREF

  v34 = a3;
  v33 = a2;
  v5 = *a1;
  if ( *a1 == 1 )
  {
    Source1 = (void *)*((_QWORD *)a1 + 1);
    v6 = 16LL * *((unsigned int *)Source1 + 60);
    v7 = -1;
    if ( v6 <= 0xFFFFFFFF )
      v7 = 16 * *((_DWORD *)Source1 + 60);
    v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v6 > 0xFFFFFFFF )
      goto LABEL_54;
    v9 = v7 + 248;
    v10 = -1;
    if ( v7 + 248 >= v7 )
      v10 = v7 + 248;
    v8 = v9 < v7 ? 0xC0000095 : 0;
    if ( v9 < v7 )
      goto LABEL_54;
    v11 = 1;
    Length = 248LL;
  }
  else
  {
    v32 = 3;
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
        (const enum wil_ReportingKind *)&v32,
        0LL,
        0,
        1uLL);
    }
    if ( v5 )
    {
      v8 = -1073741811;
      goto LABEL_54;
    }
    Source1 = (void *)*((_QWORD *)a1 + 1);
    v12 = 12LL * *((unsigned int *)Source1 + 60);
    v13 = -1;
    if ( v12 <= 0xFFFFFFFF )
      v13 = 12 * *((_DWORD *)Source1 + 60);
    v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v12 > 0xFFFFFFFF )
      goto LABEL_54;
    v14 = v13 + 244;
    v10 = -1;
    if ( v13 + 244 >= v13 )
      v10 = v13 + 244;
    v8 = v14 < v13 ? 0xC0000095 : 0;
    if ( v14 < v13 )
      goto LABEL_54;
    v11 = 0;
    Length = 244LL;
  }
  *(_DWORD *)(a3 + 48) = v11;
  *(_DWORD *)(a3 + 52) = a1[1];
  v15 = (void **)(a3 + 56);
  v8 = WbAlloc(v10, (_QWORD *)(a3 + 56));
  if ( v8 >= 0 )
  {
    v16 = v33;
    if ( v10 )
    {
      v17 = *(_QWORD *)(v33 + 8);
      v18 = v17 + v10;
      if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(*v15, *(const void **)(v33 + 8), v10);
    v8 = WbVerifyVirtualAddressSignature(*(PVOID *)(v16 + 8), v10, 1);
    if ( v8 >= 0 )
    {
      v8 = sub_1407E2020((UCHAR *)*v15, v10);
      if ( v8 >= 0 )
      {
        v19 = RtlCompareMemory(Source1, *v15, Length);
        if ( v19 != Length )
        {
          v8 = -1073741811;
          goto LABEL_54;
        }
        if ( *(_DWORD *)(a3 + 48) == 1 )
        {
          v20 = *v15;
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(v33 + 8) - (*((_DWORD *)*v15 + 10) & 0xFFFFFFF);
          v21 = *((_DWORD *)v20 + 12);
          v22 = *((_DWORD *)v20 + 11);
        }
        else
        {
          LODWORD(Length) = 3;
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
              (const enum wil_ReportingKind *)&Length,
              0LL,
              0,
              1uLL);
          }
          if ( *(_DWORD *)(a3 + 48) )
          {
            v8 = -1073741811;
            goto LABEL_54;
          }
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(v33 + 8) - (*((_DWORD *)*v15 + 10) & 0xFFFFFFF);
          v29[0] = wil_ReportingKind_DeviceUsage;
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
              v29,
              0LL,
              0,
              1uLL);
          }
          if ( *(_DWORD *)(a3 + 48) )
          {
            v8 = -1073741811;
            goto LABEL_54;
          }
          v21 = *((_DWORD *)*v15 + 12);
          v22 = *((_DWORD *)*v15 + 11);
        }
        v29[2] = v21;
        v23 = v22 & 0xFFFFFFF;
        if ( v21 == wil_ReportingKind_None )
        {
LABEL_50:
          *(_DWORD *)(a3 + 16) = 1;
          goto LABEL_54;
        }
        v24 = (const void *)(*(_QWORD *)(a3 + 32) + v23);
        v31 = v24;
        v25 = (void *)(4LL * (unsigned int)v21);
        Source1 = v25;
        v26 = -1;
        if ( (unsigned __int64)v25 <= 0xFFFFFFFF )
          v26 = 4 * v21;
        LODWORD(Source1) = v26;
        v8 = (unsigned __int64)v25 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( (unsigned __int64)v25 <= 0xFFFFFFFF )
        {
          if ( v26 )
          {
            v27 = (unsigned __int64)v24 + v26;
            if ( v27 > 0x7FFFFFFF0000LL || v27 < (unsigned __int64)v24 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v8 = WbAlloc(v26, (_QWORD *)(a3 + 40));
          if ( v8 >= 0 )
          {
            memmove(*(void **)(a3 + 40), v24, v26);
            goto LABEL_50;
          }
        }
      }
    }
  }
LABEL_54:
  *(_DWORD *)(a3 + 20) = v8;
  return (unsigned int)v8;
}
