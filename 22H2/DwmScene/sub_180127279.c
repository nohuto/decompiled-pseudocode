/*
 * XREFs of sub_180127279 @ 0x180127279
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800319E0 @ 0x1800319E0 (sub_1800319E0.c)
 *     sub_18006BAD4 @ 0x18006BAD4 (sub_18006BAD4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180127279(__int64 a1, __int64 a2)
{
  sub_18006BAD4(*(_QWORD *)(a2 + 48), *(__int64 **)(a2 + 32), *(__int64 **)(a2 + 64));
  sub_1800319E0(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 40));
  throw;
}
