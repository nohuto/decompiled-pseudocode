/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180114330
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18011225C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PerfTestCen2@@@details@w.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800AFE30 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_24_05_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801160D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_24_05_NonSec@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestUx32@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801163B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestUx32@@@details@wil@@QEAAX_NW4Reportin.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PerfTestCen2>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // edx
  unsigned int v7; // r10d
  __int64 v8; // r8
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  _QWORD *result; // rax

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x2E30985,
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
    v10 = 0;
    if ( v7 == 2 )
      v10 = 64;
  }
  else
  {
    v10 = 64;
  }
  v11 = v9 | v10;
  *(_DWORD *)a2 = v11;
  if ( (v11 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestUx32>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TestUx32>::GetImpl'::`2'::impl,
      0LL,
      v8);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Dcr_24_05_NonSec>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Dcr_24_05_NonSec>::GetImpl'::`2'::impl);
    v6 = 1;
  }
  *(_DWORD *)a2 &= ~1u;
  result = a2;
  *(_DWORD *)a2 |= v6;
  return result;
}
