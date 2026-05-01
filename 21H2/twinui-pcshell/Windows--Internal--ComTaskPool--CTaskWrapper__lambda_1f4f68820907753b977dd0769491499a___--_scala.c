/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a___::_scalar_deleting_destructor_ @ 0x1802F6480
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_1f4f68820907753b977dd0769491499a_::__lambda_1f4f68820907753b977dd0769491499a_ @ 0x1802F5744 (_lambda_1f4f68820907753b977dd0769491499a_--__lambda_1f4f68820907753b977dd0769491499a_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  lambda_1f4f68820907753b977dd0769491499a_::__lambda_1f4f68820907753b977dd0769491499a_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
