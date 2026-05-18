/*
 * XREFs of sub_1800230A0 @ 0x1800230A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021E4C @ 0x180021E4C (sub_180021E4C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800230A0(_QWORD *a1, char a2)
{
  sub_180021E4C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
