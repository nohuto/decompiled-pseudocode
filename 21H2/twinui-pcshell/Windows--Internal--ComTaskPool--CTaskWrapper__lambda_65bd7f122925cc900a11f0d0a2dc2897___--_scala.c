/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897___::_scalar_deleting_destructor_ @ 0x18014F340
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_65bd7f122925cc900a11f0d0a2dc2897_::__lambda_65bd7f122925cc900a11f0d0a2dc2897_ @ 0x18014EDC4 (_lambda_65bd7f122925cc900a11f0d0a2dc2897_--__lambda_65bd7f122925cc900a11f0d0a2dc2897_.c)
 */

HSTRING *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897___::_scalar_deleting_destructor_(
        HSTRING *a1,
        char a2)
{
  lambda_65bd7f122925cc900a11f0d0a2dc2897_::__lambda_65bd7f122925cc900a11f0d0a2dc2897_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
