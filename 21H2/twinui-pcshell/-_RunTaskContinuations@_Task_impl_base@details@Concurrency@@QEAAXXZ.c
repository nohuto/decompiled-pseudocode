/*
 * XREFs of ?_RunTaskContinuations@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x180397D34
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_763529b0c7473cbc215a52d189ac9b18_@@X$$V@std@@EEAAXXZ @ 0x180397540 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_763529b0c7473cbc215a52d189ac9b18_@@X$$V@std@@EEAAXXZ.c)
 *     ?_FinalizeAndRunContinuations@?$_Task_impl@E@details@Concurrency@@QEAAXE@Z @ 0x180397684 (-_FinalizeAndRunContinuations@-$_Task_impl@E@details@Concurrency@@QEAAXE@Z.c)
 * Callees:
 *     ?_RunContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x180397BB8 (-_RunContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@.c)
 */

void __fastcall Concurrency::details::_Task_impl_base::_RunTaskContinuations(
        Concurrency::details::_Task_impl_base *this)
{
  struct Concurrency::details::_ContinuationTaskHandleBase *v1; // rdx
  struct Concurrency::details::_ContinuationTaskHandleBase *v3; // rbx

  v1 = (struct Concurrency::details::_ContinuationTaskHandleBase *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v1 )
  {
    do
    {
      v3 = (struct Concurrency::details::_ContinuationTaskHandleBase *)*((_QWORD *)v1 + 1);
      Concurrency::details::_Task_impl_base::_RunContinuation(this, v1);
      v1 = v3;
    }
    while ( v3 );
  }
}
