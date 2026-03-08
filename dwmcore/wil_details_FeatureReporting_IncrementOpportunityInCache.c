/*
 * XREFs of wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x180110E0C
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180110FFC (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 result; // rax
  BOOL v8; // edi
  unsigned int v9; // ecx
  char v10; // r9
  int v11; // edx
  int v12; // r8d
  int v13; // r11d
  unsigned __int64 v14; // r8
  int v15; // ett

  LODWORD(result) = *a1;
  v8 = a2 == 5;
  do
  {
    a4[1] = 0;
    v9 = result | 1;
    v10 = result;
    if ( ((((unsigned int)result | 1) >> 22) & 1) != v8 )
    {
      if ( ((v9 >> 15) & 0x7F) != 0 )
      {
        a4[1] = (v9 >> 15) & 0x7F;
        v11 = 5;
        if ( a2 != 1 )
          v11 = 1;
        v9 = result & 0xFFC07FFE | 1;
        a4[2] = v11;
      }
      v12 = 0;
      if ( a2 == 5 )
        v12 = 0x400000;
      v9 = v9 & 0xFFBFFFFF | v12;
    }
    v13 = (v9 >> 15) & 0x7F;
    v14 = (unsigned int)(v13 + 1);
    if ( v14 > 0x7F || v14 < ((v9 >> 15) & 0x7F) )
    {
      LODWORD(v14) = 1;
      a4[2] = a2;
      a4[1] = v13;
    }
    v15 = result;
    result = (unsigned int)_InterlockedCompareExchange(a1, (v9 ^ ((_DWORD)v14 << 15)) & 0x3F8000 ^ v9, result);
  }
  while ( v15 != (_DWORD)result );
  a4[4] = 0;
  *a4 = (v10 & 1) == 0;
  return result;
}
