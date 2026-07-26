/*
 * XREFs of wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1C00F94AC
 * Callers:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C00F9474 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C00F9474 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        unsigned __int32 a2,
        __int64 a3)
{
  signed __int32 v3; // ebx
  int v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // rax
  char CachedFeatureEnabledState; // al
  bool v9; // zf
  unsigned int v10; // edx
  signed __int32 v11; // eax
  __int64 v13; // [rsp+30h] [rbp+8h]

  HIDWORD(v13) = 0;
  v3 = a2;
  v5 = (a2 >> 6) & 1;
  if ( v5 )
  {
    v6 = *(__int64 **)(a3 + 32);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( !*v6 )
          goto LABEL_14;
        if ( *(_BYTE *)(v7 + 30) || *(_BYTE *)(v7 + 29) )
        {
          if ( !v5 )
            goto LABEL_12;
          v9 = *(_BYTE *)(v7 + 31) == 0;
        }
        else
        {
          CachedFeatureEnabledState = wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                                        *(unsigned int **)v7,
                                        *v6);
          if ( !v5 )
            goto LABEL_12;
          v9 = (CachedFeatureEnabledState & 1) == 0;
        }
        if ( v9 )
        {
LABEL_12:
          v5 = 0;
          goto LABEL_13;
        }
        v5 = 1;
LABEL_13:
        ++v6;
        if ( !v5 )
          goto LABEL_14;
      }
    }
  }
  while ( 1 )
  {
LABEL_14:
    v10 = v5 & 0xFFFFFFCF | v3 & 0xFFFFFFCE;
    if ( (v3 & 1) == v5 )
      v10 = v5 | v3 & 0xFFFFFFFE;
    v11 = _InterlockedCompareExchange(a1, v10 & 0xFFFFFDFF, v3);
    if ( v3 == v11 )
      break;
    v3 = v11;
  }
  LODWORD(v13) = v10 & 0xFFFFFDFF;
  return v13;
}
