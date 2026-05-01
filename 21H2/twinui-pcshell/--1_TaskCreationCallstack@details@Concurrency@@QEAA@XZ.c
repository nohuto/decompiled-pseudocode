/*
 * XREFs of ??1_TaskCreationCallstack@details@Concurrency@@QEAA@XZ @ 0x180394BD0
 * Callers:
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$4 @ 0x1803929FC (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$4.c)
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$5 @ 0x180392A29 (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$5.c)
 *     _Concurrency::create_task_Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$1 @ 0x180393B5A (_Concurrency--create_task_Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$1.c)
 *     _Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____::_1_::dtor$1 @ 0x180393EE3 (_Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____--_1_--dtor$1.c)
 *     _Concurrency::details::_Task_impl_base::_CancelWithException_::_1_::dtor$0 @ 0x180396758 (_Concurrency--details--_Task_impl_base--_CancelWithException_--_1_--dtor$0.c)
 *     _Concurrency::details::_ThenImplOptions::_CreateOptions_::_1_::dtor$8 @ 0x1803970F2 (_Concurrency--details--_ThenImplOptions--_CreateOptions_--_1_--dtor$8.c)
 *     _Concurrency::details::_ThenImplOptions::_CreateOptions_::_1_::dtor$47 @ 0x1803970FE (_Concurrency--details--_ThenImplOptions--_CreateOptions_--_1_--dtor$47.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_TaskCreationCallstack::~_TaskCreationCallstack(
        Concurrency::details::_TaskCreationCallstack *this)
{
  std::vector<void *>::_Tidy((__int64)this + 8);
}
