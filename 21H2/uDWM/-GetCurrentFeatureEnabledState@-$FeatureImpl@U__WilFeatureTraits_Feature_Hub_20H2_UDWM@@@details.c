/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180057B24
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180057A08 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@.c)
 * Callees:
 *     ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_20H2_Enablement@@@wil@@@details@wil@@SA_NXZ @ 0x180056A94 (-IsEnabled@-$RequiredFeatures@V-$Feature@U__WilFeatureTraits_Feature_20H2_Enablement@@@wil@@@det.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_20H2_UDWM>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD); // rax
  int v3; // ebx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  _QWORD *result; // rax

  v2 = (__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(26382859LL, 0LL);
  }
  else
  {
    v5 = 0;
  }
  *a2 = 0LL;
  if ( (v5 & 0xFFFFFF3F) != 0 )
  {
    v6 = 0;
    if ( (v5 & 0xFFFFFF3F) == 2 )
      v6 = 64;
  }
  else
  {
    v6 = 64;
  }
  v7 = v6 | (8 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3))))));
  *(_DWORD *)a2 = v7;
  if ( (v7 & 0x40) != 0
    && wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_20H2_Enablement>>::IsEnabled() )
  {
    v3 = 1;
  }
  *(_DWORD *)a2 &= ~1u;
  result = a2;
  *(_DWORD *)a2 |= v3;
  return result;
}
