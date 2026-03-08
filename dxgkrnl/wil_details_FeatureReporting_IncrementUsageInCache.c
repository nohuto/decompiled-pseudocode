/*
 * XREFs of wil_details_FeatureReporting_IncrementUsageInCache @ 0x1C00248C8
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C00249C0 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementUsageInCache(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  signed __int32 v4; // r8d
  BOOL v6; // edi
  unsigned int v7; // eax
  char v8; // r10
  int v9; // edx
  int v10; // r11d
  unsigned __int64 v11; // rdx
  bool v12; // zf
  __int64 result; // rax

  v4 = *a1;
  v6 = a2 == 4;
  do
  {
    a4[1] = 0;
    v7 = v4 | 1;
    v8 = v4;
    if ( (((v4 | 1u) >> 14) & 1) != v6 )
    {
      if ( ((v7 >> 5) & 0x1FF) != 0 )
      {
        a4[1] = (v7 >> 5) & 0x1FF;
        a4[2] = a2 == 0 ? 4 : 0;
        v7 = v4 & 0xFFFFC01E | 1;
      }
      v9 = 0;
      if ( a2 == 4 )
        v9 = 0x4000;
      v7 = v7 & 0xFFFFBFFF | v9;
    }
    v10 = (v7 >> 5) & 0x1FF;
    v11 = (unsigned int)(v10 + 1);
    if ( v11 > 0x1FF || v11 < (((unsigned __int64)v7 >> 5) & 0x1FF) )
    {
      LOWORD(v11) = 1;
      a4[2] = a2;
      a4[1] = v10;
    }
    result = (unsigned int)_InterlockedCompareExchange(
                             a1,
                             v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(32 * v11)) & 0x3FE0,
                             v4);
    v12 = v4 == (_DWORD)result;
    v4 = result;
  }
  while ( !v12 );
  a4[4] = 0;
  *a4 = (v8 & 1) == 0;
  return result;
}
