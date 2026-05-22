/*
 * XREFs of _dynamic_atexit_destructor_for__EdgyConnection::s_spThis__ @ 0x1800525D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__EdgyConnection::s_spThis__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = EdgyConnection::s_spThis;
  if ( EdgyConnection::s_spThis )
  {
    EdgyConnection::s_spThis = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}
