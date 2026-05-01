/*
 * XREFs of ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18035C8D4
 * Callers:
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@IEBAXXZ @ 0x18010168C (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IRefere.c)
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1801018AC (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Found.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237___ @ 0x180132588 (_anonymous_namespace_--RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b___ @ 0x1801326C0 (_anonymous_namespace_--RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_7573529bdd9445da64c4582e06079e73___ @ 0x1801327EC (_anonymous_namespace_--RunSynchronousInSTA__lambda_7573529bdd9445da64c4582e06079e73___.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad___ @ 0x180132928 (_anonymous_namespace_--RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad___.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::rethrow_if_failed @ 0x1801460CC (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1801460CC.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::unhandled_exception @ 0x1801463C8 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1801463C8.c)
 *     std::call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa___ @ 0x18035C3B4 (std--call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa___.c)
 *     std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___ @ 0x18035C470 (std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___.c)
 *     ??$call_once@V_lambda_0e64988457575224279dcb6d61e61bdd_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_0e64988457575224279dcb6d61e61bdd_@@@Z @ 0x180393744 (--$call_once@V_lambda_0e64988457575224279dcb6d61e61bdd_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 *     ?_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ @ 0x180397864 (-_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ.c)
 *     ??$call_once@V_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@@Z @ 0x1803E30D8 (--$call_once@V_lambda_e8a8a3830e8b700b3909ca267e5ddf52_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@IEBAXXZ @ 0x1804D6078 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundati.c)
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1804D6134 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Founda.c)
 * Callees:
 *     <none>
 */

std::exception_ptr *__fastcall std::exception_ptr::exception_ptr(
        std::exception_ptr *this,
        const struct std::exception_ptr *a2)
{
  __ExceptionPtrCopy(this, a2);
  return this;
}
