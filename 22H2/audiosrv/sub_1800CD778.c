/*
 * XREFs of sub_1800CD778 @ 0x1800CD778
 * Callers:
 *     sub_180028850 @ 0x180028850 (sub_180028850.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800CD778(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // rax

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
  return a3;
}
