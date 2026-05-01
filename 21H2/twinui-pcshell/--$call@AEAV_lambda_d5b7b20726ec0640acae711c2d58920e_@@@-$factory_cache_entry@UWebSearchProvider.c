/*
 * XREFs of ??$call@AEAV_lambda_d5b7b20726ec0640acae711c2d58920e_@@@?$factory_cache_entry@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@UIWebSearchProviderStatics@2345@@impl@winrt@@QEAA?AU?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@2@AEAV_lambda_d5b7b20726ec0640acae711c2d58920e_@@@Z @ 0x18009E5E4
 * Callers:
 *     ?FindAllAsync@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1800A310C (-FindAllAsync@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIWebSearchProviderStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUIWebSearchProviderStatics@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18009EA28 (--$get_activation_factory@UIWebSearchProviderStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA-AUIWe.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?OpenReadAsync@?$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x1800A30C4 (-OpenReadAsync@-$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStre.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics>::call<_lambda_d5b7b20726ec0640acae711c2d58920e_ &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  signed __int64 v5; // [rsp+20h] [rbp-60h] BYREF
  __int64 v6; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v7[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v6 = a2;
  v7[2] = &qword_1806501D8;
  _InterlockedIncrement64(&qword_1806501D8);
  if ( `winrt::impl::call_factory<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics,_lambda_d5b7b20726ec0640acae711c2d58920e_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
      &`winrt::impl::call_factory<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics,_lambda_d5b7b20726ec0640acae711c2d58920e_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_1806501D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1806501D8);
    v7[0] = L"WindowsUdk.UI.Shell.WebSearchProvider";
    v7[1] = 37LL;
    winrt::param::hstring::hstring(string, (__int64)v7);
    winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics>(&v5, string);
    v3 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v5, &v6);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
    if ( v3 )
    {
      v7[3] = &qword_1806501D8;
      _InterlockedIncrement64(&qword_1806501D8);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics,_lambda_d5b7b20726ec0640acae711c2d58920e_>'::`2'::factory,
              v5,
              0LL) )
      {
        v5 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1806501E0);
      }
      winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
        &`winrt::impl::call_factory<winrt::WindowsUdk::UI::Shell::WebSearchProvider,winrt::WindowsUdk::UI::Shell::IWebSearchProviderStatics,_lambda_d5b7b20726ec0640acae711c2d58920e_>'::`2'::factory,
        a2);
      _InterlockedDecrement64(&qword_1806501D8);
    }
    else
    {
      winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
        &v5,
        a2);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v5);
  }
  return a2;
}
