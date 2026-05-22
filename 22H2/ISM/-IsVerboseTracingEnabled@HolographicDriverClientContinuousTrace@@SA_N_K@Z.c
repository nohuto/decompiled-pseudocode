/*
 * XREFs of ?IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z @ 0x1801605A0
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18015D980 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 *     ?GetPoseAtTime_LatestPoseFromDriver_@HolographicDriverClientContinuousTrace@@QEAAXII_J0IAEBUXMFLOAT4X3@DirectX@@@Z @ 0x18015E088 (-GetPoseAtTime_LatestPoseFromDriver_@HolographicDriverClientContinuousTrace@@QEAAXII_J0IAEBUXMFL.c)
 *     ?GetPoseAtTime_NotEnoughPosesToExtrapolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x18015E184 (-GetPoseAtTime_NotEnoughPosesToExtrapolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     ?GetPoseAtTime_NotEnoughPosesToInterpolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x18015E228 (-GetPoseAtTime_NotEnoughPosesToInterpolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     ?GetPoseAtTime_OrientationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x18015E2CC (-GetPoseAtTime_OrientationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     ?GetPoseAtTime_PredictFromPoses_@HolographicDriverClientContinuousTrace@@QEAAXJ_J0IAEBUXMFLOAT4X3@DirectX@@@Z @ 0x18015E370 (-GetPoseAtTime_PredictFromPoses_@HolographicDriverClientContinuousTrace@@QEAAXJ_J0IAEBUXMFLOAT4X.c)
 *     ?GetPoseAtTime_TranslationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x18015E4B0 (-GetPoseAtTime_TranslationInvalid_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167E4C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

char __fastcall HolographicDriverClientContinuousTrace::IsVerboseTracingEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r8
  _DWORD *v3; // rcx

  v1 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
         a1,
         _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
  v2 = 0;
  v3 = *(_DWORD **)(v1 + 8);
  if ( *v3 > 5u )
    return tlgKeywordOn((__int64)v3, 0x800000LL);
  return v2;
}
