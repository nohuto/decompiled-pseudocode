/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x1C003DD4C
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C003DF34 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1C003DB78 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C003DC60 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

int *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        __int64 a3,
        int a4)
{
  int *v6; // r9
  int v7; // r10d
  int v8; // ecx
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  signed __int32 i; // edx
  signed __int32 v13; // ebx
  signed __int32 v14; // eax
  int v15; // ebx
  unsigned __int32 v16; // eax
  BOOL v17; // edx
  unsigned __int32 v18; // ett

  v6 = (int *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !(_DWORD)a3 )
    goto LABEL_34;
  v7 = 1;
  if ( (_DWORD)a3 == 1 )
  {
LABEL_33:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a3, (_DWORD *)a1);
    return v6;
  }
  if ( (int)a3 <= 1 )
    goto LABEL_25;
  if ( (int)a3 <= 3 )
  {
LABEL_8:
    v8 = 0;
    v9 = a3 - 2;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 3;
        if ( v11 )
        {
          if ( v11 == 1 )
            v8 = 16;
        }
        else
        {
          v8 = 4;
        }
      }
      else
      {
        v8 = 8;
      }
    }
    else
    {
      v8 = 2;
    }
    for ( i = *a2; ; i = v14 )
    {
      v13 = i | v8 | 1;
      v6[4] = (i | v8) == i;
      if ( (i | v8) == i )
        v13 = i | v8;
      v14 = _InterlockedCompareExchange(a2, v13, i);
      if ( i == v14 )
        break;
    }
    if ( (v13 & 1) == 0 || (i & 1) != 0 )
      v7 = 0;
    *v6 = v7;
    return v6;
  }
  if ( (_DWORD)a3 == 4 )
  {
LABEL_34:
    wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a3, (_DWORD *)a1);
    return v6;
  }
  if ( (_DWORD)a3 == 5 )
    goto LABEL_33;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_25:
  v15 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v16 = *((_DWORD *)a2 + 1);
    do
    {
      v17 = (v16 & 0x10) != 0 && ((v16 >> 5) & 0x3F) == v15;
      *(_DWORD *)(a1 + 16) = v17;
      v18 = v16;
      v16 = _InterlockedCompareExchange(a2 + 1, (32 * (v15 & 0x3F)) | v16 & 0xFFFFF81F | 0x10, v16);
    }
    while ( v18 != v16 );
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 12) = a4;
  return v6;
}
