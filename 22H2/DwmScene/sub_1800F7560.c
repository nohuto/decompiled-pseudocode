/*
 * XREFs of sub_1800F7560 @ 0x1800F7560
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F73EC @ 0x1800F73EC (sub_1800F73EC.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800F7560(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800F73EC(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
