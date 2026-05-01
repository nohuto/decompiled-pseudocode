/*
 * XREFs of ??$call@AEAV_lambda_c87063b83fd259e9c3b4fbc6733d65f8_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriEscapeStatics@234@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_c87063b83fd259e9c3b4fbc6733d65f8_@@@Z @ 0x1800B0D28
 * Callers:
 *     ?EscapeComponent@Uri@Foundation@Windows@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1800B2B18 (-EscapeComponent@Uri@Foundation@Windows@winrt@@SA@AEBUhstring@param@4@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UIUriEscapeStatics@Foundation@Windows@winrt@@@winrt@@YA?AUIUriEscapeStatics@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800B0F24 (--$get_activation_factory@UIUriEscapeStatics@Foundation@Windows@winrt@@@winrt@@YA-AUIUriEscapeSt.c)
 *     ?EscapeComponent@?$consume_Windows_Foundation_IUriEscapeStatics@UIUriEscapeStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@AEBU4param@3@@Z @ 0x1800B2AC8 (-EscapeComponent@-$consume_Windows_Foundation_IUriEscapeStatics@UIUriEscapeStatics@Foundation@Wi.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriEscapeStatics>::call<_lambda_c87063b83fd259e9c3b4fbc6733d65f8_ &>(
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
  v9[2] = &qword_180650BB8;
  _InterlockedIncrement64(&qword_180650BB8);
  if ( `winrt::impl::call_factory<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriEscapeStatics,_lambda_c87063b83fd259e9c3b4fbc6733d65f8_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_Foundation_IUriEscapeStatics<winrt::Windows::Foundation::IUriEscapeStatics>::EscapeComponent(
      &`winrt::impl::call_factory<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriEscapeStatics,_lambda_c87063b83fd259e9c3b4fbc6733d65f8_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180650BB8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180650BB8);
    v9[0] = L"Windows.Foundation.Uri";
    v9[1] = 22LL;
    winrt::param::hstring::hstring(string, (__int64)v9);
    winrt::get_activation_factory<winrt::Windows::Foundation::IUriEscapeStatics>(&v7, string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v7, &v8);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    if ( v5 )
    {
      v9[3] = &qword_180650BB8;
      _InterlockedIncrement64(&qword_180650BB8);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriEscapeStatics,_lambda_c87063b83fd259e9c3b4fbc6733d65f8_>'::`2'::factory,
              v7,
              0LL) )
      {
        v7 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180650BC0);
      }
      winrt::impl::consume_Windows_Foundation_IUriEscapeStatics<winrt::Windows::Foundation::IUriEscapeStatics>::EscapeComponent(
        &`winrt::impl::call_factory<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriEscapeStatics,_lambda_c87063b83fd259e9c3b4fbc6733d65f8_>'::`2'::factory,
        a2,
        *a3);
      _InterlockedDecrement64(&qword_180650BB8);
    }
    else
    {
      winrt::impl::consume_Windows_Foundation_IUriEscapeStatics<winrt::Windows::Foundation::IUriEscapeStatics>::EscapeComponent(
        &v7,
        a2,
        *a3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v7);
  }
  return a2;
}
