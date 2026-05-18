/*
 * XREFs of sub_180081408 @ 0x180081408
 * Callers:
 *     sub_1800883F8 @ 0x1800883F8 (sub_1800883F8.c)
 * Callees:
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180081408(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  _QWORD *i; // rbx

  result = sub_180083A6C(a1);
  v5 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v5; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 48LL))(*i, a2);
  }
  return result;
}
