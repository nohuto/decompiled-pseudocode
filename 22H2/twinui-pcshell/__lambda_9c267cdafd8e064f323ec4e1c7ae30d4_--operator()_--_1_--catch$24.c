/*
 * XREFs of __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::catch$24 @ 0x180395087
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1803963DC (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 */

__int64 __fastcall _lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::catch_24(__int64 a1, __int64 a2)
{
  Concurrency::details::_Task_impl_base *v3; // rbx

  v3 = **(Concurrency::details::_Task_impl_base ***)(a2 + 96);
  __ExceptionPtrCreate((void *)(a2 + 48));
  __ExceptionPtrCurrentException((void *)(a2 + 48));
  Concurrency::details::_Task_impl_base::_CancelWithException(v3, (const struct std::exception_ptr *)(a2 + 48));
  __ExceptionPtrDestroy((void *)(a2 + 48));
  return 0LL;
}
