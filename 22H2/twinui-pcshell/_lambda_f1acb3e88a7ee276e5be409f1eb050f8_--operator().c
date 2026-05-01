/*
 * XREFs of _lambda_f1acb3e88a7ee276e5be409f1eb050f8_::operator() @ 0x180136F78
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f1acb3e88a7ee276e5be409f1eb050f8___::Run @ 0x180140020 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f1acb3e88a7ee276e5be409f1eb050f8___--Run.c)
 * Callees:
 *     ??R_lambda_5284c52766b4bd9adb216c46a73dea2b_@@QEBAXXZ @ 0x180136A40 (--R_lambda_5284c52766b4bd9adb216c46a73dea2b_@@QEBAXXZ.c)
 */

void __fastcall lambda_f1acb3e88a7ee276e5be409f1eb050f8_::operator()(void **a1)
{
  _QWORD *v1; // rcx
  const void *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 1;
  try
  {
    _lambda_5284c52766b4bd9adb216c46a73dea2b_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = (const void *)std::current_exception(v3);
    __ExceptionPtrAssign(*a1, v2);
    __ExceptionPtrDestroy(v3);
  }
}
