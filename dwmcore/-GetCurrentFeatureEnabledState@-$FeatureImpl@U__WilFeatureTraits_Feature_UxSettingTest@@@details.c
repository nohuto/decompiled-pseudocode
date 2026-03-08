/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxSettingTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801153F8
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxSettingTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180113D50 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxSettingTest@@@details@.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800AFE30 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_24_06_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011614C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_24_06_NonSec@@@details@wil@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801165EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@QEAA_.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxSettingTest>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // edi
  unsigned int v7; // r9d
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // rdx
  int v11; // eax
  _QWORD *result; // rax

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x2E30A2A,
                                        3LL,
                                        a3,
                                        a4);
  v6 = 0;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  *a2 = 0LL;
  v8 = -(FeatureEnabledState & 0x80);
  v9 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v9;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v11 = 0;
    if ( v7 == 2 )
      v11 = 64;
    v10 = v11 | (unsigned int)v9;
  }
  else
  {
    v10 = v9 | 0x40u;
  }
  *(_DWORD *)a2 = v10;
  if ( (v10 & 0x40) != 0
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PerfTestCen2>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_PerfTestCen2>::GetImpl'::`2'::impl,
                          v10,
                          v8) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Dcr_24_06_NonSec>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Dcr_24_06_NonSec>::GetImpl'::`2'::impl);
    v6 = 1;
  }
  *(_DWORD *)a2 &= ~1u;
  result = a2;
  *(_DWORD *)a2 |= v6;
  return result;
}
