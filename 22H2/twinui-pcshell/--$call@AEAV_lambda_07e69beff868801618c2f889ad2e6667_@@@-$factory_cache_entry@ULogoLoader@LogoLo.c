/*
 * XREFs of ??$call@AEAV_lambda_07e69beff868801618c2f889ad2e6667_@@@?$factory_cache_entry@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@2@AEAV_lambda_07e69beff868801618c2f889ad2e6667_@@@Z @ 0x1801332D4
 * Callers:
 *     _anonymous_namespace_::TryLoadLogoImageStream @ 0x1801442F8 (_anonymous_namespace_--TryLoadLogoImageStream.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952D9 (WINRT_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18009E828 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$ActivateInstance@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@3@XZ @ 0x180129C38 (--$ActivateInstance@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivatio.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D034 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
struct IUnknown *__fastcall winrt::impl::factory_cache_entry<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_07e69beff868801618c2f889ad2e6667_ &>(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  struct IUnknown *v5; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v6[4]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING string[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+68h] [rbp-18h] BYREF

  v5 = a2;
  v6[2] = &qword_180651178;
  _InterlockedIncrement64(&qword_180651178);
  if ( `winrt::impl::call_factory<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory,_lambda_07e69beff868801618c2f889ad2e6667_>'::`2'::factory )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader>(
      &`winrt::impl::call_factory<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory,_lambda_07e69beff868801618c2f889ad2e6667_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_180651178);
  }
  else
  {
    _InterlockedDecrement64(&qword_180651178);
    v6[0] = L"WindowsInternal.Shell.UnifiedTile.LogoLoading.LogoLoader";
    v6[1] = 56LL;
    winrt::param::hstring::hstring(string, (__int64)v6);
    winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v8, (__int64 *)string);
    v3 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v8, &v5);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v5);
    if ( v3 )
    {
      v6[3] = &qword_180651178;
      _InterlockedIncrement64(&qword_180651178);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory,_lambda_07e69beff868801618c2f889ad2e6667_>'::`2'::factory,
              v8,
              0LL) )
      {
        v8 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180651180);
      }
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader>(
        &`winrt::impl::call_factory<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory,_lambda_07e69beff868801618c2f889ad2e6667_>'::`2'::factory,
        a2);
      _InterlockedDecrement64(&qword_180651178);
    }
    else
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader>(
        &v8,
        a2);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v8);
  }
  return a2;
}
