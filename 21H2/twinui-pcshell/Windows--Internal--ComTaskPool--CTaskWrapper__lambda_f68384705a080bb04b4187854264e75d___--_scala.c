/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f68384705a080bb04b4187854264e75d___::_scalar_deleting_destructor_ @ 0x1800D01F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_f68384705a080bb04b4187854264e75d_::__lambda_f68384705a080bb04b4187854264e75d_ @ 0x1800CEA94 (_lambda_f68384705a080bb04b4187854264e75d_--__lambda_f68384705a080bb04b4187854264e75d_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f68384705a080bb04b4187854264e75d___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_f68384705a080bb04b4187854264e75d_::__lambda_f68384705a080bb04b4187854264e75d_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
