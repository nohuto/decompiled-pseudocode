/*
 * XREFs of _lambda_45e2c74cd21d3bb3db90a0d12fd30472_::operator() @ 0x180136AD0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_45e2c74cd21d3bb3db90a0d12fd30472___::Run @ 0x180140160 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_45e2c74cd21d3bb3db90a0d12fd30472___--Run.c)
 * Callees:
 *     _lambda_d2b9f9141b354d7aab2c271df0a099ad_::operator() @ 0x180136F68 (_lambda_d2b9f9141b354d7aab2c271df0a099ad_--operator().c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_45e2c74cd21d3bb3db90a0d12fd30472_::operator()(void **a1)
{
  void **v1; // rcx
  const void *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 1;
  try
  {
    lambda_d2b9f9141b354d7aab2c271df0a099ad_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = (const void *)std::current_exception(v3);
    __ExceptionPtrAssign(*a1, v2);
    __ExceptionPtrDestroy(v3);
  }
}
