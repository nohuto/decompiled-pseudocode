/*
 * XREFs of ??$call@AEAV_lambda_1689c3bace97bc0cd6065eea5596933a_@@@?$factory_cache_entry@UMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@UIMRTHelperStatics@2345@@impl@winrt@@QEAA?AUMRTHelper@UnifiedTile@Shell@WindowsInternal@2@AEAV_lambda_1689c3bace97bc0cd6065eea5596933a_@@@Z @ 0x180133898
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x18014351C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$?RAEBUIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@_lambda_1689c3bace97bc0cd6065eea5596933a_@@QEBA?AUMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@AEBUIMRTHelperStatics@2345@@Z @ 0x180129D7C (--$-RAEBUIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@_lambda_1689c3bace97bc0cd60.c)
 *     ??$get_activation_factory@UIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@winrt@@YA?AUIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@0@AEBUhstring@param@0@@Z @ 0x180133F4C (--$get_activation_factory@UIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@winrt@@YA.c)
 *     ?CreateForPackageFullName@?$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics@UIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA?AUMRTHelper@UnifiedTile@Shell@WindowsInternal@3@AEBUUser@System@Windows@3@AEBUhstring@param@3@@Z @ 0x18013885C (-CreateForPackageFullName@-$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics@UIMRTHel.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper,winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>::call<_lambda_1689c3bace97bc0cd6065eea5596933a_ &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING string[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+68h] [rbp-18h] BYREF

  v7 = a2;
  v8[2] = &qword_180651168;
  _InterlockedIncrement64(&qword_180651168);
  if ( `winrt::impl::call_factory<winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper,winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics,_lambda_1689c3bace97bc0cd6065eea5596933a_>'::`2'::factory )
  {
    _lambda_1689c3bace97bc0cd6065eea5596933a_::operator()<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics const &>(
      a3,
      a2);
    _InterlockedDecrement64(&qword_180651168);
  }
  else
  {
    _InterlockedDecrement64(&qword_180651168);
    v8[0] = L"WindowsInternal.Shell.UnifiedTile.MRTHelper";
    v8[1] = 43LL;
    winrt::param::hstring::hstring(string, (__int64)v8);
    winrt::get_activation_factory<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>(&v10, string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v10, &v7);
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    if ( v5 )
    {
      v8[3] = &qword_180651168;
      _InterlockedIncrement64(&qword_180651168);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper,winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics,_lambda_1689c3bace97bc0cd6065eea5596933a_>'::`2'::factory,
              v10,
              0LL) )
      {
        v10 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180651170);
      }
      _lambda_1689c3bace97bc0cd6065eea5596933a_::operator()<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics const &>(
        a3,
        a2);
      _InterlockedDecrement64(&qword_180651168);
    }
    else
    {
      winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>::CreateForPackageFullName(
        &v10,
        a2,
        *a3,
        a3[1]);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v10);
  }
  return a2;
}
