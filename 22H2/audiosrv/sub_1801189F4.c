/*
 * XREFs of sub_1801189F4 @ 0x1801189F4
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x18006AA72 (_o___std_exception_copy.c)
 */

__int64 __fastcall sub_1801189F4(__int64 a1)
{
  *(_QWORD *)a1 = &off_180149EB8;
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy();
  *(_QWORD *)a1 = &off_180155CF8;
  return a1;
}
