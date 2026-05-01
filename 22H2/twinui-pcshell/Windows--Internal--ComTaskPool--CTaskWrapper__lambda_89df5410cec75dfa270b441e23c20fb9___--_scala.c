/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9___::_scalar_deleting_destructor_ @ 0x1802F62C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_89df5410cec75dfa270b441e23c20fb9_::__lambda_89df5410cec75dfa270b441e23c20fb9_ @ 0x1802F5544 (_lambda_89df5410cec75dfa270b441e23c20fb9_--__lambda_89df5410cec75dfa270b441e23c20fb9_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  lambda_89df5410cec75dfa270b441e23c20fb9_::__lambda_89df5410cec75dfa270b441e23c20fb9_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
