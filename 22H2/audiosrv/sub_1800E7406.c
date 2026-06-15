/*
 * XREFs of sub_1800E7406 @ 0x1800E7406
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800E9030 @ 0x1800E9030 (sub_1800E9030.c)
 */

void __fastcall __noreturn sub_1800E7406(__int64 a1, __int64 a2)
{
  sub_1800E9030(a1, *(_QWORD *)(a2 + 128));
  throw;
}
