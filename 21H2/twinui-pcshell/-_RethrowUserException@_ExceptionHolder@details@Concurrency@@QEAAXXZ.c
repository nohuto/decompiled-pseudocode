/*
 * XREFs of ?_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ @ 0x180397B34
 * Callers:
 *     ?_Wait@_Task_impl_base@details@Concurrency@@QEAA?AW4task_group_status@3@XZ @ 0x180398390 (-_Wait@_Task_impl_base@details@Concurrency@@QEAA-AW4task_group_status@3@XZ.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::catch$13 @ 0x1803985F5 (_Concurrency--details--_Task_impl_base--_Wait_--_1_--catch$13.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18035CBA4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18035ED68 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

void __fastcall __noreturn Concurrency::details::_ExceptionHolder::_RethrowUserException(
        Concurrency::details::_ExceptionHolder *this)
{
  std::exception_ptr *v1; // rax
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_DWORD *)this )
    _InterlockedExchange((volatile __int32 *)this, 1);
  v1 = std::exception_ptr::exception_ptr(
         (std::exception_ptr *)v2,
         (Concurrency::details::_ExceptionHolder *)((char *)this + 8));
  std::rethrow_exception(v1);
  JUMPOUT(0x180397B5BLL);
}
