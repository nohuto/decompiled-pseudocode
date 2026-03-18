/*
 * XREFs of ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C001CD64
 * Callers:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C001CC64 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C001CC30 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x1C00BC374 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x1C00BC438 (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_GetCurrentFeatureEnabledState(
        const wil_details_FeatureDescriptor *descriptor,
        int *cacheFeatureState,
        __int64 a3,
        int *a4)
{
  unsigned int featureId; // esi
  bool v5; // cf
  int v7; // ebx
  wil_FeatureStore v8; // ecx
  int v9; // r9d
  int v10; // r9d
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  const wil_details_FeatureDescriptor *const *requiresFeatures; // rdi
  const wil_details_FeatureDescriptor *v16; // rax
  char exchange64; // al
  bool v18; // zf
  int v19; // eax
  int *v21; // [rsp+20h] [rbp-30h]
  wil_FeatureState state; // [rsp+30h] [rbp-20h] BYREF
  wil_details_FeatureStateCache result; // [rsp+60h] [rbp+10h]

  featureId = descriptor->featureId;
  v5 = descriptor->changeTime == 2;
  v18 = descriptor->changeTime == 3;
  *cacheFeatureState = 1;
  v7 = v5 || v18;
  memset(&state, 0, sizeof(state));
  v9 = wil_RtlStagingConfig_QueryFeatureState(&state, featureId, v7, a4);
  if ( !v9 )
    v9 = wil_StagingConfig_QueryFeatureState(v8, &state, featureId, v7, v21);
  result.payloadId = 0;
  v10 = -v9;
  v11 = ((state.isVariantConfiguration != 0 ? 0x200 : 0) | (state.hasNotification != 0 ? 0x100 : 0)) ^ (32 * (state.enabledState & (unsigned __int8)-(v10 != 0))) & 0x60;
  if ( ((32 * (state.enabledState & (unsigned __int8)-(v10 != 0))) & 0x60) != 0 )
  {
    v13 = 0;
    if ( state.enabledState == wil_FeatureEnabledState_Enabled )
      v13 = 16;
    v12 = v13 | v11 & 0xFFFFFFEF;
  }
  else
  {
    v12 = v11 & 0xFFFFFFEF | (descriptor->isEnabledByDefault != 0 ? 0x10 : 0);
  }
  v14 = (v12 ^ (v12 >> 1)) & 8 ^ v12;
  result.exchange = v14;
  if ( (v14 & 8) != 0 )
  {
    requiresFeatures = descriptor->requiresFeatures;
    if ( requiresFeatures )
    {
      do
      {
        v16 = *requiresFeatures;
        if ( !*requiresFeatures )
          break;
        if ( v16->isAlwaysEnabled || v16->isAlwaysDisabled )
        {
          if ( (v14 & 8) == 0 )
            goto LABEL_19;
          v18 = v16->isEnabledByDefault == 0;
        }
        else
        {
          exchange64 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                         v16->featureStateCache,
                         *requiresFeatures).exchange64;
          if ( (v14 & 8) == 0 )
            goto LABEL_19;
          v18 = (exchange64 & 8) == 0;
        }
        if ( v18 )
        {
LABEL_19:
          v19 = 0;
          goto LABEL_20;
        }
        v19 = 8;
LABEL_20:
        ++requiresFeatures;
        v14 = v19 | v14 & 0xFFFFFFF7;
        result.exchange = v14;
      }
      while ( (v14 & 8) != 0 );
    }
  }
  return result;
}
