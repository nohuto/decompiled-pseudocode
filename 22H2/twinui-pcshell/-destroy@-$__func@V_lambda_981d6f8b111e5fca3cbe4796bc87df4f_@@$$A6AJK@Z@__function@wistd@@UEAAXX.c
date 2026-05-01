/*
 * XREFs of ?destroy@?$__func@V_lambda_981d6f8b111e5fca3cbe4796bc87df4f_@@$$A6AJK@Z@__function@wistd@@UEAAXXZ @ 0x18022D510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_981d6f8b111e5fca3cbe4796bc87df4f_,long (unsigned long)>::destroy(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
