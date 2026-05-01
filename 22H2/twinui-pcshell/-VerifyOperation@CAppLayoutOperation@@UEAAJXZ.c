/*
 * XREFs of ?VerifyOperation@CAppLayoutOperation@@UEAAJXZ @ 0x1804EE4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutOperation::VerifyOperation(CAppLayoutOperation *this)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 3);
  if ( !v2 || !*((_QWORD *)this + 4) )
    return 2147647529LL;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 208LL))(*((_QWORD *)this + 4));
  return result;
}
