/*
 * XREFs of ??$get_activation_factory@UISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@winrt@@@winrt@@YA?AUISecondaryTileStaticsPrivate@StartScreen@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180133F04
 * Callers:
 *     winrt::impl::factory_cache_entry_winrt::Windows::UI::StartScreen::SecondaryTile_winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate_::call__lambda_578f4592fdb1e9538d178bf5bf68d9f5__&_ @ 0x1801338A0 (winrt--impl--factory_cache_entry_winrt--Windows--UI--StartScreen--SecondaryTile_winrt--Windows--.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     RoGetActivationFactory_0 @ 0x18009143A (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18009181D (CoIncrementMTAUsage_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int ActivationFactory_0; // eax
  _QWORD *result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF

  v6 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>::value,
                          (__int64)&v6);
  if ( ActivationFactory_0 == -2147221008 )
  {
    CoIncrementMTAUsage_0((__int64)v7);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>::value,
                            (__int64)&v6);
  }
  winrt::check_hresult(ActivationFactory_0);
  result = a1;
  *a1 = v6;
  return result;
}
