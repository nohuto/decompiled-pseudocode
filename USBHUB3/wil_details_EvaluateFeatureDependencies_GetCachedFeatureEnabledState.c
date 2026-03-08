/*
 * XREFs of wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0076220
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0076138 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0076220 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0076220 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2)
{
  unsigned __int32 v3; // edi
  int v5; // ebx
  _QWORD *v6; // rsi
  bool v7; // zf
  __int64 v8; // rax
  char CachedFeatureEnabledState; // al
  signed __int32 v10; // eax
  signed __int32 v11; // ecx
  int v12; // edx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  signed __int32 v15; // ett
  __int64 v16; // [rsp+50h] [rbp+18h]

  v3 = *a1;
  if ( (*a1 & 0x200) == 0 )
    return *(unsigned int *)a1;
  HIDWORD(v16) = 0;
  v5 = (v3 >> 6) & 1;
  if ( v5 )
  {
    v6 = *(_QWORD **)(a2 + 32);
    v7 = v6 == 0LL;
LABEL_5:
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
                                        *(_QWORD *)v8,
                                        *v6);
          v5 = v5 && (CachedFeatureEnabledState & 1) != 0;
          ++v6;
          v7 = v5 == 0;
          goto LABEL_5;
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
  v10 = v3;
  do
  {
    v11 = v3;
    v12 = v3 & 1;
    v13 = v5 | v3 & 0xFFFFFFFE;
    if ( v12 == v5 )
      v10 = v11;
    v14 = v13 & 0xFFFFFFCF;
    if ( v12 == v5 )
      v14 = v13;
    v15 = v10;
    v10 = _InterlockedCompareExchange(a1, v14 & 0xFFFFFDFF, v10);
    v3 = v10;
  }
  while ( v15 != v10 );
  LODWORD(v16) = v14 & 0xFFFFFDFF;
  return v16;
}
