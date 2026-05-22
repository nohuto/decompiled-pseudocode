/*
 * XREFs of _std::_Callback_once_std::tuple__lambda_7a8cdf47427de701aad174af942599f3__&&_std::exception_ptr_&__std::integer_sequence_unsigned___int64_0__1__::_1_::catch$7 @ 0x180189D32
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Callback_once_std::tuple__lambda_7a8cdf47427de701aad174af942599f3_____std::exception_ptr____std::integer_sequence_unsigned___int64_0__1__::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 72);
  __ExceptionPtrCreate((void *)(a2 + 32));
  __ExceptionPtrCurrentException((void *)(a2 + 32));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 32));
  __ExceptionPtrDestroy((void *)(a2 + 32));
  return 0LL;
}
