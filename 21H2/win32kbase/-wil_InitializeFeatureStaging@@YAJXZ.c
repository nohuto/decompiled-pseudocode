/*
 * XREFs of ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C02E5A60
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C00B7DE8 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C02C8340 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 *     ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C02E5B54 (-wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ.c)
 */

__int64 wil_InitializeFeatureStaging(void)
{
  unsigned int v0; // eax
  unsigned __int64 *v1; // rcx
  unsigned int v2; // ebx
  const struct wil_details_FeatureDescriptor *v3; // rax
  volatile signed __int32 **v4; // rdx
  int v5; // r8d
  BOOL v6; // eax
  unsigned __int64 *i; // rcx
  unsigned int **v8; // rax
  unsigned int **v9; // rdi
  unsigned __int64 *j; // rcx
  const struct wil_details_FeatureDescriptor *v11; // rax
  unsigned int v13; // [rsp+30h] [rbp+8h]
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = RtlQueryFeatureConfigurationChangeStamp();
  v0 = wil_details_PopulateInitialConfiguredFeatureStates();
  v13 = 0;
  v1 = (unsigned __int64 *)&wil_details_featureDescriptors_a;
  v2 = v0;
  while ( 1 )
  {
    v3 = wil_details_FeatureDescriptors_SkipPadding(v1);
    v4 = (volatile signed __int32 **)v3;
    if ( !v3 )
      break;
    v5 = **(_DWORD **)v3;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( (v5 & 0x60) != 0 )
        v6 = (**(_DWORD **)v3 & 0x60) == 64;
      else
        v6 = *((_BYTE *)v3 + 23) != 0;
      v13 = v13 & 0xFFFFFFEF | (16 * v6) ^ v5 & 0x10;
      _InterlockedXor(*v4, v13);
    }
    v1 = (unsigned __int64 *)(v4 + 6);
  }
  for ( i = (unsigned __int64 *)&wil_details_featureDescriptors_a; ; i = (unsigned __int64 *)(v9 + 6) )
  {
    v8 = (unsigned int **)wil_details_FeatureDescriptors_SkipPadding(i);
    v9 = v8;
    if ( !v8 )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*v8, (__int64)v8);
  }
  if ( !v2 )
  {
    for ( j = (unsigned __int64 *)&wil_details_featureDescriptors_a; ; j = (unsigned __int64 *)((char *)v11 + 48) )
    {
      v11 = wil_details_FeatureDescriptors_SkipPadding(j);
      if ( !v11 )
        return 0;
      if ( !*((_BYTE *)v11 + 21) && !*((_BYTE *)v11 + 22) && !*((_BYTE *)v11 + 20) )
        break;
    }
    v2 = RtlRegisterFeatureConfigurationChangeNotification(
           wil_details_OnFeatureConfigurationChange,
           0LL,
           &v14,
           &wil_details_featureChangeNotification);
    if ( v2 )
      wil_details_featureChangeNotification = 0LL;
  }
  return v2;
}
