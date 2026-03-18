/*
 * XREFs of wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x140832AB0
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140832A7C (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140832A7C (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3)
{
  int v5; // edi
  __int64 *v6; // rsi
  unsigned int v7; // ecx
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h]

  HIDWORD(v10) = 0;
  v5 = (a2 >> 4) & 1;
  if ( v5 )
  {
    v6 = *(__int64 **)(a3 + 24);
    if ( v6 )
    {
      do
      {
        v9 = *v6;
        if ( !*v6 )
          break;
        if ( *(_BYTE *)(v9 + 22) || *(_BYTE *)(v9 + 21) )
        {
          if ( !*(_BYTE *)(v9 + 23) )
          {
            v5 = 0;
            break;
          }
        }
        else if ( (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*(unsigned int **)v9, *v6) & 8) == 0 )
        {
          v5 = 0;
          goto LABEL_10;
        }
        v5 = 1;
LABEL_10:
        ++v6;
      }
      while ( v5 );
    }
  }
  v7 = 128;
  if ( ((a2 >> 3) & 1) != v5 )
    v7 = 136;
  _InterlockedXor(a1, v7);
  LODWORD(v10) = a2 ^ v7;
  return v10;
}
