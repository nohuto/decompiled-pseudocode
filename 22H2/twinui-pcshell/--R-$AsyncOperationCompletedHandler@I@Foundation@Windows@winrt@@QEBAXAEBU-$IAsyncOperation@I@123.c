/*
 * XREFs of ??R?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEBAXAEBU?$IAsyncOperation@I@123@AEBW4AsyncStatus@123@@Z @ 0x1804D1744
 * Callers:
 *     ??$invoke@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x1800F3DAC (--$invoke@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U-$promise_base@Upromis.c)
 *     ??$invoke@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x1804D0B48 (--$invoke@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U-$promise_ea_1804D0B48.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06___::Invoke @ 0x1804D2EF0 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_unsigned_int___.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_8cbb94e41580c6c85ce6cc2ea21e6745___::Invoke @ 0x1804D3040 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool___lambda_8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221868 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>::operator()(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
