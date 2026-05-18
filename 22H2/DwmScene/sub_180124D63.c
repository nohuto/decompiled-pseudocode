/*
 * XREFs of sub_180124D63 @ 0x180124D63
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006BB08 @ 0x18006BB08 (sub_18006BB08.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180124D63(__int64 a1, __int64 a2)
{
  sub_18006BB08(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
