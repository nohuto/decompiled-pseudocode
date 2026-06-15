/*
 * XREFs of sub_180110E6B @ 0x180110E6B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_180113C08 @ 0x180113C08 (sub_180113C08.c)
 */

void __fastcall __noreturn sub_180110E6B(__int64 a1, __int64 a2)
{
  sub_180113C08(a1, *(_QWORD *)(a2 + 96));
  throw;
}
