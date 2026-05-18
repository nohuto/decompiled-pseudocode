/*
 * XREFs of sub_18003E720 @ 0x18003E720
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E638 @ 0x18003E638 (sub_18003E638.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18003E720(_QWORD *a1, char a2)
{
  sub_18003E638(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
