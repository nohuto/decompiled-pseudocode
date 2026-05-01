/*
 * XREFs of ?PerformDelayedInitialization@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x1804C5160
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804C5AA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@details.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::PerformDelayedInitialization(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart>::GetImpl'::`2'::impl,
      0LL,
      a3,
      a4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5C,
                           (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v4);
  }
  return result;
}
