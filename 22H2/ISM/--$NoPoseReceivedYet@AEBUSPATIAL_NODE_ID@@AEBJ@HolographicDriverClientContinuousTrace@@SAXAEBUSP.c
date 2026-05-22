/*
 * XREFs of ??$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSPATIAL_NODE_ID@@AEBJ@Z @ 0x18014F954
 * Callers:
 *     SpatialGraphDriverClientHelpers::GetLatestPoses @ 0x18015D31C (SpatialGraphDriverClientHelpers--GetLatestPoses.c)
 *     SpatialGraphDriverClientHelpers::GetPosesAroundTime @ 0x18015E554 (SpatialGraphDriverClientHelpers--GetPosesAroundTime.c)
 * Callees:
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x180160558 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z @ 0x1801607BC (-NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167E4C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::NoPoseReceivedYet<SPATIAL_NODE_ID const &,long const &>(
        struct SPATIAL_NODE_ID *a1,
        int *a2)
{
  __int64 v4; // rcx
  HolographicDriverClientContinuousTrace *v5; // rcx

  if ( HolographicDriverClientContinuousTrace::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
      v4,
      _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    HolographicDriverClientContinuousTrace::NoPoseReceivedYet_(v5, a1, *a2);
  }
}
