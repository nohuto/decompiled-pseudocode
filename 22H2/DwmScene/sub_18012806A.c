/*
 * XREFs of sub_18012806A @ 0x18012806A
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D4C64 @ 0x1800D4C64 (sub_1800D4C64.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012806A(__int64 a1, __int64 a2)
{
  sub_1800D4C64(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
