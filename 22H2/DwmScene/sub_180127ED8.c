/*
 * XREFs of sub_180127ED8 @ 0x180127ED8
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF568 @ 0x1800CF568 (sub_1800CF568.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180127ED8(__int64 a1, __int64 a2)
{
  sub_1800CF568(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
