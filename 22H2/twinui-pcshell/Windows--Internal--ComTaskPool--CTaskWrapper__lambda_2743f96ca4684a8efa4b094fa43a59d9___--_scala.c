/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___::_scalar_deleting_destructor_ @ 0x18001B1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)a1[3];
  if ( v4 )
    DeleteObject(v4);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
