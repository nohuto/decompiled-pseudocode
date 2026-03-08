/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x1C001F0A0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C001F298 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1C001EEB8 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C001EFA8 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        __int64 a3,
        int a4)
{
  _DWORD *v6; // r9
  int v7; // ebx
  unsigned __int32 v8; // eax
  BOOL v9; // ecx
  unsigned __int32 v10; // ett
  int v11; // edx
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  signed __int32 v15; // eax
  int v16; // r10d
  char v17; // bl
  signed __int32 v18; // r8d
  signed __int32 v19; // ett

  v6 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( (_DWORD)a3 )
  {
    case 0:
      goto LABEL_33;
    case 1:
LABEL_32:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a3, (_DWORD *)a1);
      return v6;
    case 2:
    case 3:
      goto LABEL_16;
    case 4:
LABEL_33:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a3, (_DWORD *)a1);
      return v6;
    case 5:
      goto LABEL_32;
  }
  if ( (unsigned int)(a3 - 6) >= 2 )
  {
    v7 = a3 - 320;
    if ( (unsigned int)(a3 - 320) < 0x40 )
    {
      v8 = *((_DWORD *)a2 + 1);
      do
      {
        v9 = (v8 & 0x10) != 0 && ((v8 >> 5) & 0x3F) == v7;
        v6[4] = v9;
        v10 = v8;
        v8 = _InterlockedCompareExchange(a2 + 1, (32 * (v7 & 0x3F)) | v8 & 0xFFFFF81F | 0x10, v8);
      }
      while ( v10 != v8 );
    }
    v6[2] = a3;
    v6[1] = 1;
    v6[3] = a4;
    return v6;
  }
LABEL_16:
  v11 = 0;
  v12 = a3 - 2;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 3;
      if ( v14 )
      {
        if ( v14 == 1 )
          v11 = 16;
      }
      else
      {
        v11 = 4;
      }
    }
    else
    {
      v11 = 8;
    }
  }
  else
  {
    v11 = 2;
  }
  v15 = *a2;
  v16 = 1;
  do
  {
    v17 = v15;
    *(_DWORD *)(a1 + 16) = (v15 | v11) == v15;
    v18 = v15 | v11 | 1;
    if ( (v15 | v11) == v15 )
      v18 = v15 | v11;
    v19 = v15;
    v15 = _InterlockedCompareExchange(a2, v18, v15);
  }
  while ( v19 != v15 );
  if ( (v18 & 1) == 0 || (v17 & 1) != 0 )
    v16 = 0;
  *(_DWORD *)a1 = v16;
  return v6;
}
