/*
 * XREFs of wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x140508720
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x140285F94 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        volatile signed __int32 *a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  signed __int32 v4; // r10d
  BOOL v8; // edi
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // r8d
  unsigned __int64 v13; // rdx
  __int64 result; // rax

  v4 = *a1;
  v8 = a2 == 5;
  while ( 1 )
  {
    a4[1] = 0;
    v9 = v4 | 1;
    if ( (((v4 | 1u) >> 22) & 1) != v8 )
    {
      if ( ((v9 >> 15) & 0x7F) != 0 )
      {
        a4[1] = (v9 >> 15) & 0x7F;
        v10 = 5;
        if ( a2 != 1 )
          v10 = 1;
        v9 = v4 & 0xFFC07FFE | 1;
        a4[2] = v10;
      }
      v11 = 0;
      if ( a2 == 5 )
        v11 = 0x400000;
      v9 = v9 & 0xFFBFFFFF | v11;
    }
    v12 = (v9 >> 15) & 0x7F;
    v13 = (unsigned int)(v12 + a3);
    if ( v13 > 0x7F || v13 < ((v9 >> 15) & 0x7F) )
    {
      LODWORD(v13) = a3;
      a4[2] = a2;
      a4[1] = v12;
    }
    result = (unsigned int)_InterlockedCompareExchange(a1, v9 ^ (v9 ^ ((_DWORD)v13 << 15)) & 0x3F8000, v4);
    if ( v4 == (_DWORD)result )
      break;
    v4 = result;
  }
  a4[4] = 0;
  *a4 = (v4 & 1) == 0;
  return result;
}
