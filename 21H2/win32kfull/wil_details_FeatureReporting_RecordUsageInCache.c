/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x1C00C5710
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C00C5614 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1C01C93F4 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C01C94DC (wil_details_FeatureReporting_IncrementUsageInCache.c)
 */

_DWORD *__fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, __int64 a2, int a3)
{
  int v3; // r10d
  _DWORD *v4; // r9
  int v5; // ecx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  unsigned int v9; // ecx
  signed __int32 v10; // eax
  int v12; // r11d
  unsigned __int32 v13; // eax
  int v14; // edx
  unsigned __int32 v15; // ett

  v3 = 0;
  v4 = (_DWORD *)a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a3 )
    goto LABEL_26;
  if ( a3 == 1 )
  {
LABEL_25:
    wil_details_FeatureReporting_IncrementOpportunityInCache(a1, (unsigned int)a3);
    return v4;
  }
  if ( a3 <= 1 )
    goto LABEL_18;
  if ( a3 <= 3 )
  {
LABEL_8:
    v5 = 0;
    v6 = a3 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 3;
        if ( v8 )
        {
          if ( v8 == 1 )
            v5 = 16;
        }
        else
        {
          v5 = 4;
        }
      }
      else
      {
        v5 = 8;
      }
    }
    else
    {
      v5 = 2;
    }
    v9 = v5 | 1;
    _m_prefetchw(&Feature_Win32kBugcheckOnFailedBCryptgenRandom__private_reporting);
    v10 = _InterlockedOr(&Feature_Win32kBugcheckOnFailedBCryptgenRandom__private_reporting, v9);
    *v4 = (v10 & 1) == 0;
    LOBYTE(v3) = (v10 & v9 & 0xFFFFFFFE) == (v9 & 0xFFFFFFFE);
    v4[4] = v3;
    return v4;
  }
  if ( a3 == 4 )
  {
LABEL_26:
    wil_details_FeatureReporting_IncrementUsageInCache(a1, (unsigned int)a3);
    return v4;
  }
  if ( a3 == 5 )
    goto LABEL_25;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_18:
  v12 = a3 - 320;
  if ( (unsigned int)(a3 - 320) < 0x40 )
  {
    v13 = dword_1C0336474;
    do
    {
      if ( (v13 & 0x10) == 0 || (v14 = 1, ((v13 >> 5) & 0x3F) != v12) )
        v14 = 0;
      *(_DWORD *)(a1 + 16) = v14;
      v15 = v13;
      v13 = _InterlockedCompareExchange(&dword_1C0336474, (32 * (v12 & 0x3F)) | v13 & 0xFFFFF81F | 0x10, v13);
    }
    while ( v15 != v13 );
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 12) = 0;
  return v4;
}
