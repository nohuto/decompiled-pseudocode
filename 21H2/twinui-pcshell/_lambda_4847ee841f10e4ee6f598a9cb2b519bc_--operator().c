/*
 * XREFs of _lambda_4847ee841f10e4ee6f598a9cb2b519bc_::operator() @ 0x180136B40
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4847ee841f10e4ee6f598a9cb2b519bc___::Run @ 0x180140170 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4847ee841f10e4ee6f598a9cb2b519bc___--Run.c)
 * Callees:
 *     ??R_lambda_7573529bdd9445da64c4582e06079e73_@@QEBAXXZ @ 0x180136CC8 (--R_lambda_7573529bdd9445da64c4582e06079e73_@@QEBAXXZ.c)
 */

void __fastcall lambda_4847ee841f10e4ee6f598a9cb2b519bc_::operator()(void **a1)
{
  void **v1; // rcx
  const void *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 1;
  try
  {
    _lambda_7573529bdd9445da64c4582e06079e73_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = (const void *)std::current_exception(v3);
    __ExceptionPtrAssign(*a1, v2);
    __ExceptionPtrDestroy(v3);
  }
}
