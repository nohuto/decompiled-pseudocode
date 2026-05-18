/*
 * XREFs of sub_1800390E4 @ 0x1800390E4
 * Callers:
 *     sub_180121300 @ 0x180121300 (sub_180121300.c)
 *     sub_1801213B6 @ 0x1801213B6 (sub_1801213B6.c)
 *     sub_180121416 @ 0x180121416 (sub_180121416.c)
 *     sub_18012B0A0 @ 0x18012B0A0 (sub_18012B0A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800390E4(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = a1 + 8;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != v2;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return result;
}
