/*
 * XREFs of _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$5 @ 0x180392A29
 * Callers:
 *     <none>
 * Callees:
 *     ??1_TaskCreationCallstack@details@Concurrency@@QEAA@XZ @ 0x180394BD0 (--1_TaskCreationCallstack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 224) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 224) &= ~2u;
    Concurrency::details::_TaskCreationCallstack::~_TaskCreationCallstack((Concurrency::details::_TaskCreationCallstack *)(a2 + 56));
  }
}
