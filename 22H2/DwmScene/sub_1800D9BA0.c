/*
 * XREFs of sub_1800D9BA0 @ 0x1800D9BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D9B14 @ 0x1800D9B14 (sub_1800D9B14.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800D9BA0(_QWORD *a1, char a2)
{
  sub_1800D9B14(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
