/*
 * XREFs of winrt::impl::factory_cache_entry_winrt::Windows::UI::StartScreen::SecondaryTile_winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate_::call__lambda_578f4592fdb1e9538d178bf5bf68d9f5__&_ @ 0x180133A10
 * Callers:
 *     _lambda_7ebe327a947a791a3f61eeb2c5c67313_::operator() @ 0x180136D7C (_lambda_7ebe327a947a791a3f61eeb2c5c67313_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18008C1E0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x1800952F9 (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@winrt@@YA?AUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180134074 (--$get_activation_factory@UISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x18021D1E4 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

__int64 *__fastcall winrt::impl::factory_cache_entry_winrt::Windows::UI::StartScreen::SecondaryTile_winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate_::call__lambda_578f4592fdb1e9538d178bf5bf68d9f5____(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rdi
  __int64 *v5; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+28h] [rbp-48h] BYREF
  HSTRING string[4]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h] BYREF

  v5 = a2;
  _InterlockedIncrement64(&qword_1806502E8);
  if ( `winrt::impl::call_factory<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate,_lambda_578f4592fdb1e9538d178bf5bf68d9f5_>'::`2'::factory )
  {
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
      a2,
      &`winrt::impl::call_factory<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate,_lambda_578f4592fdb1e9538d178bf5bf68d9f5_>'::`2'::factory);
    _InterlockedDecrement64(&qword_1806502E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1806502E8);
    v6[0] = L"Windows.UI.StartScreen.SecondaryTile";
    v6[1] = 36LL;
    winrt::param::hstring::hstring(string, (__int64)v6);
    winrt::get_activation_factory<winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>(&v8, string);
    v3 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v8, &v5);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v5);
    if ( v3 )
    {
      _InterlockedIncrement64(&qword_1806502E8);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate,_lambda_578f4592fdb1e9538d178bf5bf68d9f5_>'::`2'::factory,
              v8,
              0LL) )
      {
        v8 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1806502F0);
      }
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
        a2,
        &`winrt::impl::call_factory<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate,_lambda_578f4592fdb1e9538d178bf5bf68d9f5_>'::`2'::factory);
      _InterlockedDecrement64(&qword_1806502E8);
    }
    else
    {
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(a2, &v8);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v8);
  }
  return a2;
}
