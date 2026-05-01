/*
 * XREFs of _lambda_6e497bc91bd1b514200f3fa30e5ef36f_::operator() @ 0x180136C58
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e497bc91bd1b514200f3fa30e5ef36f___::Run @ 0x180140180 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6e497bc91bd1b514200f3fa30e5ef36f___--Run.c)
 * Callees:
 *     ??R_lambda_1852a6ec92915f877811d72e8734d237_@@QEBAXXZ @ 0x1801367F4 (--R_lambda_1852a6ec92915f877811d72e8734d237_@@QEBAXXZ.c)
 */

void __fastcall lambda_6e497bc91bd1b514200f3fa30e5ef36f_::operator()(void **a1)
{
  __int64 v1; // rcx
  const void *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64)(a1 + 1);
  try
  {
    _lambda_1852a6ec92915f877811d72e8734d237_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = (const void *)std::current_exception(v3);
    __ExceptionPtrAssign(*a1, v2);
    __ExceptionPtrDestroy(v3);
  }
}
