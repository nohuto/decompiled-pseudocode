/*
 * XREFs of sub_180042150 @ 0x180042150
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800420E4 @ 0x1800420E4 (sub_1800420E4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180042150(_QWORD *a1, char a2)
{
  sub_1800420E4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
