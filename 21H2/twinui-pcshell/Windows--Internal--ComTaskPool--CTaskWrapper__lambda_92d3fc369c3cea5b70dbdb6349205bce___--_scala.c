/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce___::_scalar_deleting_destructor_ @ 0x1802DB1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_92d3fc369c3cea5b70dbdb6349205bce_::__lambda_92d3fc369c3cea5b70dbdb6349205bce_ @ 0x1802D99AC (_lambda_92d3fc369c3cea5b70dbdb6349205bce_--__lambda_92d3fc369c3cea5b70dbdb6349205bce_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_92d3fc369c3cea5b70dbdb6349205bce_::__lambda_92d3fc369c3cea5b70dbdb6349205bce_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
