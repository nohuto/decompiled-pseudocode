/*
 * XREFs of sub_1800D4F2C @ 0x1800D4F2C
 * Callers:
 *     sub_180076E40 @ 0x180076E40 (sub_180076E40.c)
 *     sub_1800D5D51 @ 0x1800D5D51 (sub_1800D5D51.c)
 *     sub_1800D5D81 @ 0x1800D5D81 (sub_1800D5D81.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D4F2C(__int64 **a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = **a1;
    result = (__int64)a1[1];
    **a1 = result;
    if ( v1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
