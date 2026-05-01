/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f___::_scalar_deleting_destructor_ @ 0x1800CFFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_43e2ea7707e3cc3476f49dcfffc6812f_::__lambda_43e2ea7707e3cc3476f49dcfffc6812f_ @ 0x1800CE960 (_lambda_43e2ea7707e3cc3476f49dcfffc6812f_--__lambda_43e2ea7707e3cc3476f49dcfffc6812f_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_43e2ea7707e3cc3476f49dcfffc6812f___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_43e2ea7707e3cc3476f49dcfffc6812f_::__lambda_43e2ea7707e3cc3476f49dcfffc6812f_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x158);
  return a1;
}
