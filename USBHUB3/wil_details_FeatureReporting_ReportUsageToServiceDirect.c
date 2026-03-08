/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C000C768
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C000C97C (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C000C57C (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1C000C674 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // r10
  unsigned int v4; // esi
  unsigned int v6; // edi
  __int16 v7; // bx
  int v8; // r9d
  unsigned __int32 v9; // eax
  unsigned __int32 v10; // ett
  int v11; // ecx
  signed __int32 v12; // edx
  char v13; // r9
  signed __int32 v14; // r8d
  bool v15; // zf
  signed __int32 v16; // eax
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]

  v3 = *(volatile signed __int32 **)(a1 + 8);
  v4 = 0;
  v18 = a2;
  v20 = 0LL;
  v6 = a3;
  v7 = a2;
  v19 = 0LL;
  switch ( (_DWORD)a3 )
  {
    case 0:
      goto LABEL_32;
    case 1:
LABEL_31:
      wil_details_FeatureReporting_IncrementOpportunityInCache(v3, a3, a3, &v19);
      goto LABEL_33;
    case 2:
    case 3:
      goto LABEL_15;
    case 4:
LABEL_32:
      wil_details_FeatureReporting_IncrementUsageInCache(v3, a3, a3, &v19);
      goto LABEL_33;
    case 5:
      goto LABEL_31;
  }
  if ( (unsigned int)(a3 - 6) >= 2 )
  {
    v8 = a3 - 320;
    if ( (unsigned int)(a3 - 320) < 0x40 )
    {
      v9 = *((_DWORD *)v3 + 1);
      do
      {
        if ( (v9 & 0x10) == 0 || (LODWORD(v20) = 1, ((v9 >> 5) & 0x3F) != v8) )
          LODWORD(v20) = 0;
        v10 = v9;
        v9 = _InterlockedCompareExchange(v3 + 1, (32 * (v8 & 0x3F)) | v9 & 0xFFFFF81F | 0x10, v9);
      }
      while ( v10 != v9 );
    }
    *((_QWORD *)&v19 + 1) = __PAIR64__(HIDWORD(v18), a3);
    DWORD1(v19) = 1;
    goto LABEL_33;
  }
LABEL_15:
  v11 = 0;
  switch ( (_DWORD)a3 )
  {
    case 2:
      v11 = 2;
      break;
    case 3:
      v11 = 8;
      break;
    case 6:
      v11 = 4;
      break;
    case 7:
      v11 = 16;
      break;
  }
  v12 = *v3;
  do
  {
    v13 = v12;
    LODWORD(v20) = (v12 | v11) == v12;
    v14 = v12 | v11 | 1;
    if ( (v12 | v11) == v12 )
      v14 = v12 | v11;
    v16 = _InterlockedCompareExchange(v3, v14, v12);
    v15 = v12 == v16;
    v12 = v16;
  }
  while ( !v15 );
  LODWORD(v19) = (v14 & 1) != 0 && (v13 & 1) == 0;
LABEL_33:
  v22 = v20;
  v21 = v19;
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(*(unsigned int *)(a1 + 24), v6, 1LL, *(_QWORD *)(a1 + 8), &v21);
  if ( (v7 & 0x400) != 0 && v6 != 254 )
  {
    LODWORD(v18) = *(_DWORD *)(a1 + 24);
    HIDWORD(v18) = (unsigned __int16)v6;
    if ( (v7 & 0x800) != 0 )
      HIWORD(v18) |= 1u;
    RtlNotifyFeatureUsage(&v18);
  }
  LOBYTE(v4) = (_DWORD)v22 == 0;
  return v4;
}
