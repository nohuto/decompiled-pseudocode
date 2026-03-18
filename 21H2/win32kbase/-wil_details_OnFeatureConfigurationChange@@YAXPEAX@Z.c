/*
 * XREFs of ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C02C91C0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C00B7DE8 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C02C8340 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C02C9268 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 */

void __fastcall wil_details_OnFeatureConfigurationChange(void *a1)
{
  unsigned __int64 *i; // rcx
  int v2; // r8d
  BOOL v3; // eax
  const struct wil_details_FeatureDescriptor *v4; // rax
  volatile signed __int32 **v5; // rdx
  unsigned __int64 *j; // rcx
  unsigned int **v7; // rax
  unsigned int **v8; // rbx
  unsigned int v9; // [rsp+38h] [rbp+10h]

  wil_details_UpdateFeatureConfiguredStates();
  v9 = 0;
  for ( i = (unsigned __int64 *)&wil_details_featureDescriptors_a; ; i = (unsigned __int64 *)(v5 + 6) )
  {
    v4 = wil_details_FeatureDescriptors_SkipPadding(i);
    v5 = (volatile signed __int32 **)v4;
    if ( !v4 )
      break;
    v2 = **(_DWORD **)v4;
    if ( (v2 & 0x80u) != 0 )
    {
      if ( (v2 & 0x60) != 0 )
        v3 = (**(_DWORD **)v4 & 0x60) == 64;
      else
        v3 = *((_BYTE *)v4 + 23) != 0;
      v9 = v9 & 0xFFFFFFEF | (16 * v3) ^ v2 & 0x10;
      _InterlockedXor(*v5, v9);
    }
  }
  for ( j = (unsigned __int64 *)&wil_details_featureDescriptors_a; ; j = (unsigned __int64 *)(v8 + 6) )
  {
    v7 = (unsigned int **)wil_details_FeatureDescriptors_SkipPadding(j);
    v8 = v7;
    if ( !v7 )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*v7, (__int64)v7);
  }
}
