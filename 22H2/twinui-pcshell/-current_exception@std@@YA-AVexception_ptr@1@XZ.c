/*
 * XREFs of ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x18035E644
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1801018AC (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Found.c)
 *     __lambda_45e2c74cd21d3bb3db90a0d12fd30472_::operator()_::_1_::catch$3 @ 0x180136979 (__lambda_45e2c74cd21d3bb3db90a0d12fd30472_--operator()_--_1_--catch$3.c)
 *     __lambda_4847ee841f10e4ee6f598a9cb2b519bc_::operator()_::_1_::catch$3 @ 0x1801369E9 (__lambda_4847ee841f10e4ee6f598a9cb2b519bc_--operator()_--_1_--catch$3.c)
 *     __lambda_6e497bc91bd1b514200f3fa30e5ef36f_::operator()_::_1_::catch$3 @ 0x180136B01 (__lambda_6e497bc91bd1b514200f3fa30e5ef36f_--operator()_--_1_--catch$3.c)
 *     __lambda_f1acb3e88a7ee276e5be409f1eb050f8_::operator()_::_1_::catch$3 @ 0x180136F91 (__lambda_f1acb3e88a7ee276e5be409f1eb050f8_--operator()_--_1_--catch$3.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::unhandled_exception @ 0x1801463C8 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1801463C8.c)
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1804D6134 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Founda.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=2
void *__fastcall std::current_exception(void *a1)
{
  __ExceptionPtrCreate(a1);
  __ExceptionPtrCurrentException(a1);
  return a1;
}
