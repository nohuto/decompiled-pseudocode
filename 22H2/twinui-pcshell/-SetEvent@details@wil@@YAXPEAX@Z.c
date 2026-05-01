/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180282364
 * Callers:
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800F05C8 (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _lambda_78c4d568eef31da123ac7a5ea8376aa4_::operator() @ 0x1800F0674 (_lambda_78c4d568eef31da123ac7a5ea8376aa4_--operator().c)
 *     _lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::operator() @ 0x180147DAC (_lambda_c5e85cbf5d6483b8d295c64a0af9bf90_--operator().c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___::Invoke @ 0x18014A020 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18014A020.c)
 *     ?Invoke@?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAAJJ@Z @ 0x180286770 (-Invoke@-$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAAJJ@Z.c)
 *     ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x18028BBC0 (-ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z.c)
 *     _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate::Invoke @ 0x1802A3640 (_wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Windows--Devi_ea_1802A3640.c)
 *     ?Shutdown@WindowGroupManager@@UEAAXXZ @ 0x180304A70 (-Shutdown@WindowGroupManager@@UEAAXXZ.c)
 *     ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803189B0 (-UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x18032EE4C (_ViewManagerBridge--InitializeAndRunCoreUiMessageLoop_--_1_--catch$3.c)
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x18032F640 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$0 @ 0x180348821 (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$0.c)
 *     ?Uninitialize@WindowManagerBridge@@UEAAXXZ @ 0x180348E40 (-Uninitialize@WindowManagerBridge@@UEAAXXZ.c)
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x18034960C (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1804BD7CC (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x1804BE044 (-HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801AD074 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x91C,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
    __debugbreak();
  }
}
