/*
 * XREFs of sub_180062F00 @ 0x180062F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062DE8 @ 0x180062DE8 (sub_180062DE8.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180062F00(_QWORD *a1, char a2)
{
  sub_180062DE8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
