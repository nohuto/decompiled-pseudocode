/*
 * XREFs of ??1task_continuation_context@Concurrency@@QEAA@XZ @ 0x180394CF8
 * Callers:
 *     _Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____::_1_::dtor$2 @ 0x180393EEF (_Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::task_continuation_context::~task_continuation_context(
        Concurrency::task_continuation_context *this)
{
  Concurrency::details::_ContextCallback::_Reset(this);
}
