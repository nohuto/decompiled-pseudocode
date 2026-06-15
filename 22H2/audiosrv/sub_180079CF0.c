/*
 * XREFs of sub_180079CF0 @ 0x180079CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800BB2E4 @ 0x1800BB2E4 (sub_1800BB2E4.c)
 */

void __fastcall __noreturn sub_180079CF0(__int64 a1, _QWORD *a2)
{
  sub_1800BB2E4(a1, a2[17], a2[4]);
  sub_1800472E0(a2[15], 8LL * a2[14]);
  throw;
}
