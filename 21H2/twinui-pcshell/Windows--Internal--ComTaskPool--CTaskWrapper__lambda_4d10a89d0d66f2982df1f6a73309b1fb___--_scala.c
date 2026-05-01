/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d10a89d0d66f2982df1f6a73309b1fb___::_scalar_deleting_destructor_ @ 0x1800D0010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::__lambda_4d10a89d0d66f2982df1f6a73309b1fb_ @ 0x1800CE9A8 (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--__lambda_4d10a89d0d66f2982df1f6a73309b1fb_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d10a89d0d66f2982df1f6a73309b1fb___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_4d10a89d0d66f2982df1f6a73309b1fb_::__lambda_4d10a89d0d66f2982df1f6a73309b1fb_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
