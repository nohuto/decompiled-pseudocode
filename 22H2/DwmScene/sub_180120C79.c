/*
 * XREFs of sub_180120C79 @ 0x180120C79
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B780 @ 0x18002B780 (sub_18002B780.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180120C79(__int64 a1, __int64 a2)
{
  sub_18002B780(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
