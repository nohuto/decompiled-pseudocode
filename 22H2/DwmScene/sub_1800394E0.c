/*
 * XREFs of sub_1800394E0 @ 0x1800394E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039118 @ 0x180039118 (sub_180039118.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800394E0(_QWORD *a1, char a2)
{
  sub_180039118(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
