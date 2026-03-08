/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140263260
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140263110 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     wil_atomic_uint32_compare_exchange_relaxed @ 0x1404FBCFC (wil_atomic_uint32_compare_exchange_relaxed.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1404FBD18 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1404FBE10 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140614CE8 (CmFcManagerNotifyFeatureUsage.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  int *v4; // r10
  unsigned int v6; // edi
  __int16 v8; // bx
  _DWORD *v9; // r15
  int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // r8
  char v13; // r8
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  int v16; // r10d
  unsigned int i; // [rsp+30h] [rbp-29h] BYREF
  int v19; // [rsp+34h] [rbp-25h]
  __int128 v20; // [rsp+38h] [rbp-21h] BYREF
  __int64 v21; // [rsp+48h] [rbp-11h]
  __int64 v22; // [rsp+50h] [rbp-9h]
  __int128 v23; // [rsp+58h] [rbp-1h] BYREF
  __int64 v24; // [rsp+68h] [rbp+Fh]

  v4 = (int *)*((_QWORD *)a1 + 1);
  v6 = 0;
  v22 = a2;
  v21 = 0LL;
  v8 = a2;
  v9 = a1;
  v20 = 0LL;
  switch ( a3 )
  {
    case 0u:
    case 4u:
      wil_details_FeatureReporting_IncrementUsageInCache(v4, a3, a4, &v20);
      break;
    case 1u:
    case 5u:
      wil_details_FeatureReporting_IncrementOpportunityInCache(v4, a3, a4, &v20);
      break;
    case 2u:
    case 3u:
    case 6u:
    case 7u:
      v10 = 0;
      switch ( a3 )
      {
        case 2u:
          v10 = 2;
          break;
        case 3u:
          v10 = 8;
          break;
        case 6u:
          v10 = 4;
          break;
        case 7u:
          v10 = 16;
          break;
      }
      v11 = *v4;
      for ( i = *v4; ; v11 = i )
      {
        v12 = v11 | v10 | 1;
        LODWORD(v21) = (v11 | v10) == v11;
        if ( (v11 | v10) == v11 )
          v12 = v11 | v10;
        if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(v4, &i, v12) )
          break;
      }
      LODWORD(v20) = (v13 & 1) != 0 && (i & 1) == 0;
      break;
    default:
      v14 = a3 - 320;
      if ( a3 - 320 < 0x40 )
      {
        v15 = v4[1];
        a1 = v4 + 1;
        i = v15;
        v16 = 32 * (v14 & 0x3F);
        while ( 1 )
        {
          if ( (v15 & 0x10) == 0 || (LODWORD(v21) = 1, ((v15 >> 5) & 0x3F) != v14) )
            LODWORD(v21) = 0;
          if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(a1, &i, v16 | v15 & 0xFFFFF81F | 0x10) )
            break;
          v15 = i;
        }
      }
      *((_QWORD *)&v20 + 1) = __PAIR64__(HIDWORD(v22), a3);
      DWORD1(v20) = a4;
      break;
  }
  v24 = v21;
  v23 = v20;
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage((unsigned int)v9[6], a3, a4, *((_QWORD *)v9 + 1), &v23);
  if ( (v8 & 0x400) != 0 && a3 != 254 )
  {
    i = v9[6];
    v19 = (unsigned __int16)a3;
    if ( (v8 & 0x800) != 0 )
      HIWORD(v19) |= 1u;
    CmFcManagerNotifyFeatureUsage(a1, &i);
  }
  LOBYTE(v6) = (_DWORD)v24 == 0;
  return v6;
}
