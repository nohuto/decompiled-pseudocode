/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_13e7c7d1bbe76ddb28a4a415717d5504___::_scalar_deleting_destructor_ @ 0x1800CFF50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_13e7c7d1bbe76ddb28a4a415717d5504_::__lambda_13e7c7d1bbe76ddb28a4a415717d5504_ @ 0x1800CE938 (_lambda_13e7c7d1bbe76ddb28a4a415717d5504_--__lambda_13e7c7d1bbe76ddb28a4a415717d5504_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_13e7c7d1bbe76ddb28a4a415717d5504___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_13e7c7d1bbe76ddb28a4a415717d5504_::__lambda_13e7c7d1bbe76ddb28a4a415717d5504_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x180);
  return a1;
}
