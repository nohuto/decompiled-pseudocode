/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x18035CA40
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1801018AC (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Found.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237____::_1_::dtor$0 @ 0x1801326AE (__anonymous_namespace_--RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b____::_1_::dtor$0 @ 0x1801327DA (__anonymous_namespace_--RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_7573529bdd9445da64c4582e06079e73____::_1_::dtor$0 @ 0x180132916 (__anonymous_namespace_--RunSynchronousInSTA__lambda_7573529bdd9445da64c4582e06079e73____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad____::_1_::dtor$0 @ 0x180132A52 (__anonymous_namespace_--RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad____--_1_--d.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::unhandled_exception @ 0x1801463C8 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1801463C8.c)
 *     _std::call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa____::_1_::dtor$0 @ 0x18035C45D (_std--call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa____--_1_--dtor$0.c)
 *     _std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____::_1_::dtor$0 @ 0x18035C519 (_std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____--_1_--dtor$0.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x18035EAAE (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _std::_Ref_count_obj_Concurrency::details::_ExceptionHolder_::_Ref_count_obj_Concurrency::details::_ExceptionHolder__std::exception_ptr_const_&_Concurrency::details::_TaskCreationCallstack__::_1_::dtor$1 @ 0x180392540 (_std--_Ref_count_obj_Concurrency--details--_ExceptionHolder_--_Ref_count_obj_Concur_ea_180392540.c)
 *     _std::call_once__lambda_0e64988457575224279dcb6d61e61bdd____::_1_::dtor$0 @ 0x1803937E5 (_std--call_once__lambda_0e64988457575224279dcb6d61e61bdd____--_1_--dtor$0.c)
 *     __lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::dtor$4 @ 0x180394E30 (__lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator()_--_1_--dtor$4.c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::dtor$2 @ 0x18039507B (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--dtor$2.c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::dtor$3 @ 0x1803950EE (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--dtor$3.c)
 *     _std::exception_ptr::_Copy_exception_::_1_::dtor$0 @ 0x1803968B3 (_std--exception_ptr--_Copy_exception_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::dtor$0 @ 0x180397EB3 (_Concurrency--details--_Task_impl_base--_ScheduleTask_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::dtor$0 @ 0x18039838B (_Concurrency--details--_Task_impl_base--_Wait_--_1_--dtor$0.c)
 *     _Concurrency::details::_PPLTaskHandle_unsigned_char_Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_ContinuationTaskHandleBase_::invoke_::_1_::dtor$0 @ 0x1803989A6 (_Concurrency--details--_PPLTaskHandle_unsigned_char_Concurrency--task_bool_--_Conti_ea_1803989A6.c)
 *     _std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____::_1_::dtor$0 @ 0x1803E3181 (_std--call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
