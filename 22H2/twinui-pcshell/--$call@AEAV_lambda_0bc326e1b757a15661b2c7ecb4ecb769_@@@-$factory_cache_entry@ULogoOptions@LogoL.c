/*
 * XREFs of ??$call@AEAV_lambda_0bc326e1b757a15661b2c7ecb4ecb769_@@@?$factory_cache_entry@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@2@AEAV_lambda_0bc326e1b757a15661b2c7ecb4ecb769_@@@Z @ 0x18013344C
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1801433AC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952D9 (WINRT_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18009E828 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$ActivateInstance@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@3@XZ @ 0x180129D00 (--$ActivateInstance@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivati.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D034 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

struct IUnknown *__fastcall winrt::impl::factory_cache_entry<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_0bc326e1b757a15661b2c7ecb4ecb769_ &>(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  struct IUnknown *v5; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v6[4]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING string[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+68h] [rbp-18h] BYREF

  v5 = a2;
  v6[2] = &qword_180651138;
  _InterlockedIncrement64(&qword_180651138);
  if ( `winrt::impl::call_factory<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions,winrt::Windows::Foundation::IActivationFactory,_lambda_0bc326e1b757a15661b2c7ecb4ecb769_>'::`2'::factory )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions>(
      &`winrt::impl::call_factory<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions,winrt::Windows::Foundation::IActivationFactory,_lambda_0bc326e1b757a15661b2c7ecb4ecb769_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_180651138);
  }
  else
  {
    _InterlockedDecrement64(&qword_180651138);
    v6[0] = L"WindowsInternal.Shell.UnifiedTile.LogoLoading.LogoOptions";
    v6[1] = 57LL;
    winrt::param::hstring::hstring(string, (__int64)v6);
    winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v8, (__int64 *)string);
    v3 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v8, &v5);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v5);
    if ( v3 )
    {
      v6[3] = &qword_180651138;
      _InterlockedIncrement64(&qword_180651138);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions,winrt::Windows::Foundation::IActivationFactory,_lambda_0bc326e1b757a15661b2c7ecb4ecb769_>'::`2'::factory,
              v8,
              0LL) )
      {
        v8 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180651140);
      }
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions>(
        &`winrt::impl::call_factory<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions,winrt::Windows::Foundation::IActivationFactory,_lambda_0bc326e1b757a15661b2c7ecb4ecb769_>'::`2'::factory,
        a2);
      _InterlockedDecrement64(&qword_180651138);
    }
    else
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions>(
        &v8,
        a2);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v8);
  }
  return a2;
}
