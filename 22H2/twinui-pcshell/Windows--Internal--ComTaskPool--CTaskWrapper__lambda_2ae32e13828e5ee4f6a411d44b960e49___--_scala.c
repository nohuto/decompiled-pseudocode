/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49___::_scalar_deleting_destructor_ @ 0x1800A1DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_2ae32e13828e5ee4f6a411d44b960e49_::__lambda_2ae32e13828e5ee4f6a411d44b960e49_ @ 0x1800A1294 (_lambda_2ae32e13828e5ee4f6a411d44b960e49_--__lambda_2ae32e13828e5ee4f6a411d44b960e49_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  lambda_2ae32e13828e5ee4f6a411d44b960e49_::__lambda_2ae32e13828e5ee4f6a411d44b960e49_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
