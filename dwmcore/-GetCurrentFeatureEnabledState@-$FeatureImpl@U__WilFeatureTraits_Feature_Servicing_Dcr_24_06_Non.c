/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_24_06_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180114FE4
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_24_06_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801136D8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_24_06_NonS.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x1800AFE30 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_24_05_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801160D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_24_05_NonSec@@@details@wil@.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Dcr_24_06_NonSec>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int *a4)
{
  unsigned int FeatureEnabledState; // eax
  int v6; // edx
  unsigned int v7; // r10d
  int v8; // r9d
  int v9; // eax
  int v10; // eax
  _QWORD *result; // rax

  FeatureEnabledState = (unsigned int)wil::details::WilApi_GetFeatureEnabledState(
                                        (wil::details *)0x2AF2D1B,
                                        3LL,
                                        a3,
                                        a4);
  v6 = 0;
  v7 = FeatureEnabledState & 0xFFFFFF3F;
  *a2 = 0LL;
  v8 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v8;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v9 = 0;
    if ( v7 == 2 )
      v9 = 64;
  }
  else
  {
    v9 = 64;
  }
  v10 = v8 | v9;
  *(_DWORD *)a2 = v10;
  if ( (v10 & 0x40) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Dcr_24_05_NonSec>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Dcr_24_05_NonSec>::GetImpl'::`2'::impl);
    v6 = 1;
  }
  *(_DWORD *)a2 &= ~1u;
  result = a2;
  *(_DWORD *)a2 |= v6;
  return result;
}
