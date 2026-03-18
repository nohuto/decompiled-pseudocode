/*
 * XREFs of wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1C006D18C
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C006D158 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C006D158 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3)
{
  int v5; // edi
  __int64 *v6; // rsi
  bool v7; // zf
  __int64 v8; // rax
  char CachedFeatureEnabledState; // al
  unsigned int v10; // ecx
  __int64 v12; // [rsp+48h] [rbp+10h]

  HIDWORD(v12) = 0;
  v5 = (a2 >> 4) & 1;
  if ( v5 )
  {
    v6 = *(__int64 **)(a3 + 24);
    v7 = v6 == 0LL;
LABEL_3:
    if ( !v7 )
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( !*v6 )
          break;
        if ( !*(_BYTE *)(v8 + 22) && !*(_BYTE *)(v8 + 21) )
        {
          CachedFeatureEnabledState = wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                                        *(unsigned int **)v8,
                                        *v6);
          v5 = v5 && (CachedFeatureEnabledState & 8) != 0;
          ++v6;
          v7 = v5 == 0;
          goto LABEL_3;
        }
        if ( !v5 || !*(_BYTE *)(v8 + 23) )
        {
          v5 = 0;
          break;
        }
        v5 = 1;
        ++v6;
      }
    }
  }
  v10 = 128;
  if ( ((a2 >> 3) & 1) != v5 )
    v10 = 136;
  _InterlockedXor(a1, v10);
  LODWORD(v12) = a2 ^ v10;
  return v12;
}
