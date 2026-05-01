/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x18035CD10
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180101A1C (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Found.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237____::_1_::dtor$0 @ 0x18013281E (__anonymous_namespace_--RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b____::_1_::dtor$0 @ 0x18013294A (__anonymous_namespace_--RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_7573529bdd9445da64c4582e06079e73____::_1_::dtor$0 @ 0x180132A86 (__anonymous_namespace_--RunSynchronousInSTA__lambda_7573529bdd9445da64c4582e06079e73____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad____::_1_::dtor$0 @ 0x180132BC2 (__anonymous_namespace_--RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad____--_1_--d.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::unhandled_exception @ 0x180146538 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180146538.c)
 *     _std::call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa____::_1_::dtor$0 @ 0x18035C72D (_std--call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa____--_1_--dtor$0.c)
 *     _std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____::_1_::dtor$0 @ 0x18035C7E9 (_std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____--_1_--dtor$0.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x18035ED7E (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _std::_Ref_count_obj_Concurrency::details::_ExceptionHolder_::_Ref_count_obj_Concurrency::details::_ExceptionHolder__std::exception_ptr_const_&_Concurrency::details::_TaskCreationCallstack__::_1_::dtor$1 @ 0x180392810 (_std--_Ref_count_obj_Concurrency--details--_ExceptionHolder_--_Ref_count_obj_Concur_ea_180392810.c)
 *     _std::call_once__lambda_0e64988457575224279dcb6d61e61bdd____::_1_::dtor$0 @ 0x180393AB5 (_std--call_once__lambda_0e64988457575224279dcb6d61e61bdd____--_1_--dtor$0.c)
 *     __lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::dtor$4 @ 0x180395100 (__lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator()_--_1_--dtor$4.c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::dtor$2 @ 0x18039534B (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--dtor$2.c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::dtor$3 @ 0x1803953BE (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--dtor$3.c)
 *     _std::exception_ptr::_Copy_exception_::_1_::dtor$0 @ 0x180396B83 (_std--exception_ptr--_Copy_exception_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::dtor$0 @ 0x180398183 (_Concurrency--details--_Task_impl_base--_ScheduleTask_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::dtor$0 @ 0x18039865B (_Concurrency--details--_Task_impl_base--_Wait_--_1_--dtor$0.c)
 *     _Concurrency::details::_PPLTaskHandle_unsigned_char_Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_ContinuationTaskHandleBase_::invoke_::_1_::dtor$0 @ 0x180398C76 (_Concurrency--details--_PPLTaskHandle_unsigned_char_Concurrency--task_bool_--_Conti_ea_180398C76.c)
 *     _std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____::_1_::dtor$0 @ 0x1803E3451 (_std--call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
