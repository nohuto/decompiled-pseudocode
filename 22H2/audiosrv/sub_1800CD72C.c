/*
 * XREFs of sub_1800CD72C @ 0x1800CD72C
 * Callers:
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 *     sub_1800E2BEC @ 0x1800E2BEC (sub_1800E2BEC.c)
 * Callees:
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 */

__int64 *__fastcall sub_1800CD72C(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  sub_1800CD58C(a3, a3);
  return a3;
}
