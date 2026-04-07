/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180051ED4
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x18001E720 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@det.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004D2AC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004D6C0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RgbaSwapChains@@@details.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004D7F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicSecureDesktop.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SimulationDriver@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004D920 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SimulationDriver@@@detai.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004DA3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@d.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004DB58 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18004DCFC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18007E308 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180086914 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateIn.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18008C0E8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009A720 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AECDC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  RTL_SRWLOCK *v3; // rdi
  void (__fastcall *v4)(RTL_SRWLOCK *, void (__fastcall *)(void *), RTL_SRWLOCK *); // rax
  unsigned int Ptr_high; // edi

  if ( !LOBYTE(this->Ptr) )
    return 0LL;
  v2 = this + 1;
  AcquireSRWLockExclusive(this + 1);
  v3 = this + 4;
  if ( this[4].Ptr )
  {
    Ptr_high = HIDWORD(this[3].Ptr);
  }
  else
  {
    v3->Ptr = 0LL;
    v4 = (void (__fastcall *)(RTL_SRWLOCK *, void (__fastcall *)(void *), RTL_SRWLOCK *))g_wil_details_internalSubscribeFeatureStateChangeNotification;
    if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
      || (v4 = (void (__fastcall *)(RTL_SRWLOCK *, void (__fastcall *)(void *), RTL_SRWLOCK *))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
    {
      v4(this + 4, _lambda_fee8cea507d2413a58be13acfb66740a_::_lambda_invoker_cdecl_, this);
    }
    if ( v3->Ptr )
    {
      Ptr_high = 1;
      HIDWORD(this[3].Ptr) = 1;
    }
    else
    {
      Ptr_high = 0;
    }
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return Ptr_high;
}
