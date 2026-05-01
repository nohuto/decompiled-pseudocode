/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4d0df6276ef292ef95f7b637041a733___::_scalar_deleting_destructor_ @ 0x180065F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4d0df6276ef292ef95f7b637041a733___::_scalar_deleting_destructor_(
        void **a1,
        const struct std::nothrow_t *a2)
{
  char v2; // di
  void *v4; // rcx
  void *v5; // rcx

  v2 = (char)a2;
  operator delete(a1[5], a2);
  v4 = a1[3];
  if ( v4 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[2] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
