/*
 * XREFs of ??$call@AEAV_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?AUIInspectable@Foundation@Windows@2@AEAV_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@@Z @ 0x180119900
 * Callers:
 *     ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18011EFE8 (-BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1801221F8 (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@par.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952D9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$?RAEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_@@QEBA?AUIInspectable@Foundation@Windows@winrt@@AEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@4@@Z @ 0x180116E10 (--$-RAEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@_lambda_0f3f.c)
 *     ??$get_activation_factory@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180119C9C (--$get_activation_factory@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@wi.c)
 *     ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@AEBUhstring@param@3@0@Z @ 0x1801221A4 (-GetFactory@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExten.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D034 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::call<_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_ &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v8 = a2;
  v9[2] = &qword_180651098;
  _InterlockedIncrement64(&qword_180651098);
  if ( `winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics,_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_>'::`2'::factory )
  {
    _lambda_0f3f28ddf4e39a442deeb888ae7bb45f_::operator()<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics const &>(
      a3,
      a2);
    _InterlockedDecrement64(&qword_180651098);
  }
  else
  {
    _InterlockedDecrement64(&qword_180651098);
    v9[0] = L"WindowsUdk.ApplicationModel.AppExtensions.ExtensionFactory";
    v9[1] = 58LL;
    winrt::param::hstring::hstring(string, (__int64)v9);
    winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>(
      &v7,
      string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v7, &v8);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    if ( v5 )
    {
      v9[3] = &qword_180651098;
      _InterlockedIncrement64(&qword_180651098);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics,_lambda_0f3f28ddf4e39a442deeb888ae7bb45f_>'::`2'::factory,
              v7,
              0LL) )
      {
        v7 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1806510A0);
      }
      _lambda_0f3f28ddf4e39a442deeb888ae7bb45f_::operator()<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics const &>(
        a3,
        a2);
      _InterlockedDecrement64(&qword_180651098);
    }
    else
    {
      winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
        &v7,
        a2,
        *a3,
        a3[1]);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v7);
  }
  return a2;
}
