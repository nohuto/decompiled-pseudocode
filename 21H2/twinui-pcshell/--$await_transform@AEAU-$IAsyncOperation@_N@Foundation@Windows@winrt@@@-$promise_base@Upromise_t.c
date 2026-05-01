/*
 * XREFs of ??$await_transform@AEAU?$IAsyncOperation@_N@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAAEAU?$IAsyncOperation@_N@Foundation@Windows@2@AEAU3452@@Z @ 0x1800F3E8C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FEB60 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x1801404E0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ?Status@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AW4AsyncStatus@Foundation@Windows@3@XZ @ 0x1800FE234 (-Status@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1804D14F8 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip::test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<bool> &>(
        __int64 a1,
        __int64 a2)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::Status() == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  return a2;
}
