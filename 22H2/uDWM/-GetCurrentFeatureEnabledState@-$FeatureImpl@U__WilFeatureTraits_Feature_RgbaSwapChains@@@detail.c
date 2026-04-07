/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18004E028
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004D6C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_RgbaSwapChains>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD); // rax
  int v3; // ebx
  int v5; // edx
  unsigned int v6; // ecx

  v2 = (__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState;
  v3 = 0;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(11786145LL, 0LL);
  }
  else
  {
    v5 = 0;
  }
  *a2 = 0LL;
  if ( (v5 & 0xFFFFFF3F) == 2 )
    v3 = 64;
  v6 = v3 | (8 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3))))));
  *(_DWORD *)a2 = v6 | (v6 >> 6) & 1;
  return a2;
}
