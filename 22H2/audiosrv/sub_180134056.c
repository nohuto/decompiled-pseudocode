/*
 * XREFs of sub_180134056 @ 0x180134056
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_180138028 @ 0x180138028 (sub_180138028.c)
 */

void __fastcall __noreturn sub_180134056(__int64 a1, __int64 a2)
{
  sub_180138028(*(_QWORD *)(a2 + 96) + 8LL, a2 + 96, *(_QWORD *)(a2 + 120));
  throw;
}
