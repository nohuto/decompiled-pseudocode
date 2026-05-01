/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D5A24
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D5BB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@details@wil@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@details@wil@@QEAA_NXZ @ 0x1800D5C48 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@detai.c)
 * Callees:
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1800205D4 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800D5B04 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundIma.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1801A9DF4 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_EmptyStageBackgroundImage>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v2; // eax
  int v5; // esi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  int v8; // r8d
  signed __int32 v9; // r9d
  signed __int32 v10; // edx
  int i; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EmptyStageBackgroundImage>::GetCurrentFeatureEnabledState(
      v6,
      &v13,
      &i);
    v7 = *a2;
    v8 = v5 != 0 ? i : 0;
    for ( i = v8; ; v8 = i )
    {
      *a2 = v7;
      v9 = v7;
      v10 = v7;
      if ( v8 && (v7 & 2) == 0 )
      {
        v10 = v7 ^ ((unsigned __int16)v13 ^ (unsigned __int16)v7) & 0x9C1 | 2;
        *a2 = v10;
      }
      if ( (v7 & 4) == 0 )
      {
        v10 = ((unsigned __int16)v13 ^ (unsigned __int16)v10) & 0x400 ^ v10 | 4;
        *a2 = v10;
      }
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v10, v7);
      if ( v9 == v7 )
        break;
    }
    if ( (v9 & 4) == 0 )
      wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        (__int64)&wil::details::g_enabledStateManager,
        (volatile signed __int32 *)a1,
        0,
        v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v13 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
