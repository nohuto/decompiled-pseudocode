/*
 * XREFs of sub_1801209FA @ 0x1801209FA
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800268AC @ 0x1800268AC (sub_1800268AC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801209FA(__int64 a1, __int64 a2)
{
  sub_1800268AC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
