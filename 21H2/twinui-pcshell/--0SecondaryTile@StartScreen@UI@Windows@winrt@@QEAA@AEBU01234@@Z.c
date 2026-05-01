/*
 * XREFs of ??0SecondaryTile@StartScreen@UI@Windows@winrt@@QEAA@AEBU01234@@Z @ 0x180135954
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 */

winrt::Windows::UI::StartScreen::SecondaryTile *__fastcall winrt::Windows::UI::StartScreen::SecondaryTile::SecondaryTile(
        winrt::Windows::UI::StartScreen::SecondaryTile *this,
        const struct winrt::Windows::UI::StartScreen::SecondaryTile *a2)
{
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
    (__int64 *)this,
    (__int64 *)a2);
  return this;
}
