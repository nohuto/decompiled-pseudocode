/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18004E160
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x18001E720 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@det.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180086914 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateIn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD); // rax
  int v3; // ebx
  int v5; // edx
  int v6; // r8d
  int v7; // ecx

  v2 = (__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(220937958LL, 0LL);
  }
  else
  {
    v5 = 0;
  }
  *a2 = 0LL;
  v6 = 64;
  if ( (v5 & 0xFFFFFF3F) != 0 )
  {
    if ( (v5 & 0xFFFFFF3F) == 2 )
      v3 = 64;
    v6 = v3;
  }
  v7 = 8 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3)))));
  *(_DWORD *)a2 = v6 | v7 | ((v6 | (unsigned int)v7) >> 6) & 1;
  return a2;
}
