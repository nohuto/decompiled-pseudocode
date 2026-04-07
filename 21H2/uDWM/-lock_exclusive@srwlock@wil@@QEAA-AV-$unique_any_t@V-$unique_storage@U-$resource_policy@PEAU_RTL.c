/*
 * XREFs of ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D754
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800563C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@detail.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800564C4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Rollback@@@details@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800565C8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800566CC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180056E6C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOn.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_3135195449@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180057610 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_3135195449@@@details@wil.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180057A08 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2969106744@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180057D70 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2969106744@@@details@wil.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::srwlock::lock_exclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  AcquireSRWLockExclusive(a1);
  *a2 = a1;
  return a2;
}
