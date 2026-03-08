/*
 * XREFs of ?GetSmoothedDuration@CPartitionVerticalBlankScheduler@@UEBA_KXZ @ 0x18004A340
 * Callers:
 *     ?GetNextFrameStartTime@CPartitionVerticalBlankScheduler@@UEBA_KXZ @ 0x1800F6F10 (-GetNextFrameStartTime@CPartitionVerticalBlankScheduler@@UEBA_KXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AF148 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@.c)
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::GetSmoothedDuration(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2)
{
  unsigned __int64 v3; // rcx
  double v4; // xmm0_8

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
    a2);
  v3 = 0LL;
  v4 = *(double *)(*((_QWORD *)this + 1170) + 24LL);
  if ( v4 >= 9.223372036854776e18 )
  {
    v4 = v4 - 9.223372036854776e18;
    if ( v4 < 9.223372036854776e18 )
      v3 = 0x8000000000000000uLL;
  }
  return v3 + (unsigned int)(int)v4;
}
