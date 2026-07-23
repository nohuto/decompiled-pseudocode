/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x140285F94
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140285EBC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_atomic_uint32_compare_exchange_relaxed @ 0x1402516D8 (wil_atomic_uint32_compare_exchange_relaxed.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x140508720 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x140508814 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  int v6; // r10d
  int v9; // r11d
  int v10; // r9d
  volatile signed __int32 v11; // ecx
  signed __int32 v12; // r8d
  unsigned __int8 v13; // r8
  int v14; // esi
  volatile signed __int32 *v15; // rcx
  unsigned __int32 v16; // r8d
  int v17; // r9d
  int v18; // eax
  unsigned __int32 j; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 i; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a3 )
    goto LABEL_36;
  v9 = 1;
  if ( a3 == 1 )
  {
LABEL_35:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, (unsigned int)a3, a5, a1);
    return a1;
  }
  if ( a3 <= 1 )
    goto LABEL_25;
  if ( a3 <= 3 )
  {
LABEL_8:
    v10 = 0;
    switch ( a3 )
    {
      case 2:
        v10 = 2;
        break;
      case 3:
        v10 = 8;
        break;
      case 6:
        v10 = 4;
        break;
      case 7:
        v10 = 16;
        break;
    }
    v11 = *a2;
    for ( i = *a2; ; v11 = i )
    {
      v12 = v9 | v11 | v10;
      *(_DWORD *)(a1 + 16) = (v11 | v10) == v11;
      if ( (v11 | v10) == v11 )
        v12 = v11 | v10;
      if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(a2, (signed __int32 *)&i, v12) )
        break;
    }
    if ( (v13 & (unsigned __int8)v9) == 0 || ((unsigned __int8)v9 & (unsigned __int8)i) != 0 )
      v9 = 0;
    *(_DWORD *)a1 = v9;
    return a1;
  }
  if ( a3 == 4 )
  {
LABEL_36:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, (unsigned int)a3, a5, a1);
    return a1;
  }
  if ( a3 == 5 )
    goto LABEL_35;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_25:
  v14 = a3 - 320;
  if ( (unsigned int)(a3 - 320) >= 0x40 )
    goto LABEL_34;
  v15 = a2 + 1;
  v16 = *((_DWORD *)a2 + 1);
  v17 = 16;
  for ( j = v16; ; v16 = j )
  {
    v18 = ((unsigned __int8)v16 & (unsigned __int8)v17) != 0 && ((v16 >> 5) & 0x3F) == v14 ? v9 : 0;
    *(_DWORD *)(a1 + 16) = v18;
    if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(
                         v15,
                         (signed __int32 *)&j,
                         v17 | (32 * (v14 & 0x3F)) | v16 & 0xFFFFF81F) )
      break;
  }
  if ( !*(_DWORD *)(a1 + 16) )
  {
LABEL_34:
    *(_DWORD *)(a1 + 4) = a5;
    *(_DWORD *)(a1 + 8) = v6;
    *(_DWORD *)(a1 + 12) = a4;
  }
  return a1;
}
