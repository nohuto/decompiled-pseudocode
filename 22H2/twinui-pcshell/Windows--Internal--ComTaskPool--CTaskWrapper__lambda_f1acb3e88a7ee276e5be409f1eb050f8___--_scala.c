/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f1acb3e88a7ee276e5be409f1eb050f8___::_scalar_deleting_destructor_ @ 0x180137050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f1acb3e88a7ee276e5be409f1eb050f8___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
