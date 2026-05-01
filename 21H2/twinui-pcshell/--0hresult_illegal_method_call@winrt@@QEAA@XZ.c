/*
 * XREFs of ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x1804D1574
 * Callers:
 *     ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800F5EA0 (-GetResults@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@.c)
 *     winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::GetResults @ 0x18013A330 (winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundation_ea_18013A330.c)
 *     ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180149BB0 (-GetResults@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Found.c)
 *     ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAI@Z @ 0x1804D2D60 (-GetResults@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation@Windows@w.c)
 *     ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEA_N@Z @ 0x1804D2E30 (-GetResults@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Founda_ea_1804D2E30.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1804D151C (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

winrt::hresult_illegal_method_call *__fastcall winrt::hresult_illegal_method_call::hresult_illegal_method_call(
        winrt::hresult_illegal_method_call *this)
{
  winrt::hresult_error::hresult_error((__int64)this, winrt::impl::error_illegal_method_call);
  return this;
}
