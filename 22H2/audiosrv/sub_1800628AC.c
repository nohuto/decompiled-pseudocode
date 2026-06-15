/*
 * XREFs of sub_1800628AC @ 0x1800628AC
 * Callers:
 *     sub_180062450 @ 0x180062450 (sub_180062450.c)
 *     sub_1800FA18C @ 0x1800FA18C (sub_1800FA18C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800628AC(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
