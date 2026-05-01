/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_51d6f8f9b06e99048dd25aff80a12ac0___::_scalar_deleting_destructor_ @ 0x1800D0060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_51d6f8f9b06e99048dd25aff80a12ac0_::__lambda_51d6f8f9b06e99048dd25aff80a12ac0_ @ 0x1800CE9D0 (_lambda_51d6f8f9b06e99048dd25aff80a12ac0_--__lambda_51d6f8f9b06e99048dd25aff80a12ac0_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_51d6f8f9b06e99048dd25aff80a12ac0___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_51d6f8f9b06e99048dd25aff80a12ac0_::__lambda_51d6f8f9b06e99048dd25aff80a12ac0_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
