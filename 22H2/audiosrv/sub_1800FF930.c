/*
 * XREFs of sub_1800FF930 @ 0x1800FF930
 * Callers:
 *     sub_1800FABF8 @ 0x1800FABF8 (sub_1800FABF8.c)
 *     sub_1800FEE8C @ 0x1800FEE8C (sub_1800FEE8C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180104404 @ 0x180104404 (sub_180104404.c)
 */

__int64 __fastcall sub_1800FF930(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 200) + 272LL) = 0LL;
  sub_180104404(*(_QWORD *)(a1 + 200), a2, 0LL);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), a1);
  *(_BYTE *)(a1 + 48) = 0;
  return result;
}
