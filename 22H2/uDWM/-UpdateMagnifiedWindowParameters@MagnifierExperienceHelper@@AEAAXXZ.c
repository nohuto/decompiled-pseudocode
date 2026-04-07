/*
 * XREFs of ?UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ @ 0x1800BD3D0
 * Callers:
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800BD1DC (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800BD208 (-SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008D1A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wi.c)
 */

void __fastcall MagnifierExperienceHelper::UpdateMagnifiedWindowParameters(
        MagnifierExperienceHelper *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  double v5; // xmm1_8
  double v6; // xmm1_8
  double v7; // xmm2_8
  double v8; // xmm2_8

  v4 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetImpl'::`2'::impl,
    1u,
    a3);
  if ( *((float *)this + 31) == 0.0 && *((float *)this + 30) == 0.0 )
  {
    v5 = *((double *)this + 8);
  }
  else
  {
    v5 = *((double *)this + 2);
    v4 = 0;
  }
  v6 = v5 / *((double *)this + 14);
  *((double *)this + 10) = v6;
  if ( v4 )
    v7 = *((double *)this + 9);
  else
    v7 = *((double *)this + 3);
  v8 = v7 / *((double *)this + 14);
  *((double *)this + 11) = v8;
  *((double *)this + 12) = v6 * 0.5;
  *((double *)this + 13) = v8 * 0.5;
}
