/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x1C00D3660
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C00D3570 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_atomic_uint32_compare_exchange_relaxed @ 0x1C01D0684 (wil_atomic_uint32_compare_exchange_relaxed.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1C01D06A0 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C01D0788 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  int v5; // r10d
  _DWORD *v7; // r11
  int v9; // r9d
  int v10; // ecx
  __int64 v11; // r8
  char v12; // r8
  __int64 result; // rax
  int v14; // r9d
  int v15; // edi
  unsigned int v16; // r8d
  _DWORD *v17; // rcx
  int v18; // r11d
  int v19; // eax
  int i; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  v7 = a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( (int)a3 )
  {
    case 0:
    case 4:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, (unsigned int)a3, a3, a1);
      result = a1;
      break;
    case 1:
    case 5:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, (unsigned int)a3, a3, a1);
      result = a1;
      break;
    case 2:
    case 3:
    case 6:
    case 7:
      v9 = 0;
      switch ( (_DWORD)a3 )
      {
        case 2:
          v9 = 2;
          break;
        case 3:
          v9 = 8;
          break;
        case 6:
          v9 = 4;
          break;
        case 7:
          v9 = 16;
          break;
      }
      v10 = *a2;
      for ( i = *a2; ; v10 = i )
      {
        v11 = v10 | v9 | 1u;
        *(_DWORD *)(a1 + 16) = (v10 | v9) == v10;
        if ( (v10 | v9) == v10 )
          v11 = v10 | (unsigned int)v9;
        if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(v7, &i, v11) )
          break;
      }
      if ( (v12 & 1) == 0 || (i & 1) != 0 )
      {
        result = a1;
        *(_DWORD *)a1 = 0;
      }
      else
      {
        result = a1;
        *(_DWORD *)a1 = 1;
      }
      break;
    default:
      v14 = 1;
      v15 = a3 - 320;
      if ( (unsigned int)(a3 - 320) >= 0x40 )
        goto LABEL_30;
      v16 = a2[1];
      v17 = a2 + 1;
      a5 = v16;
      v18 = 32 * (v15 & 0x3F);
      while ( 1 )
      {
        v19 = (v16 & 0x10) != 0 && ((v16 >> 5) & 0x3F) == v15 ? v14 : 0;
        *(_DWORD *)(a1 + 16) = v19;
        if ( (unsigned int)wil_atomic_uint32_compare_exchange_relaxed(v17, &a5, v18 | v16 & 0xFFFFF81F | 0x10) )
          break;
        v16 = a5;
      }
      if ( !*(_DWORD *)(a1 + 16) )
      {
LABEL_30:
        *(_DWORD *)(a1 + 8) = v5;
        *(_DWORD *)(a1 + 4) = v14;
        *(_DWORD *)(a1 + 12) = a4;
      }
      result = a1;
      break;
  }
  return result;
}
