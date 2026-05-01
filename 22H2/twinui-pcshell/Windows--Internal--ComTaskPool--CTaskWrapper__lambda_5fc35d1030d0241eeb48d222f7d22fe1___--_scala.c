/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5fc35d1030d0241eeb48d222f7d22fe1___::_scalar_deleting_destructor_ @ 0x1800D00E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_5fc35d1030d0241eeb48d222f7d22fe1_::__lambda_5fc35d1030d0241eeb48d222f7d22fe1_ @ 0x1800CEA0C (_lambda_5fc35d1030d0241eeb48d222f7d22fe1_--__lambda_5fc35d1030d0241eeb48d222f7d22fe1_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5fc35d1030d0241eeb48d222f7d22fe1___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_5fc35d1030d0241eeb48d222f7d22fe1_::__lambda_5fc35d1030d0241eeb48d222f7d22fe1_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
