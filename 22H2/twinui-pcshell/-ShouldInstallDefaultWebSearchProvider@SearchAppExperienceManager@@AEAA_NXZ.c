/*
 * XREFs of ?ShouldInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAA_NXZ @ 0x1800A9BB8
 * Callers:
 *     ?TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1800AA638 (-TryInstallDefaultWebSearchProvider@SearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$SearchAppExperienceManager_SkipInstallDefaultWebProviderApp@W4SkipInstallDefaultWebProviderAppReason@@@CortanaProactiveTelemetry@@SAX$$QEAW4SkipInstallDefaultWebProviderAppReason@@@Z @ 0x18009DAA8 (--$SearchAppExperienceManager_SkipInstallDefaultWebProviderApp@W4SkipInstallDefaultWebProviderAp.c)
 *     ??$call@AEAV_lambda_9b3fc1c1701f032bb43a65811db5a94b_@@@?$factory_cache_entry@USearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@UISearchPolicySettingsStatics@23456@@impl@winrt@@QEAA?AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@2@AEAV_lambda_9b3fc1c1701f032bb43a65811db5a94b_@@@Z @ 0x18009E44C (--$call@AEAV_lambda_9b3fc1c1701f032bb43a65811db5a94b_@@@-$factory_cache_entry@USearchPolicySetti.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?CanUserInstallStoreApps@@YA_NXZ @ 0x1800A27EC (-CanUserInstallStoreApps@@YA_NXZ.c)
 *     ?IsWebSearchProviderInstalled@@YA_NXZ @ 0x1800A7DE0 (-IsWebSearchProviderInstalled@@YA_NXZ.c)
 *     ?IsWebSearchProviderInstalledLatest@@YA_NXZ @ 0x1800A7EA8 (-IsWebSearchProviderInstalledLatest@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAA_NXZ @ 0x1800AB5F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SearchAppExperienceManager::ShouldInstallDefaultWebSearchProvider(SearchAppExperienceManager *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  bool v4; // bl
  int v5; // [rsp+30h] [rbp+10h] BYREF
  __int64 v6; // [rsp+38h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 617) )
    return 0;
  if ( IsWebSearchProviderInstalled() )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370823>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55370823>::GetImpl'::`2'::impl) )
    {
      v5 = 1;
      goto LABEL_7;
    }
    if ( IsWebSearchProviderInstalledLatest() )
    {
      v5 = 5;
LABEL_7:
      CortanaProactiveTelemetry::SearchAppExperienceManager_SkipInstallDefaultWebProviderApp<enum SkipInstallDefaultWebProviderAppReason>(&v5);
      return 0;
    }
  }
  winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings,winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>::call<_lambda_9b3fc1c1701f032bb43a65811db5a94b_ &>(
    v2,
    (__int64)&v6);
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 144LL))(v6, &v5);
  winrt::check_hresult(v3);
  v4 = (_BYTE)v5 == 0;
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v6);
  if ( v4 )
  {
    v5 = 3;
    goto LABEL_7;
  }
  if ( !CanUserInstallStoreApps() )
  {
    v5 = 4;
    goto LABEL_7;
  }
  return 1;
}
