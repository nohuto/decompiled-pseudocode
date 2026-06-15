/*
 * XREFs of sub_180108A7F @ 0x180108A7F
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1801083B4 @ 0x1801083B4 (sub_1801083B4.c)
 */

void __fastcall __noreturn sub_180108A7F(__int64 a1, __int64 a2)
{
  sub_1801083B4(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 120));
  throw;
}
