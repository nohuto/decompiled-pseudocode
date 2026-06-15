/*
 * XREFs of sub_1801061E8 @ 0x1801061E8
 * Callers:
 *     sub_180105D90 @ 0x180105D90 (sub_180105D90.c)
 *     sub_180105F64 @ 0x180105F64 (sub_180105F64.c)
 *     sub_1801065E8 @ 0x1801065E8 (sub_1801065E8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801061E8(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
