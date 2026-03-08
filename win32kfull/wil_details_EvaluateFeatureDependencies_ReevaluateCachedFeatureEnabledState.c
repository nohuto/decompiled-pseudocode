/*
 * XREFs of wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1C039C228
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C039C1F0 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C039C1F0 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        unsigned __int32 a2,
        __int64 a3)
{
  signed __int32 v3; // ebx
  int v5; // edi
  __int64 *v6; // rsi
  bool v7; // zf
  __int64 v8; // rax
  char CachedFeatureEnabledState; // al
  signed __int32 v10; // eax
  signed __int32 v11; // ecx
  signed __int32 i; // edx
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  __int64 v17; // [rsp+48h] [rbp+10h]

  HIDWORD(v17) = 0;
  v3 = a2;
  v5 = (a2 >> 6) & 1;
  if ( v5 )
  {
    v6 = *(__int64 **)(a3 + 32);
    v7 = v6 == 0LL;
LABEL_3:
    if ( !v7 )
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( !*v6 )
          break;
        if ( !*(_BYTE *)(v8 + 30) && !*(_BYTE *)(v8 + 29) )
        {
          CachedFeatureEnabledState = wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                                        *(unsigned int **)v8,
                                        *v6);
          v5 = v5 && (CachedFeatureEnabledState & 1) != 0;
          ++v6;
          v7 = v5 == 0;
          goto LABEL_3;
        }
        if ( !v5 || !*(_BYTE *)(v8 + 31) )
        {
          v5 = 0;
          break;
        }
        v5 = 1;
        ++v6;
      }
    }
  }
  LOBYTE(v10) = v3;
  v11 = v3;
  for ( i = v3; ; i = v10 )
  {
    v13 = v10 & 1;
    v14 = v5 | v3 & 0xFFFFFFFE;
    if ( v13 == v5 )
      i = v11;
    v15 = v14 & 0xFFFFFFCF;
    if ( v13 == v5 )
      v15 = v14;
    v10 = _InterlockedCompareExchange(a1, v15 & 0xFFFFFDFF, i);
    if ( i == v10 )
      break;
    v3 = v10;
    v11 = v10;
  }
  LODWORD(v17) = v15 & 0xFFFFFDFF;
  return v17;
}
