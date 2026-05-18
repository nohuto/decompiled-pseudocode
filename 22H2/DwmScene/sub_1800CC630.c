/*
 * XREFs of sub_1800CC630 @ 0x1800CC630
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CC4C4 @ 0x1800CC4C4 (sub_1800CC4C4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CC630(_QWORD *a1, char a2)
{
  sub_1800CC4C4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
