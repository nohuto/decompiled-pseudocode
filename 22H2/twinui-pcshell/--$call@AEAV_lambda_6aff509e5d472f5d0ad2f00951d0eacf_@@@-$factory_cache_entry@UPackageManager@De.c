/*
 * XREFs of ??$call@AEAV_lambda_6aff509e5d472f5d0ad2f00951d0eacf_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUPackageManager@Deployment@Management@Windows@2@AEAV_lambda_6aff509e5d472f5d0ad2f00951d0eacf_@@@Z @ 0x18009E2D4
 * Callers:
 *     ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x1800A0EFC (--0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952D9 (WINRT_InterlockedPushEntrySList.c)
 *     ??$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPackageManager@Deployment@Management@23@XZ @ 0x18009D6E4 (--$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Fou.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18009E828 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D034 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
struct IUnknown *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_6aff509e5d472f5d0ad2f00951d0eacf_ &>(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+20h] [rbp-60h] BYREF
  struct IUnknown *v6; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v7[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v6 = a2;
  v7[2] = &qword_1806508A8;
  _InterlockedIncrement64(&qword_1806508A8);
  if ( `winrt::impl::call_factory<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory,_lambda_6aff509e5d472f5d0ad2f00951d0eacf_>'::`2'::factory )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Management::Deployment::PackageManager>(
      &`winrt::impl::call_factory<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory,_lambda_6aff509e5d472f5d0ad2f00951d0eacf_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_1806508A8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1806508A8);
    v7[0] = L"Windows.Management.Deployment.PackageManager";
    v7[1] = 44LL;
    winrt::param::hstring::hstring(string, (__int64)v7);
    winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v5, string);
    v3 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v5, &v6);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v6);
    if ( v3 )
    {
      v7[3] = &qword_1806508A8;
      _InterlockedIncrement64(&qword_1806508A8);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory,_lambda_6aff509e5d472f5d0ad2f00951d0eacf_>'::`2'::factory,
              v5,
              0LL) )
      {
        v5 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1806508B0);
      }
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Management::Deployment::PackageManager>(
        &`winrt::impl::call_factory<winrt::Windows::Management::Deployment::PackageManager,winrt::Windows::Foundation::IActivationFactory,_lambda_6aff509e5d472f5d0ad2f00951d0eacf_>'::`2'::factory,
        a2);
      _InterlockedDecrement64(&qword_1806508A8);
    }
    else
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Management::Deployment::PackageManager>(
        &v5,
        a2);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v5);
  }
  return a2;
}
