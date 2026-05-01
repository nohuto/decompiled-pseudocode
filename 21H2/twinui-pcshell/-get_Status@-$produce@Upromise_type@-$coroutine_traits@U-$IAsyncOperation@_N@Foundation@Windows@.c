/*
 * XREFs of ?get_Status@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAH@Z @ 0x180101400
 * Callers:
 *     <none>
 * Callees:
 *     ?Status@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AW4AsyncStatus@Foundation@Windows@3@XZ @ 0x1800FE234 (-Status@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows.c)
 */

__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::get_Status(
        __int64 a1,
        _DWORD *a2)
{
  *a2 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::Status((RTL_SRWLOCK *)((a1 - 24) & -(__int64)(a1 != 0)));
  return 0LL;
}
