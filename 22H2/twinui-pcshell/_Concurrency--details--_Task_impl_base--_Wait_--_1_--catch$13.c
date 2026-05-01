/*
 * XREFs of _Concurrency::details::_Task_impl_base::_Wait_::_1_::catch$13 @ 0x180398325
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1803963DC (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 *     ?_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ @ 0x180397864 (-_RethrowUserException@_ExceptionHolder@details@Concurrency@@QEAAXXZ.c)
 */

void __fastcall __noreturn Concurrency::details::_Task_impl_base::_Wait_::_1_::catch_13(__int64 a1, __int64 a2)
{
  Concurrency::details::_ExceptionHolder **v3; // rbx

  v3 = *(Concurrency::details::_ExceptionHolder ***)(a2 + 160);
  if ( !v3[2] )
  {
    __ExceptionPtrCreate((void *)(a2 + 80));
    __ExceptionPtrCurrentException((void *)(a2 + 80));
    Concurrency::details::_Task_impl_base::_CancelWithException(
      (Concurrency::details::_Task_impl_base *)v3,
      (const struct std::exception_ptr *)(a2 + 80));
    __ExceptionPtrDestroy((void *)(a2 + 80));
  }
  Concurrency::details::_ExceptionHolder::_RethrowUserException(v3[2]);
}
