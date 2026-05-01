/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_536d29ca497f1a4a88268fb5f9ff4d76___::_scalar_deleting_destructor_ @ 0x1800D00B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_536d29ca497f1a4a88268fb5f9ff4d76_::__lambda_536d29ca497f1a4a88268fb5f9ff4d76_ @ 0x1800CE9F8 (_lambda_536d29ca497f1a4a88268fb5f9ff4d76_--__lambda_536d29ca497f1a4a88268fb5f9ff4d76_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_536d29ca497f1a4a88268fb5f9ff4d76___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  lambda_536d29ca497f1a4a88268fb5f9ff4d76_::__lambda_536d29ca497f1a4a88268fb5f9ff4d76_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
