/*
 * XREFs of sub_1800DA700 @ 0x1800DA700
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DA610 @ 0x1800DA610 (sub_1800DA610.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DA700(_QWORD *a1, char a2)
{
  sub_1800DA610(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
