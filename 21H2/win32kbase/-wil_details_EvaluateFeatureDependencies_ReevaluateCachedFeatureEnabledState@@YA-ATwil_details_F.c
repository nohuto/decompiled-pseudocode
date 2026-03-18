/*
 * XREFs of ?wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C02C8374
 * Callers:
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C02C8340 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C02C8340 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3)
{
  int v5; // esi
  __int64 *v6; // r14
  unsigned int v7; // ecx
  __int64 v9; // rax
  __int64 v10; // [rsp+40h] [rbp+8h]

  HIDWORD(v10) = 0;
  v5 = (a2 >> 4) & 1;
  if ( v5 )
  {
    v6 = *(__int64 **)(a3 + 24);
    if ( v6 )
    {
      while ( 1 )
      {
        v9 = *v6;
        if ( !*v6 )
          goto LABEL_3;
        if ( *(_BYTE *)(v9 + 22) || *(_BYTE *)(v9 + 21) )
          break;
        if ( (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*(unsigned int **)v9, *v6) & 8) != 0 )
          goto LABEL_12;
        v5 = 0;
LABEL_13:
        ++v6;
        if ( !v5 )
          goto LABEL_3;
      }
      if ( !*(_BYTE *)(v9 + 23) )
      {
        v5 = 0;
        goto LABEL_3;
      }
LABEL_12:
      v5 = 1;
      goto LABEL_13;
    }
  }
LABEL_3:
  v7 = 128;
  if ( ((a2 >> 3) & 1) != v5 )
    v7 = 136;
  _InterlockedXor(a1, v7);
  LODWORD(v10) = a2 ^ v7;
  return v10;
}
