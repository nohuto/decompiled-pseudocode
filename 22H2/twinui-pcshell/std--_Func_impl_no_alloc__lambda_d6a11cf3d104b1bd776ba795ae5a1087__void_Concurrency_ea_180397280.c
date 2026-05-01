/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d6a11cf3d104b1bd776ba795ae5a1087__void_Concurrency::task_bool___::_Do_call @ 0x180397280
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::operator() @ 0x1803951A4 (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--operator().c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_d6a11cf3d104b1bd776ba795ae5a1087__void_Concurrency::task_bool___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4[0] = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  v4[1] = v3;
  lambda_d6a11cf3d104b1bd776ba795ae5a1087_::operator()((_QWORD *)(a1 + 8), v4);
}
