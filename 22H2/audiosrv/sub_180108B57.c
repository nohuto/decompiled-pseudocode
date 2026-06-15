/*
 * XREFs of sub_180108B57 @ 0x180108B57
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_180108408 @ 0x180108408 (sub_180108408.c)
 */

void __fastcall __noreturn sub_180108B57(__int64 a1, __int64 a2)
{
  sub_180108408(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 120));
  throw;
}
