/*
 * XREFs of sub_1800F0195 @ 0x1800F0195
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800EFEC4 @ 0x1800EFEC4 (sub_1800EFEC4.c)
 */

void __fastcall __noreturn sub_1800F0195(__int64 a1, __int64 a2)
{
  sub_1800EFEC4(*(_QWORD **)(a2 + 120), *(_QWORD **)(a2 + 112));
  sub_1800472E0(*(_QWORD *)(a2 + 32), 8LL * *(_QWORD *)(a2 + 136));
  throw;
}
